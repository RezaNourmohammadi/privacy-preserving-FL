import pandas as pd
from Gene_test_nn.neuralnetwork import NeuralNetwork
from sklearn.model_selection import train_test_split
import numpy as np
import json


path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Gene_expression_data.txt"
columnNames = []
for i in range(60660):
    text = f'gene_ID_{i}'
    columnNames.append(text)

targets = []

for i in range(200):
    if i <= 99:
        targets.append(0)
    if i > 99:
        targets.append(1)

gene_ExpressionData = pd.read_csv(
            path, sep=',', names= columnNames)

#gene_ExpressionData["activity"] = targets

print(gene_ExpressionData.head())

gene_ExpressionData=(gene_ExpressionData-gene_ExpressionData.min())/(gene_ExpressionData.max()-gene_ExpressionData.min())

var_val = gene_ExpressionData.var()
#num_dim = 467

num_dim = 3743
sorted_features = var_val.sort_values(ascending = False, axis = 'index')[0:num_dim].index

#normalized_data=(gene_ExpressionData-gene_ExpressionData.min())/(gene_ExpressionData.max()-gene_ExpressionData.min())

gene_ExpressionRedeucedData = gene_ExpressionData[sorted_features]
gene_ExpressionRedeucedData["target"] = targets

Device_1_Data = gene_ExpressionRedeucedData.sample(frac=0.4)
Device_1_Data = Device_1_Data.reset_index()
Device_1_Data = Device_1_Data.drop(columns="index")
Device_1_y_train = Device_1_Data["target"].tolist()
Device_1_Data = Device_1_Data.drop(columns="target")

Device_2_Data = gene_ExpressionRedeucedData.sample(frac=0.4)
Device_2_Data = Device_2_Data.reset_index()
Device_2_Data = Device_2_Data.drop(columns="index")
Device_2_y_train = Device_2_Data["target"].tolist()
Device_2_Data = Device_2_Data.drop(columns="target")
#
Device_3_Data = gene_ExpressionRedeucedData.sample(frac=0.4)
Device_3_Data = Device_3_Data.reset_index()
Device_3_Data = Device_3_Data.drop(columns="index")
Device_3_y_train = Device_3_Data["target"].tolist()
Device_3_Data = Device_3_Data.drop(columns="target")

Device_4_Data = gene_ExpressionRedeucedData.sample(frac=0.4)
Device_4_Data = Device_4_Data.reset_index()
Device_4_Data = Device_4_Data.drop(columns="index")
Device_4_y_train = Device_4_Data["target"].tolist()
Device_4_Data = Device_4_Data.drop(columns="target")

Device_5_Data = gene_ExpressionRedeucedData.sample(frac=0.4)
Device_5_Data = Device_5_Data.reset_index()
Device_5_Data = Device_5_Data.drop(columns="index")
Device_5_y_train = Device_5_Data["target"].tolist()
Device_5_Data = Device_5_Data.drop(columns="target")

Device_6_Data = gene_ExpressionRedeucedData.sample(frac=0.4)
Device_6_Data = Device_6_Data.reset_index()
Device_6_Data = Device_6_Data.drop(columns="index")
Device_6_y_train = Device_6_Data["target"].tolist()
Device_6_Data = Device_6_Data.drop(columns="target")

Device_7_Data = gene_ExpressionRedeucedData.sample(frac=0.4)
Device_7_Data = Device_7_Data.reset_index()
Device_7_Data = Device_7_Data.drop(columns="index")
Device_7_y_train = Device_7_Data["target"].tolist()
Device_7_Data = Device_7_Data.drop(columns="target")

Device_8_Data = gene_ExpressionRedeucedData.sample(frac=0.4)
Device_8_Data = Device_8_Data.reset_index()
Device_8_Data = Device_8_Data.drop(columns="index")
Device_8_y_train = Device_8_Data["target"].tolist()
Device_8_Data = Device_8_Data.drop(columns="target")

##### Device 9 just for proof sixr check

Device_9_Data = gene_ExpressionRedeucedData.sample(frac=1)
Device_9_Data = Device_9_Data.reset_index()
Device_9_Data = Device_9_Data.drop(columns="index")
Device_9_y_train = Device_9_Data["target"].tolist()
Device_9_Data = Device_9_Data.drop(columns="target")



