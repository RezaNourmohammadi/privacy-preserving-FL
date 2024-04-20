import numpy as np
import json
from neuralNet import *
import pandas as pd

batchSize = 5
precision = 10000
inputDim = 100
outputDim = 2
epochs = 1
learningRate = 10


nn = NeuralNetwork(inputDim, outputDim, batchSize)
dataPath = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Circom/device_geneExpression_trainData.txt"
columnNames = []
for i in range(inputDim):
    text = f'feature_{i}'
    columnNames.append(text)
columnNames.append("Activity")
x_train = pd.read_csv(
    dataPath, sep=',', names=columnNames)
x_train = x_train.sample(batchSize)
y_train = x_train["Activity"]
x_train = x_train.drop(columns="Activity")
x_train = x_train.to_numpy()
y_train = y_train.to_numpy()

#nn.fit(x_train, y_train,epochs, learningRate)




weights =np.random.randn(outputDim, inputDim) * precision
bias = np.random.randn(1,outputDim) * precision
nn.set_precision(precision)
nn.set_weights(weights)
nn.set_bias(bias)
nn.fit(x_train, y_train,epochs, learningRate)
updatedWeights = nn.get_weights()
updatedBias = nn.get_bias()
###### preparing parameters
primaryWeights = []

for i in range(len(weights)):
    for j in range(len(weights[i])):
        primaryWeights.append(str(round(weights[i][j])))

primaryBias = []
for i in range(len(bias)):
    for j in range(len(bias[i])):
        primaryBias.append(str(round(bias[i][j])))

newWeights = []
for i in range(len(updatedWeights)):
    for j in range(len(updatedWeights[i])):
        newWeights.append(str(round(updatedWeights[i][j])))


newBias = []
for i in range(len(updatedBias)):
    for j in range(len(updatedBias[i])):
        newBias.append(str(round(updatedBias[i][j])))




newRealTargets = []
for num in y_train:
    newRealTargets.append(str(round(num)))

trainSamples = []
for num in x_train:
    for rownum in num:
        trainSamples.append(str(round(rownum)))

inputData = '/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Circom/input.json'

input = {
    "netweights": primaryWeights,
    "newWeights": newWeights,
    "bias": primaryBias,
    "newBias": newBias,
    "realTargets": newRealTargets,
    "trainDataset": trainSamples
}

json_object = json.dumps(input, indent=4)
with open(inputData, "w") as outfile:
    outfile.write(json_object)
print("hi")