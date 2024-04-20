from sklearn.neural_network import MLPClassifier
import numpy as np

class Neuralnetwork_scikit():
    def __init__(self, hiddenLayerNeuron_1, hiddenLayerNeuron_2):
        layers = [hiddenLayerNeuron_1, hiddenLayerNeuron_2]
        self.model = MLPClassifier(solver='sgd', activation='relu', alpha=1e-5,
                        hidden_layer_sizes=layers,  random_state=1)
        trainData = np.random.randn(100, 5)
        traindataLabels = np.random.randint(0, 5, 100)

        self.model.fit(trainData, traindataLabels)

    # def model_initilization(self, hiddenLayerNeuron_1, hiddenLayerNeuron_2):
    #     layers = [hiddenLayerNeuron_1, hiddenLayerNeuron_2]
    #     model = MLPClassifier(solver='lbfgs', alpha=1e-5,
    #                     hidden_layer_sizes=layers,  random_state=1)
    #     return model

    def set_precision(self,precision):
        self.precision=precision

    def fit(self, x_train, y_train, epochs, learning_rate):
        #self.model.learning_rate = learning_rate
        self.model.max_iter = epochs # its better to be 200
        self.model.fit(x_train, y_train)
        print()

    def get_weights(self):
        weights1 = self.model.coefs_[0] * self.precision
        #weights1 = weights1.detach().numpy()
        #weights1 = weights1.astype(int)

        weights2 = self.model.coefs_[1] * self.precision
        #weights2 = weights2.detach().numpy()
        # weights2 = weights2.astype(int)

        weights3 = self.model.coefs_[2] * self.precision
        #weights3 = weights3.detach().numpy()
        # weights3 = weights3.astype(int)

        weights = {"weights1": weights1.T,
                   "weights2": weights2.T,
                   "weights3": weights3.T}
        return (weights)

    def get_bias(self):
        bias1 = self.model.intercepts_[0] * self.precision
        #bias1 = bias1.detach().numpy()
        # bias1 = bias1.astype(int)
        bias1 = bias1.reshape(-1,1)

        bias2 = self.model.intercepts_[1] * self.precision
        #bias2 = bias2.detach().numpy()
        # bias2 = bias2.astype(int)
        bias2 = bias2.reshape(-1, 1)

        bias3 = self.model.intercepts_[2] * self.precision
        #bias3 = bias3.detach().numpy()
        # bias3 = bias3.astype(int)
        bias3 = bias3.reshape(-1, 1)

        bias = {"bias1": bias1,
                "bias2": bias2,
                "bias3": bias3}

        return (bias)

    def predict(self, x_test):
        predictedLabels = self.model.predict(x_test)
        # acc = model.calculateAccuracy(predictedLabels, validationDataLabel)
        # count = 0
        # for i in range(len(predictedLabels)):
        #     if predictedLabels[i] == testDatalabels[i]:
        #         count = count + 1
        # acc = count / len(predictedLabels)
        #
        # print('accuracy on the test data: ', acc)
        return predictedLabels

    def accuracy(self, pred, y_test):
        count = 0
        for i in range(len(y_test)):
            if pred[i] == y_test[i]:
                count = count + 1
        acc = count/len(y_test)
        # just for snp case
        class_acc = []
        for i in range(5):
            count = 0
            true_class_indices = []
            for h in range(len(pred)):
                if pred[h] == i:
                    true_class_indices.append(h)
            if true_class_indices:
                for j in range(len(true_class_indices)):
                    if y_test[true_class_indices[j]] == i:
                        count = count + 1
                class_acc.append(count/len(true_class_indices))
            else:
                class_acc.append(0)
        # print("class accuracy: ", class_acc)
        return acc, class_acc

    def set_weights(self, global_weights):
        self.model.coefs_[0] = np.array(global_weights[0]).T / self.precision
        self.model.coefs_[1] = np.array(global_weights[1]).T / self.precision
        self.model.coefs_[2] = np.array(global_weights[2]).T / self.precision

    def set_bias(self, global_bias):
        self.model.intercepts_[0] = np.array(global_bias[0]) / self.precision
        self.model.intercepts_[1] = np.array(global_bias[1]) / self.precision
        self.model.intercepts_[2] = np.array(global_bias[2]) / self.precision