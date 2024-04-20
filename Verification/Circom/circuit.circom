

template Multiplier() {
    signal input a;
    signal input b;
    signal output c;
    c <== a*b;
}

template transpose(m, n){
   signal input inputMat[m][n];
   signal output outputMat[n][m];
   for (var i = 0; i < n; i ++){
   	for (var j = 0; j < m; j ++){
   		outputMat[i][j] <== inputMat[j][i];
   	}
   }

}

template forward(inputDim, outputDim) {
    signal input weights[outputDim][inputDim];
    signal input bias[outputDim];
    signal input trainData[inputDim];
    signal input temp;
    signal output y[outputDim];
    var s;
    for (var j=0; j < outputDim; j++) {
    	s = 0;
	for (var k=0; k < inputDim; k++) {
		component mult = Multiplier();
		mult.a <== weights[j][k]
		mult.b <== trainData[k];
		temp <== mult.c;
		s += temp;
	}
	s += bias[j];
	y[j] <== s;
    }
}

template MSEPrime(outputDim) {
	signal input y_true[outputDim];
	signal input y_predicted[outputDim];
	signal output error[outputDim];
	var err;
	for (var i = 0; i < outputDim; i ++) {
		err = 2 * (y_true[i] - y_predicted[i]);
		error[i] <== err/outputDim;
	}
}

template dotProduct(inputDim, outputDim){
	signal input weights[inputDim][outputDim];
	signal input error[outputDim];
	signal output dotProdOut[inputDim];
	var w[outputDim];
	var s;
	var temp;
	for (var i = 0; i < inputDim; i ++) {
		w = weights[i];
		s = 0;
		for (var j = 0; j < outputDim; j ++){
			component mult = Multiplier();
			mult.a <== w[j];
			mult.b <== error[j];
			temp = mult.c;
			s += temp;
		}
		dotProdOut[i] <== s;
	}
}

template outerProduct(inputDim, outputDim){
	signal input trainSample[inputDim];
	signal input error[outputDim];
	signal output outerProdOut[inputDim][outputDim];
	var element;
	for (var i = 0; i < inputDim; i ++) {
		element = trainSample[i];
		for (var j = 0; j < outputDim; j ++) {
			outerProdOut[i][j] <== element * error[j];
		}
	}
}

template biasUpdate(learningRate, outputDim){
	signal input bias[outputDim];
	signal input error[outputDim];
	signal output updatedBias[outputDim];
	for (var i = 0; i < outputDim; i ++) {
		updatedBias[i] <== bias[i] - error[i]/learningRate;
	}
}

template backward(inputDim, outputDim, precision, learningRate){
	signal input weights[inputDim][outputDim];
	signal input bias[outputDim];
	signal input sample[inputDim];
	signal input error[outputDim];
	signal inputError[inputDim];
	signal weightsError[inputDim][outputDim];
	signal output updatedWeights[inputDim][outputDim];
	signal output updatedBias[outputDim];
	component dotProd = dotProduct(inputDim, outputDim);
	for (var i = 0; i < inputDim; i ++){
		for (var j = 0; j < outputDim; j ++) {
			dotProd.weights[i][j] <== weights[i][j];
		}
	}
	for (var i = 0; i < outputDim; i ++) {
		dotProd.error[i] <== error[i];
	}
	for (var i = 0; i < outputDim; i ++){
		inputError[i] <== dotProd.dotProdOut[i]
	}
	component outerProd = outerProduct(inputDim, outputDim);
	for (var i = 0; i < inputDim; i ++){
		outerProd.trainSample[i] <== sample[i];
	}
	for (var i = 0; i < outputDim; i ++) {
		outerProd.error[i] <== error[i];
	}
	for (var i = 0; i < inputDim; i++){
		for (var j = 0; j < outputDim; j ++){
			weightsError[i][j] <== outerProd.outerProdOut[i][j];
		}
	}
	for (var i = 0; i < inputDim; i++){
		for (var j = 0; j < outputDim; j ++){
			updatedWeights[i][j] <== weights[i][j] - weightsError[i][j]/learningRate;
		}
	}
	component updateBias = biasUpdate(learningRate, outputDim);
	for (var i = 0; i < outputDim; i ++){
		updateBias.bias[i] <== bias[i];
		updateBias.error[i] <== error[i];
	}
	for (var i = 0; i < outputDim; i ++){
		updatedBias[i] <== updateBias.updatedBias[i];
	}
}


template learningIteration(){
	var inputDim = 100;
	var outputDim = 2;
	var batchsize = 5;
	var learningRate = 10;
	var precision = 10000;
	var count = 0;
	signal input netweights[outputDim][inputDim];
	signal input newWeights[outputDim][inputDim];
	signal transposedWeights[inputDim][outputDim];
	signal input bias[outputDim];
	signal input newBias[outputDim];
	signal input realTargets[batchsize][outputDim];
	signal private input trainDataset[batchsize][inputDim];
	signal predictedTargets[outputDim];
	signal Error[outputDim];
	signal updatedWeights[inputDim][outputDim];
	signal updatedBias[outputDim];
	signal output finalCheck;
	var trainSample[inputDim];
	for (var batchIndex = 0; batchIndex < batchsize; batchIndex ++) {
		component forwardProcess = forward(inputDim, outputDim);
		for (var i = 0; i < outputDim; i++) {
			for (var j =0; j < inputDim; j++) {
				forwardProcess.weights[i][j] <== netweights[i][j];
			}
			forwardProcess.bias[i] <== bias[i];
		}
		for (var i = 0; i < inputDim; i ++) {
			forwardProcess.trainData[i] <== trainDataset[batchIndex][i];
		}
		for (var i = 0; i < outputDim; i++) {
			predictedTargets[i] <== forwardProcess.y[i];
		}
		component MSEprimeCalc = MSEPrime(outputDim);
		for (var i = 0; i < outputDim; i ++) {
			MSEprimeCalc.y_true[i] <== realTargets[batchIndex][i];
			MSEprimeCalc.y_predicted[i] <== predictedTargets[i];
		}
		for (var i = 0; i < outputDim; i++) {
			Error[i] <== MSEprimeCalc.error[i];
		}
		// backward function
		component backwardOperation = backward(inputDim, outputDim, precision, learningRate);
		for (var i = 0; i < inputDim; i ++){
			for (var j = 0; j < outputDim; j ++){
				backwardOperation.weights[i][j] <== netweights[j][i];
			}
		}
		for (var i = 0; i < outputDim; i ++){
			backwardOperation.bias[i] <== bias[i];
		}
		for (var i = 0; i < inputDim; i ++) {
			backwardOperation.sample[i] <== trainDataset[batchIndex][i];
		}
		for (var i = 0; i < outputDim; i ++){
			backwardOperation.error[i] <== Error[i];
		}
		for (var i = 0; i < inputDim; i ++){
			for (var j = 0; j < outputDim; j ++){
				updatedWeights[i][j] <== backwardOperation.updatedWeights[i][j];
			}
		}
		for (var i = 0; i < outputDim; i ++){
			updatedBias[i] <== backwardOperation.updatedBias[i];
		}
	}
	for (var i = 0; i < outputDim; i ++){
		for (var j = 0; j < inputDim; j ++) {
			if (newWeights[i][j] == updatedWeights[j][i]){
				count = count + 1;
			}
		}
	}

	for (var i = 0; i < outputDim; i ++){
		if (newBias[i] == updatedBias[i]){
			count = count + 1;
		}
	}

	if (count == outputDim * inputDim + outputDim){
		finalCheck <== 1;
	} else {
		finalCheck <== 0;
	}

}

component main = learningIteration();