#intData = gene_ExpressionRedeucedData.astype(int)
#normalized_data=(gene_ExpressionRedeucedData-gene_ExpressionRedeucedData.min())/(gene_ExpressionRedeucedData.max()-gene_ExpressionRedeucedData.min())
#Device_1_Data, Device_2_Data, Device_1_y_train, Device_2_y_train = train_test_split(gene_ExpressionRedeucedData, targets, test_size=0.5, shuffle=True, random_state=1)

########################## train/test split for device 1
#
# Device_1_X_train, Device_1_X_test, Device_1_y_train, Device_1_y_test = train_test_split(Device_1_Data, Device_1_y_train, test_size=0.3, shuffle=True, random_state=1)
# print()
#
# Device_1_X_train = Device_1_X_train.reset_index()
# Device_1_X_train = Device_1_X_train.drop(columns="index")
#
#
# # preparing json file of inputs for cairo
# Device_1_X_train_Cairo = Device_1_X_train.astype(int)
# Device_1_y_train_cairo = Device_1_y_train
# _index = int(len(Device_1_X_train_Cairo))/2-1
# firstPartData = Device_1_X_train_Cairo.loc[0:_index, :]
# firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
# secondPartData = Device_1_X_train_Cairo.loc[_index+1:len(Device_1_X_train_Cairo) - 1, :]
# secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
# cairoInputDict= {
#     "X_without_precision": [],
#     "Y_without_precision": []
# }
# #
# cairoInputDict["X_without_precision"].append(firstPartData)
# cairoInputDict["X_without_precision"].append(secondPartData)
# cairoInputDict["Y_without_precision"].append(Device_1_y_train)
# #
# cairoInputPath_Device_1 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_1/cairoInputTrainData.json"
# json_object = json.dumps(cairoInputDict, indent=3)
# with open(cairoInputPath_Device_1, "w") as outfile:
#     outfile.write(json_object)
#
# # preparing train and test data for nn
# Device_1_X_train["Activity"] = Device_1_y_train
# Device_1_X_test = Device_1_X_test.reset_index()
# Device_1_X_test = Device_1_X_test.drop(columns="index")
# Device_1_X_test["Activity"] = Device_1_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_1/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_1/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_1_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_1_X_test.values, fmt='%f', delimiter=',')
#
#
#
# ########################## train/test split for device 2
#
# Device_2_X_train, Device_2_X_test, Device_2_y_train, Device_2_y_test = train_test_split(Device_2_Data, Device_2_y_train, test_size=0.3, shuffle=True, random_state=1)
# print()
#
# Device_2_X_train = Device_2_X_train.reset_index()
# Device_2_X_train = Device_2_X_train.drop(columns="index")
#
# # preparing json file of inputs for cairo
# Device_2_X_train_Cairo = Device_2_X_train.astype(int)
# Device_2_y_train_cairo = Device_2_y_train
# _index = int(len(Device_2_X_train_Cairo))/2-1
# firstPartData = Device_2_X_train_Cairo.loc[0:_index, :]
# firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
# secondPartData = Device_2_X_train_Cairo.loc[_index+1:len(Device_2_X_train_Cairo) - 1, :]
# secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
# cairoInputDict= {
#     "X_without_precision": [],
#     "Y_without_precision": []
# }
# #
# cairoInputDict["X_without_precision"].append(firstPartData)
# cairoInputDict["X_without_precision"].append(secondPartData)
# cairoInputDict["Y_without_precision"].append(Device_2_y_train)
# #
# cairoInputPath_Device_2 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_2/cairoInputTrainData.json"
# json_object = json.dumps(cairoInputDict, indent=3)
# with open(cairoInputPath_Device_2, "w") as outfile:
#     outfile.write(json_object)
#
# # preparing train and test data for nn
# Device_2_X_train["Activity"] = Device_2_y_train
# Device_2_X_test = Device_2_X_test.reset_index()
# Device_2_X_test = Device_2_X_test.drop(columns="index")
# Device_2_X_test["Activity"] = Device_2_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_2/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_2/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_2_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_2_X_test.values, fmt='%f', delimiter=',')
# print()
#
# ######################### train/test split for device 3
#
# Device_3_X_train, Device_3_X_test, Device_3_y_train, Device_3_y_test = train_test_split(Device_3_Data, Device_3_y_train, test_size=0.3, shuffle=True, random_state=1)
# print()
#
# Device_3_X_train = Device_3_X_train.reset_index()
# Device_3_X_train = Device_3_X_train.drop(columns="index")
#
# # preparing json file of inputs for cairo
# Device_3_X_train_Cairo = Device_3_X_train.astype(int)
# Device_3_y_train_cairo = Device_3_y_train
# _index = int(len(Device_3_X_train_Cairo))/2-1
# firstPartData = Device_3_X_train_Cairo.loc[0:_index, :]
# firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
# secondPartData = Device_3_X_train_Cairo.loc[_index+1:len(Device_3_X_train_Cairo) - 1, :]
# secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
# cairoInputDict= {
#     "X_without_precision": [],
#     "Y_without_precision": []
# }
# #
# cairoInputDict["X_without_precision"].append(firstPartData)
# cairoInputDict["X_without_precision"].append(secondPartData)
# cairoInputDict["Y_without_precision"].append(Device_3_y_train)
# #
# cairoInputPath_Device_3 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_3/cairoInputTrainData.json"
# json_object = json.dumps(cairoInputDict, indent=3)
# with open(cairoInputPath_Device_3, "w") as outfile:
#     outfile.write(json_object)
#
# # preparing train and test data for nn
# Device_3_X_train["Activity"] = Device_3_y_train
# Device_3_X_test = Device_3_X_test.reset_index()
# Device_3_X_test = Device_3_X_test.drop(columns="index")
# Device_3_X_test["Activity"] = Device_3_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_3/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_3/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_3_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_3_X_test.values, fmt='%f', delimiter=',')
#
#
# ######################### train/test split for device 4
#
# Device_4_X_train, Device_4_X_test, Device_4_y_train, Device_4_y_test = train_test_split(Device_4_Data, Device_4_y_train, test_size=0.3, shuffle=True, random_state=1)
#
# Device_4_X_train = Device_4_X_train.reset_index()
# Device_4_X_train = Device_4_X_train.drop(columns="index")
#
# # preparing json file of inputs for cairo
# Device_4_X_train_Cairo = Device_4_X_train.astype(int)
# Device_4_y_train_cairo = Device_4_y_train
# _index = int(len(Device_4_X_train_Cairo))/2-1
# firstPartData = Device_4_X_train_Cairo.loc[0:_index, :]
# firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
# secondPartData = Device_4_X_train_Cairo.loc[_index+1:len(Device_4_X_train_Cairo) - 1, :]
# secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
# cairoInputDict= {
#     "X_without_precision": [],
#     "Y_without_precision": []
# }
# #
# cairoInputDict["X_without_precision"].append(firstPartData)
# cairoInputDict["X_without_precision"].append(secondPartData)
# cairoInputDict["Y_without_precision"].append(Device_4_y_train)
# #
# cairoInputPath_Device_4 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_4/cairoInputTrainData.json"
# json_object = json.dumps(cairoInputDict, indent=3)
# with open(cairoInputPath_Device_4, "w") as outfile:
#     outfile.write(json_object)
#
# # preparing train and test data for nn
# Device_4_X_train["Activity"] = Device_4_y_train
# Device_4_X_test = Device_4_X_test.reset_index()
# Device_4_X_test = Device_4_X_test.drop(columns="index")
# Device_4_X_test["Activity"] = Device_4_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_4/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_4/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_4_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_4_X_test.values, fmt='%f', delimiter=',')
#
# ######################### train/test split for device 5
#
# Device_5_X_train, Device_5_X_test, Device_5_y_train, Device_5_y_test = train_test_split(Device_5_Data, Device_5_y_train, test_size=0.3, shuffle=True, random_state=1)
#
# Device_5_X_train = Device_5_X_train.reset_index()
# Device_5_X_train = Device_5_X_train.drop(columns="index")
#
# # preparing json file of inputs for cairo
# Device_5_X_train_Cairo = Device_5_X_train.astype(int)
# Device_5_y_train_cairo = Device_5_y_train
# _index = int(len(Device_5_X_train_Cairo))/2-1
# firstPartData = Device_5_X_train_Cairo.loc[0:_index, :]
# firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
# secondPartData = Device_5_X_train_Cairo.loc[_index+1:len(Device_5_X_train_Cairo) - 1, :]
# secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
# cairoInputDict= {
#     "X_without_precision": [],
#     "Y_without_precision": []
# }
# #
# cairoInputDict["X_without_precision"].append(firstPartData)
# cairoInputDict["X_without_precision"].append(secondPartData)
# cairoInputDict["Y_without_precision"].append(Device_5_y_train)
# #
# cairoInputPath_Device_5 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_5/cairoInputTrainData.json"
# json_object = json.dumps(cairoInputDict, indent=3)
# with open(cairoInputPath_Device_5, "w") as outfile:
#     outfile.write(json_object)
#
# # preparing train and test data for nn
# Device_5_X_train["Activity"] = Device_5_y_train
# Device_5_X_test = Device_5_X_test.reset_index()
# Device_5_X_test = Device_5_X_test.drop(columns="index")
# Device_5_X_test["Activity"] = Device_5_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_5/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_5/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_5_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_5_X_test.values, fmt='%f', delimiter=',')
#
#
#
# ######################### train/test split for device 6
#
# Device_6_X_train, Device_6_X_test, Device_6_y_train, Device_6_y_test = train_test_split(Device_6_Data, Device_6_y_train, test_size=0.3, shuffle=True, random_state=1)
#
# Device_6_X_train = Device_6_X_train.reset_index()
# Device_6_X_train = Device_6_X_train.drop(columns="index")
#
# # preparing json file of inputs for cairo
# Device_6_X_train_Cairo = Device_6_X_train.astype(int)
# Device_6_y_train_cairo = Device_6_y_train
# _index = int(len(Device_6_X_train_Cairo))/2-1
# firstPartData = Device_6_X_train_Cairo.loc[0:_index, :]
# firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
# secondPartData = Device_6_X_train_Cairo.loc[_index+1:len(Device_6_X_train_Cairo) - 1, :]
# secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
# cairoInputDict= {
#     "X_without_precision": [],
#     "Y_without_precision": []
# }
# #
# cairoInputDict["X_without_precision"].append(firstPartData)
# cairoInputDict["X_without_precision"].append(secondPartData)
# cairoInputDict["Y_without_precision"].append(Device_6_y_train)
# #
# cairoInputPath_Device_6 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_6/cairoInputTrainData.json"
# json_object = json.dumps(cairoInputDict, indent=3)
# with open(cairoInputPath_Device_6, "w") as outfile:
#     outfile.write(json_object)
#
# # preparing train and test data for nn
# Device_6_X_train["Activity"] = Device_6_y_train
# Device_6_X_test = Device_6_X_test.reset_index()
# Device_6_X_test = Device_6_X_test.drop(columns="index")
# Device_6_X_test["Activity"] = Device_6_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_6/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_6/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_6_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_6_X_test.values, fmt='%f', delimiter=',')

