import numpy as np
import sys
from pysnark.runtime import snark, PrivVal, PubVal



def forward(weights, bias, inputs):
	outputs = []
	for i in range(len(weights)):
		w = weights[i]
		s = 0
		for j in range(len(inputs)):	
			s = s + w[j]*inputs[j]
		s = s + bias[i]
		outputs.append(s)
	return outputs
	
def converting_y_train(y_train, precision):
	final_out = np.zeros(num_class)
	final_out[y_train-1] = 1
	final_out = final_out * precision
	return final_out
		 
def MSE_prime(y_pred, y_true):
	minus = y_pred[0] - y_true[0]
	error = []
	for i in range(len(y_true)):
		minus_op = 2*y_pred[i] - 2*y_true[i]
		error.append(minus_op/len(y_true))
#	error = 2 * (y_pred - y_true)/y_true.size
	return error
	
def PrivateConversion(x_train):
	new_x_train=[]
	for i in range(len(x_train)):
		var = PrivVal(int(x_train[i]))
		new_x_train.append(var)
	return new_x_train
	
def dotProduct(A, B):
	out = []
	for i in range(len(B)):
		b = B[i]
		s = 0
		for j in range(len(A)):
			s = s + A[j] * b[j]
		out.append(s)
	return out
	
def outerProduct(A, B):
	out = []
	for i in range(len(A)):
		element = A[i]
		outer = []
		for j in range(len(B)):
			outer.append(element*B[j])
		out.append(outer)
	return out
	
def biasUpdate(bias, error, learningRate):
	out = []
	for i in range(len(bias)):
		b = bias[i]
		e = error[i]
		b = b - (e//learningRate)
		out.append(b)
	return out
	
def backward(weights, bias, inputSample, learning_rate, precision, error):
	#input_error = np.dot(error, weights.T)/precision 
	input_error = dotProduct(error, weights)//precision
	#weights_error = np.outer(inputSample.T, error)/precision
	weights_error = outerProduct(inputSample, error)//precision
	weights -= (weights_error//learning_rate)
	#bias -= (error//learning_rate)
	bias = biasUpdate(bias, error, learning_rate) 
	return weights, bias


@snark


def main(weights, bias, _xtrain, ytrain, _learningRate, precision):
	for i in range(len(_xtrain)):
		sample = _xtrain[i]
		pred_y = forward(weights, bias, sample)
		ytrue = converting_y_train(ytrain[i], precision)
		converted_y_true = PrivateConversion(ytrue)
		error = MSE_prime(pred_y, converted_y_true)
		weights, bias = backward(weights, bias, sample, _learningRate, precision, error)
	return weights




inputweights = np.array(eval(sys.argv[1]))
print("input weights: ", inputweights)
weights = []

for i in range(len(inputweights)):
	w = inputweights[i]
	tempWeights = []
	for j in range(len(w)):
		x = int(w[j])
		tempWeights.append(x)
	weights.append(tempWeights)



inputBias = np.array(eval(sys.argv[2]))
bias = []

for i in range(len(inputBias)):
	b = int(inputBias[i])
	bias.append(b)
	



_xtrain = np.array(eval(sys.argv[3]))
#_xtrain = []

#for i in range(len(inputXtrain)):
#	sample = inputXtrain[i]
#	tempSamples = []
#	for j in range(len(sample)):
#		s = int(sample[j])
#		tempSamples.append(s)
#	_xtrain.append(tempSamples)



ytrain = np.array(eval(sys.argv[4]))
#ytrain = []

#for i in range(len(inputYtrain)):
#	y = int(inputYtrain[i])
#	ytrain.append(y)

print("ytrain: ", ytrain)
	
precision = np.array(eval(sys.argv[5]))

_learningRate = int(sys.argv[6])

num_class = int(sys.argv[7])

print("weights: ", weights)
print("bias: ", bias)
print("_xtrain: ", _xtrain)
print("ytrain: ", ytrain)

print("main out (weights): ", main(weights, bias, _xtrain, ytrain, _learningRate, precision))
#print("new main: ", newMain(weights))
