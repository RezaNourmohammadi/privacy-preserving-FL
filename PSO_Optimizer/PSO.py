import math

import numpy as np
from MiddleWare.pytorch_MLP_neural_net import  NeuralNetwork
from sklearn.metrics import accuracy_score
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
import json
import os
import random

def PSO_Optimize(pop, MaxIt, popSize, layer1Neurons, layer2Neurons, batchSize, inputDim, outputDim, testData, testDataLabels, precision,
                 deviceName, configFile, model, roundNum, lr, localData):
    print(deviceName + ':  is running PSO for aggregation')
    psoScaler = StandardScaler()
    popVelocity = []
    plotPathbase = configFile["DEFAULT"]["AnalyticsOutBase"] + configFile["DEFAULT"]["AggregationAlgorithm"]
    path = os.path.join(os.path.join(
        os.path.join(plotPathbase, "NumberOfParticipants_" + str(configFile["DEFAULT"]["NumberOfParticipants"])),
        "BatchSize_" + str(configFile["DEFAULT"]["BatchSize"])), deviceName)
    if not os.path.exists(path):
        os.makedirs(path)
    participantsNum = configFile["DEFAULT"]["NumberOfParticipants"]
    globalCost = float('inf')
    globaCost_it = []
    averageCost_it = []
    pbestPos = []
    popVelocity = []
    cost = []
    pbestCost = []
    #model = NeuralNetwork(inputDim, outputDim, layer1Neurons, layer2Neurons, batchSize)

    ## PSO params
    W = 1
    varMax = 10000
    varMin = -10000
    Wdamp = 0.99
    c1 = np.linspace(1, 10, MaxIt)
    c2 = np.linspace(10, 1, MaxIt)
    # C1 = 2
    # C2 = 2

    ## initialization
    for i in range(popSize):
        particle = pop[i]
        particleVelocity = []
        for j in range(len(particle)):
            particleVelocity.append( 0 * np.array(particle[j]))
        error = costEvaluation(particle, model, testData, testDataLabels, precision, psoScaler, lr, localData)
        cost.append(error)
        pbestCost.append(error)
        pbestPos.append(particle)
        popVelocity.append(particleVelocity)
        if error < globalCost:
            globalCost = error
            globalPos = particle

    globaCost_it.append(globalCost)
    averageCost_it.append(np.mean(cost))

    for it in range(MaxIt):
        C1 = c1[it]
        C2 = c2[it]
        if it > 0.75 * MaxIt:
            C1 = 2
            C2 = 2
        for i in range(popSize):
            particle = pop[i]
            cost[i], pop[i], popVelocity[i], pbestCost[i], pbestPos[i] = moveParticle(particle, globalPos, pbestPos[i],
                                      pbestCost[i], popVelocity[i], W, 0.5, 0.5, model, testData, testDataLabels, precision,
                                                                                      varMax, varMin, psoScaler, lr, localData)
            if cost[i] < globalCost:
                globalCost = cost[i]
                globalPos = pop[i]

        if math.isnan(globalPos[0][0][0]):
            print()
        globaCost_it.append(globalCost)
        averageCost_it.append(np.mean(cost))
        W = W * Wdamp


    jsonPath = path + '/' + f'Round_{roundNum}_covengenceData.json'
    print(deviceName + ': running pso finished.')
    data_dictionary = {
        "globaCost_it": globaCost_it,
        "averageCost_it": averageCost_it
    }
    json_object = json.dumps(data_dictionary, indent=4)
    with open(jsonPath, "w") as outfile:
        outfile.write(json_object)
    finalSolution = []

    for counter in range(len(globalPos)):
        p = globalPos[counter]
        innerList = []
        for innerCounter in range(len(p)):
            innerList.append((np.array(p[innerCounter])*precision).tolist())
        finalSolution.append(innerList)
        if math.isnan(finalSolution[0][0][0]):
            print()

    #errr = costEvaluation(finalSolution, model, testData, testDataLabels, precision, psoScaler, lr, localData)
    errr2 = costEvaluation(globalPos, model, testData, testDataLabels, precision, psoScaler, lr, localData)
    return finalSolution, globalCost


def costEvaluation(particle, model, testData, testDataLabels, precision, psoScaler, lr, localData):
    weights = [(np.array(particle[0])*precision).tolist(), (np.array(particle[1])*precision).tolist(), (np.array(particle[2])*precision).tolist()]
    bias = [(np.array(particle[3])*precision).tolist(), (np.array(particle[4])*precision).tolist(), (np.array(particle[5])*precision).tolist()]
    # weights = [particle[0] , particle[1],
    #            particle[2]]
    # bias = [particle[3], particle[4],
    #         particle[5]]
    #psoScaler.fit(testData.values)
    #testData = psoScaler.transform(testData.values)
    model.set_precision(precision)
    model.set_learning_rate(lr)
    model.set_weights(weights)
    model.set_bias(bias)
    acc = model.test_model(True)
    #acc = model.test_model_v2(localData)
    # predLabels = model.predict(testData)
    # acc = accuracy_score((testDataLabels).tolist(),predLabels)
    err = 1 - acc
    return err

def moveParticle(particle, globalPos, particleBestPos, pbestCost, particleVelocity, w, C1, C2, model, testData, testDataLabels, precision,
                 varMax, varMin, psoScaler, lr, localData):
    #particleVelocity = np.array(particleVelocity)
    #particle = np.array(particle)
    r1 = np.random.rand()
    r2 = np.random.rand()
    for k in range(len(particle)):
        p = np.array(particle[k])
        v = np.array(particleVelocity[k])
        pbest = np.array(particleBestPos[k])
        gbest = np.array(globalPos[k])
        v = w * v + C1 * r1 * (pbest - p) + \
            C2 * r2 * (gbest - p)
        p = p + v
        if (k == 0) | (k == 1)| (k == 2):
            for h in range(len(p)):
                for hh in range(len(p[h])):
                    if p[h][hh] > float(varMax):
                        p[h][hh] = random.randint(varMin, varMax)
                    if p[h][hh] < float(varMin):
                        p[h][hh] = random.randint(varMin, varMax)
        if (k == 3)|(k == 4)|(k == 5):
            for h in range(len(p)):
                if p[h] > float(varMax):
                    p[h] = float(varMax)
                if p[h] < float(varMin):
                    p[h] = float(varMin)
        particleVelocity[k] = v.tolist()
        particle[k] = p.tolist()

    error = costEvaluation(particle, model, testData, testDataLabels, precision, psoScaler, lr, localData)
    if error < pbestCost:
        pbestCost = error
        particleBestPos = particle
    return error, particle, particleVelocity, pbestCost, particleBestPos