######################### train/test split for device 7
#
# Device_7_X_train, Device_7_X_test, Device_7_y_train, Device_7_y_test = train_test_split(Device_7_Data, Device_7_y_train, test_size=0.3, shuffle=True, random_state=1)
#
# Device_7_X_train = Device_7_X_train.reset_index()
# Device_7_X_train = Device_7_X_train.drop(columns="index")
# Device_7_X_train = 1000 * np.random.rand() * Device_7_X_train + np.random.rand()
#
# # preparing json file of inputs for cairo
# Device_7_X_train_Cairo = Device_7_X_train.astype(int)
# Device_7_y_train_cairo = Device_7_y_train
# _index = int(len(Device_7_X_train_Cairo))/2-1
# firstPartData = Device_7_X_train_Cairo.loc[0:_index, :]
# firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
# secondPartData = Device_7_X_train_Cairo.loc[_index+1:len(Device_7_X_train_Cairo) - 1, :]
# secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
# cairoInputDict= {
#     "X_without_precision": [],
#     "Y_without_precision": []
# }
# #
# cairoInputDict["X_without_precision"].append(firstPartData)
# cairoInputDict["X_without_precision"].append(secondPartData)
# cairoInputDict["Y_without_precision"].append(Device_7_y_train)
# #
# cairoInputPath_Device_7 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_7/cairoInputTrainData.json"
# json_object = json.dumps(cairoInputDict, indent=3)
# with open(cairoInputPath_Device_7, "w") as outfile:
#     outfile.write(json_object)
#
# # preparing train and test data for nn
# Device_7_X_train["Activity"] = Device_7_y_train
# Device_7_X_test = Device_7_X_test.reset_index()
# Device_7_X_test = Device_7_X_test.drop(columns="index")
# Device_7_X_test = 1000 * np.random.rand() * Device_7_X_test + np.random.rand()
# Device_7_X_test["Activity"] = Device_7_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_7/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_7/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_7_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_7_X_test.values, fmt='%f', delimiter=',')
#
# ######################### train/test split for device 8
#
# Device_8_X_train, Device_8_X_test, Device_8_y_train, Device_8_y_test = train_test_split(Device_8_Data, Device_8_y_train, test_size=0.3, shuffle=True, random_state=1)
#
# Device_8_X_train = Device_8_X_train.reset_index()
# Device_8_X_train = Device_8_X_train.drop(columns="index")
#
# # preparing json file of inputs for cairo
# Device_8_X_train_Cairo = Device_8_X_train.astype(int)
# Device_8_y_train_cairo = Device_8_y_train
# _index = int(len(Device_8_X_train_Cairo))/2-1
# firstPartData = Device_8_X_train_Cairo.loc[0:_index, :]
# firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
# secondPartData = Device_8_X_train_Cairo.loc[_index+1:len(Device_8_X_train_Cairo) - 1, :]
# secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
# cairoInputDict= {
#     "X_without_precision": [],
#     "Y_without_precision": []
# }
# #
# cairoInputDict["X_without_precision"].append(firstPartData)
# cairoInputDict["X_without_precision"].append(secondPartData)
# cairoInputDict["Y_without_precision"].append(Device_8_y_train)
# #
# cairoInputPath_Device_8 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_8/cairoInputTrainData.json"
# json_object = json.dumps(cairoInputDict, indent=3)
# with open(cairoInputPath_Device_8, "w") as outfile:
#     outfile.write(json_object)
#
# # preparing train and test data for nn
# Device_8_X_train["Activity"] = Device_8_y_train
# Device_8_X_test = Device_8_X_test.reset_index()
# Device_8_X_test = Device_8_X_test.drop(columns="index")
# Device_8_X_test["Activity"] = Device_8_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_8/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_8/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_8_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_8_X_test.values, fmt='%f', delimiter=',')


