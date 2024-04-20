import torch
from torch.utils.data import Dataset, DataLoader
import numpy as np


class NeuralNetwork(torch.nn.Module):
    def __init__(self, input_dim, output_dim, hiddenLayerNeuron_1, hiddenLayerNeuron_2, batchsize):
        super(NeuralNetwork, self).__init__()
        #self.linear1 = torch.nn.Linear(input_dim, output_dim)
        self.linear1 = torch.nn.Linear(input_dim, hiddenLayerNeuron_1)
        self.linear2 = torch.nn.Linear(hiddenLayerNeuron_1, output_dim)
        # self.linear2 = torch.nn.Linear(hiddenLayerNeuron_1, hiddenLayerNeuron_2)
        # self.linear3 = torch.nn.Linear(hiddenLayerNeuron_2, output_dim)
        self.batchsize = batchsize

    def forward(self, x):
        x_1 = torch.sigmoid(self.linear1(x))
        x_2 = torch.sigmoid(self.linear2(x_1))
        out = x_2
        #out = torch.sigmoid(self.linear3(x_2))
        # x = self.linear2(x)
        return out


    def set_precision(self,precision):
        self.precision=precision

    def set_weights(self, global_weights):
        tensored_weights1 = torch.Tensor(global_weights[0])
        tensored_weights2 = torch.Tensor(global_weights[1])
        #tensored_weights3 = torch.Tensor(global_weights[2])
        self.linear1.weight = torch.nn.Parameter(tensored_weights1/self.precision)
        self.linear2.weight = torch.nn.Parameter(tensored_weights2/self.precision)
        #self.linear3.weight = torch.nn.Parameter(tensored_weights3/self.precision)
        iman_break_point = 4

    def set_bias(self, global_bias):
        tensored_bias1 = torch.Tensor(global_bias[0])
        tensored_bias2 = torch.Tensor(global_bias[1])
        #tensored_bias3 = torch.Tensor(global_bias[2])
        self.linear1.bias = torch.nn.Parameter(tensored_bias1/self.precision)
        self.linear2.bias = torch.nn.Parameter(tensored_bias2/self.precision)
        #self.linear3.bias = torch.nn.Parameter(tensored_bias3/self.precision)
        iman_break_point = 5

    def get_weights(self):
        weights1 = self.linear1.weight * self.precision
        weights1 = weights1.detach().numpy()
        #weights1 = weights1.astype(int)


        weights2 = self.linear2.weight * self.precision
        weights2 = weights2.detach().numpy()
        #weights2 = weights2.astype(int)

        # weights3 = self.linear3.weight * self.precision
        # weights3 = weights3.detach().numpy()
        #weights3 = weights3.astype(int)

        # weights = {"weights1": weights1,
        #            "weights2": weights2,
        #            "weights3": weights3}
        weights = {"weights1": weights1,
                   "weights2": weights2
                   }
        return (weights)

    def get_bias(self):
        bias1 = self.linear1.bias * self.precision
        bias1 = bias1.detach().numpy()
        #bias1 = bias1.astype(int)
        bias1 = bias1.reshape(-1,1)

        bias2 = self.linear2.bias * self.precision
        bias2 = bias2.detach().numpy()
        #bias2 = bias2.astype(int)
        bias2 = bias2.reshape(-1, 1)

        #bias3 = self.linear3.bias * self.precision
        #bias3 = bias3.detach().numpy()
        #bias3 = bias3.astype(int)
        #bias3 = bias3.reshape(-1, 1)

        # bias = {"bias1": bias1,
        #         "bias2": bias2,
        #         "bias3": bias3}

        bias = {"bias1": bias1,
                "bias2": bias2
                }

        return (bias)

    def predict(self, x_test):
        x_test = torch.Tensor(x_test)
        outputs = self(x_test)
        __, predicted = torch.max(outputs, 1)
        predicted = predicted.tolist()
        return predicted

    def accuracy(self, pred, y_test):
        count = 0
        for i in range(len(y_test)):
            if pred[i] == y_test[i]:
                count = count + 1
        acc = count/len(y_test)
        return acc

    def fit(self,  x_train, y_train, epochs, learning_rate):
        #y_train = y_train.astype(int)
        train_data = Data(x_train, y_train)
        train_dataloader = DataLoader(dataset=train_data, batch_size=self.batchsize, shuffle=True)
        criterion = torch.nn.CrossEntropyLoss()
        # criterion = torch.nn.MSELoss()
        optimizer = torch.optim.SGD(self.parameters(), lr=learning_rate)
        # optimizer = torch.optim.LBFGS(self.parameters(), lr=learning_rate)
        #optimizer = torch.optim.Adam(self.parameters(), lr=learning_rate)
        for epoch in range(epochs):
            running_loss = 0.0
            for i, data in enumerate(train_dataloader, 0):
                inputs, labels = data
                # set optimizer to zero grad to remove previous epoch gradients
                optimizer.zero_grad()
                # forward propagation
                outputs = self(inputs)
                loss = criterion(outputs, labels)
                # backward propagation
                loss.backward()
                # optimize
                optimizer.step()
                running_loss += loss.item()
            # display statistics
            print(f'[{epoch + 1}, {i + 1:5d}] loss: {running_loss / 2000:.5f}')

    # def fit(self, x_train, y_train, epochs, learning_rate):
    #     train_data = Data(x_train, y_train)
    #     train_dataloader = DataLoader(dataset=train_data, batch_size=self.batchsize, shuffle=True)
    #
    #     criterion = torch.nn.CrossEntropyLoss()
    #     optimizer = torch.optim.LBFGS(self.parameters(), lr=learning_rate)  # or use SGD if preferred
    #
    #     def closure():
    #         optimizer.zero_grad()
    #         outputs = self(x_train_tensor)
    #         loss = criterion(outputs, y_train_tensor)
    #         loss.backward()
    #         return loss
    #
    #     for epoch in range(epochs):
    #         running_loss = 0.0
    #         for i, data in enumerate(train_dataloader, 0):
    #             inputs, labels = data
    #             # Convert NumPy arrays to PyTorch tensors
    #             x_train_tensor = torch.Tensor(inputs)
    #             y_train_tensor = torch.Tensor(labels).long()
    #
    #             # set optimizer to zero grad to remove previous epoch gradients
    #             optimizer.zero_grad()
    #             # forward propagation
    #             loss = optimizer.step(closure)
    #             running_loss += loss.item()
    #
    #         # display statistics
    #         print(f'[{epoch + 1}, {i + 1:5d}] loss: {running_loss / len(train_dataloader):.5f}')
    #
    #     return self

    # def fit(self, x_train, y_train, epochs, learning_rate):
    #     train_data = Data(x_train, y_train)
    #     train_dataloader = DataLoader(dataset=train_data, batch_size=self.batchsize, shuffle=True)
    #
    #     def closure():
    #         optimizer.zero_grad()
    #
    #         # Convert NumPy arrays to PyTorch tensors
    #         x_train_tensor = torch.Tensor(x_train)
    #         y_train_tensor = torch.Tensor(y_train).long()
    #
    #         outputs = self(x_train_tensor)
    #         loss = criterion(outputs, y_train_tensor)
    #         loss.backward()
    #         return loss
    #
    #     criterion = torch.nn.CrossEntropyLoss()
    #     optimizer = torch.optim.LBFGS(self.parameters(), lr=learning_rate, max_iter=epochs)
    #
    #     for _ in range(epochs):
    #         for _, data in enumerate(train_dataloader, 0):
    #             inputs, labels = data
    #             optimizer.step(closure)
    #
    #     return self





class Data(Dataset):
    def __init__(self, X_train, y_train):
        # need to convert float64 to float32 else
        # will get the following error
        # RuntimeError: expected scalar type Double but found Float
        #X_train = X_train.to_numpy()
        #y_train = y_train.to_numpy()
        y_train = np.array(y_train)
        self.X = torch.from_numpy(X_train.astype(np.float32))
        # need to convert float64 to Long else
        # will get the following error
        # RuntimeError: expected scalar type Long but found Float
        self.y = torch.from_numpy(y_train).type(torch.LongTensor)
        self.len = self.X.shape[0]

    def __getitem__(self, index):
        return self.X[index], self.y[index]

    def __len__(self):
        return self.len