######################### train/test split for device 9 for proof size check

Device_9_X_train, Device_9_X_test, Device_9_y_train, Device_9_y_test = train_test_split(Device_9_Data, Device_9_y_train, test_size=0.3, shuffle=True, random_state=1)
#Device_9_Data_X_train = Device_9_Data
#Device_9_Data_X_train = Device_9_Data_X_train.

Device_9_X_train = Device_9_X_train.reset_index()
Device_9_X_train = Device_9_X_train.drop(columns="index")

# preparing json file of inputs for cairo
Device_9_X_train_Cairo = Device_9_X_train.astype(int)
Device_9_y_train_cairo = Device_9_y_train
_index = int(len(Device_9_X_train_Cairo))/2-1
firstPartData = Device_9_X_train_Cairo.loc[0:_index, :]
firstPartData = firstPartData.values.reshape(1,num_dim * len(firstPartData)).tolist()[0]
secondPartData = Device_9_X_train_Cairo.loc[_index+1:len(Device_9_X_train_Cairo) - 1, :]
secondPartData = secondPartData.values.reshape(1,num_dim * len(secondPartData)).tolist()[0]
cairoInputDict= {
    "X_without_precision": [],
    "Y_without_precision": []
}
#
cairoInputDict["X_without_precision"].append(firstPartData)
cairoInputDict["X_without_precision"].append(secondPartData)
cairoInputDict["Y_without_precision"].append(Device_9_y_train)
#
cairoInputPath_Device_9 = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo/Device_9/cairoInputTrainData.json"
json_object = json.dumps(cairoInputDict, indent=3)
with open(cairoInputPath_Device_9, "w") as outfile:
    outfile.write(json_object)

# # preparing train and test data for nn
# Device_8_X_train["Activity"] = Device_8_y_train
# Device_8_X_test = Device_8_X_test.reset_index()
# Device_8_X_test = Device_8_X_test.drop(columns="index")
# Device_8_X_test["Activity"] = Device_8_y_test
#
# Train_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_8/device_geneExpression_trainData.txt"
# Test_destination_path = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Device_Data/Device_8/device_geneExpression_testData.txt"
#
# np.savetxt(Train_destination_path, Device_8_X_train.values, fmt='%f', delimiter=',')
# np.savetxt(Test_destination_path, Device_8_X_test.values, fmt='%f', delimiter=',')
#
print()