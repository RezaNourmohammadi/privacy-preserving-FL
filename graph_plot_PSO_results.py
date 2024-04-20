import numpy as np
import matplotlib.pyplot as plt
import matplotlib.gridspec as gridspec
import json

# ### experiment 1: PSO
#
# Device_1 = [41, 100, 100, 100, 100, 100, 100, 100, 100]
# Device_2 = [41, 58, 100, 100, 100, 100, 100, 100, 79]
# Device_3 =[37, 62, 62, 100, 100, 100, 100, 100, 100]
#
# ### experiment 1: Kfed
# Device_1_Kfed = [41, 41, 100, 100, 100, 100, 100, 100, 100]
# Device_2_kfed = [58, 95, 100, 100, 100, 100, 100, 100, 100]
# Device_3_kfed =[37, 37, 100, 95, 100, 100, 100, 100, 100]

### experiment 2: PSO

# Device_1 = [52, 100, 100, 100, 100, 100, 100, 100, 100]
# Device_2 = [41, 95, 100, 100, 100, 100, 100, 100, 100]
# Device_3 =[100, 100, 100, 95, 100, 100, 100, 100, 95]
# Device_4 =[79, 100, 100, 100, 100, 100, 91, 100, 100]
#
# ### experiment 2: Kfed
# Device_1_Kfed = [58, 58, 41, 95, 100, 100, 100, 100, 100]
# Device_2_kfed = [58, 58, 100, 83, 100, 100, 79, 100, 100]
# Device_3_kfed =[62, 100, 100, 100, 83, 100, 100, 100, 100]
# Device_4_kfed =[41, 58, 95, 95, 100, 100, 95, 100, 100]
#
# ## experiment 3: PSO
#
# Device_1 = [41, 16, 95, 95, 95, 91, 95, 95, 95]
# Device_2 = [79, 79, 20, 91, 79, 87, 87, 91, 91]
# Device_3 = [50, 91, 50, 95, 91, 95, 95, 95, 95]
# Device_4 = [29, 91, 87, 91, 91, 87, 29, 70, 75]
# Device_5 = [62, 100, 100, 100, 100, 100, 100, 100, 100]
# Device_6 = [45, 45, 100, 100, 100, 100, 100, 100, 100]
#
# ### experiment 3: Kfed
# Device_1_Kfed = [41, 95, 95, 95, 91, 95, 75, 95, 95]
# Device_2_kfed = [79, 100, 70, 91, 91, 87, 91, 91, 95]
# Device_3_kfed = [50, 50, 95, 95, 95, 83, 95, 95, 95]
# Device_4_kfed = [29, 95, 91, 87, 87, 83, 87, 91, 91]
# Device_5_kfed = [37, 62, 100, 100, 100, 100, 100, 100, 100]
# Device_6_kfed = [54, 95, 100, 100, 83, 100, 91, 100, 100]


## experiment 4: PSO

# Device_1 = [41, 95, 95, 95, 95, 95, 95, 95, 95]
# Device_2 = [75, 87, 87, 87, 87, 20, 95, 95, 95]
# Device_3 = [58, 95, 95, 95, 95, 95, 95, 95, 95]
# Device_4 = [87, 70, 95, 95, 95, 95, 95, 95, 91]
# Device_5 = [62, 100, 100, 100, 100, 100, 100, 100, 100]
# Device_6 = [45, 100, 100, 100, 100, 100, 100, 100, 100]
# Device_7 = [83, 100, 100, 100, 100, 100, 100, 100, 100]
# Device_8 = [70, 95, 100, 100, 100, 100, 100, 100, 100]
#
# ### experiment 3: Kfed
# Device_1_Kfed = [41, 91, 95, 95, 95, 95, 95, 100, 95]
# Device_2_kfed = [20, 20, 91, 83, 95, 95, 62, 91, 95]
# Device_3_kfed = [50, 50, 50, 91, 95, 95, 95, 95, 95]
# Device_4_kfed = [29, 91, 91, 95, 95, 95, 95, 95, 95]
# Device_5_kfed = [37, 37, 62, 100, 100, 100, 100, 79, 100]
# Device_6_kfed = [45, 100, 100, 87, 100, 100, 100, 100, 100]
# Device_7_kfed = [45, 45, 100, 79, 79, 100, 100, 100, 79]
# Device_8_kfed = [37, 95, 37, 100, 100, 100, 100, 100, 45]

# ### experiment 5 one malicious node
#
# Device_1 = [58, 95, 95, 95, 95, 95, 95, 95, 95]
# Device_2 = [95, 79, 83, 20, 87, 91, 79, 91, 91]
# Device_3 = [50 , 95, 100, 95, 95, 95, 50, 4, 95]
# Device_4 = [70, 91, 87, 12, 12, 91, 91, 91, 91]
# Device_5 = [54, 58, 58, 45, 54, 45, 45, 45, 45]
# Device_6 = [62, 100, 37, 100, 100, 100, 100, 100, 100]

### experiment 6 two malicious nodes

Device_1 = [58, 41, 95, 95, 95, 95, 95, 95, 95]
Device_2 = [20, 91, 91, 87, 87, 87, 79, 79, 79]
Device_3 = [50, 50, 95, 95, 95, 95, 95, 95, 95]
Device_4 = [70, 70, 87, 70, 87, 87, 87, 87, 87]
Device_5 = [58, 54, 45, 58, 58, 58, 58, 58, 58]
Device_6 = [62, 62, 62, 62, 62, 62, 62, 62, 62]


round = [2, 3, 4, 5, 6, 7, 8, 9, 10]

plt.plot(round, Device_1, label = "Client 1")
plt.plot(round, Device_2, label = "Client 2")
plt.plot(round, Device_3, label = "Client 3")
plt.plot(round, Device_4, label = "Client 4")
plt.plot(round, Device_5, label = "Client 5")
plt.plot(round, Device_6, label = "Client 6")
# plt.plot(round, Device_7, label = "Client 7")
# plt.plot(round, Device_8, label = "Client 8")
plt.grid()
plt.xlabel("Round")
plt.ylabel("Accuracy")
plt.legend()
plt.show()


roundNumber = 10
globalCost = []
averageCost = []
for i in range(8):
    jsonPath = f'/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/OUTputs/PSO/NumberOfParticipants_8/BatchSize_5/Device_{i+1}/Round_{roundNumber}_covengenceData.json'
    f = open(jsonPath)
    convergenceData = json.load(f)
    globalCost.append(convergenceData["globaCost_it"])
    averageCost.append(convergenceData["averageCost_it"])

MaxIt = 101
#
# gs = gridspec.GridSpec(4, 4)
#
# ax1 = plt.subplot(gs[:2, :2])
# ax1.plot(range(0, MaxIt), globalCost[0], label="Best cost")
# ax1.plot(range(0, MaxIt), averageCost[0], label="Average cost")
# ax1.grid()
# ax1.set_xlabel("Iteration", fontsize=10)
# ax1.set_ylabel("Cost", fontsize=10)
# #ax1.set(xlabel='Iteration', ylabel='Cost', fontsize=5)
# ax1.legend(fontsize=5)
#
# ax2 = plt.subplot(gs[:2, 2:])
# ax2.plot(range(0, MaxIt), globalCost[1], label="Best cost")
# ax2.plot(range(0, MaxIt), averageCost[1], label="Average cost")
# ax2.grid()
# ax2.set(xlabel='Iteration', ylabel='Cost')
# ax2.legend()
#
# ax3 = plt.subplot(gs[2:4, 1:3])
# ax3.plot(range(0, MaxIt), globalCost[2], label="Best cost")
# ax3.plot(range(0, MaxIt), averageCost[2], label="Average cost")
# ax3.grid()
# ax3.set(xlabel='Iteration', ylabel='Cost')
# ax3.legend()
#
# plt.show()
font_size = 6

fig, axs = plt.subplots(4,2)
#fig.suptitle('Convergernce graphs of PSO run by different clients in round 4', fontsize=font_size)
axs[0, 0].plot(range(0,MaxIt), globalCost[0], label="Best Cost")
axs[0, 0].plot(range(0,MaxIt), averageCost[0], label="Average cost")
axs[0, 0].legend(fontsize=font_size)
axs[0, 0].set_ylabel("Cost", fontsize=font_size)
axs[0, 0].set_title("Client 1", fontsize=font_size)
#axs[0].set_xlabel("Iteration", fontsize=font_size)


axs[0, 1].plot(range(0,MaxIt), globalCost[1], label="Best Cost")
axs[0, 1].plot(range(0,MaxIt), averageCost[1], label="Average cost")
axs[0, 1].legend(fontsize=font_size)
#axs[1].set_xlabel("Iteration", fontsize=font_size)
axs[0, 1].set_ylabel("Cost", fontsize=font_size)
axs[0, 1].set_title("Client 2", fontsize=font_size)

axs[1, 0].plot(range(0,MaxIt), globalCost[2], label="Best cost")
axs[1, 0].plot(range(0,MaxIt), averageCost[2], label="Average cost")
axs[1, 0].legend(fontsize=font_size)
axs[1, 0].set_ylabel("Cost", fontsize=font_size)
#axs[2].set_xlabel("Iteration", fontsize=font_size)
# axs[2].set_ylabel("Cost", fontsize=font_size)
axs[1, 0].set_title("Client 3", fontsize=font_size)
# axs[2].set_title("Client 3",fontsize=font_size)

axs[1, 1].plot(range(0,MaxIt), globalCost[3], label="Best cost")
axs[1, 1].plot(range(0,MaxIt), averageCost[3], label="Average cost")
axs[1, 1].legend(fontsize=font_size)
axs[1, 1].set_title("Client 4", fontsize=font_size)
# axs[3].set_xlabel("Iteration", fontsize=font_size)
# axs[3].set_ylabel("Cost", fontsize=font_size)
# axs[3].set_title("Client 4",fontsize=font_size)

axs[2, 0].plot(range(0,MaxIt), globalCost[4], label="Best cost")
axs[2, 0].plot(range(0,MaxIt), averageCost[4], label="Average cost")
axs[2, 0].legend(fontsize=font_size)
# axs[2, 0].set_xlabel("Iteration", fontsize=font_size)
axs[2, 0].set_ylabel("Cost", fontsize=font_size)
axs[2, 0].set_title("Client 5", fontsize=font_size)

axs[2, 1].plot(range(0,MaxIt), globalCost[5], label="Best cost")
axs[2, 1].plot(range(0,MaxIt), averageCost[5], label="Average cost")
axs[2, 1].legend(fontsize=font_size)
# axs[2, 1].set_xlabel("Iteration", fontsize=font_size)
axs[2, 1].set_title("Client 6", fontsize=font_size)

axs[3, 0].plot(range(0,MaxIt), globalCost[6], label="Best cost")
axs[3, 0].plot(range(0,MaxIt), averageCost[6], label="Average cost")
axs[3, 0].legend(fontsize=font_size)
axs[3, 0].set_xlabel("Iteration", fontsize=font_size)
axs[3, 0].set_ylabel("Cost", fontsize=font_size)
axs[3, 0].set_title("Client 7", fontsize=font_size)

axs[3, 1].plot(range(0,MaxIt), globalCost[7], label="Best cost")
axs[3, 1].plot(range(0,MaxIt), averageCost[7], label="Average cost")
axs[3, 1].legend(fontsize=font_size)
axs[3, 1].set_xlabel("Iteration", fontsize=font_size)
axs[3, 1].set_ylabel("Cost", fontsize=font_size)
axs[3, 1].set_title("Client 8", fontsize=font_size)

plt.subplots_adjust( hspace = 1.25, wspace = 0.5)
plt.show()

barWidth = 0.12
br1 = np.arange(len(Device_1))
br2 = [x + barWidth for x in br1]

font_size = 6

fig, axs = plt.subplots(8)
# fig.suptitle('Accuracy of clients in different rounds: PSO vs KfedfAvg', fontsize=font_size)
axs[0].bar(br1, Device_1, color='g', width=barWidth, edgecolor='grey', label='PSO')
axs[0].bar(br2, Device_1_Kfed, color='r', width=barWidth, edgecolor='grey', label='KfedAvg')
axs[0].legend(fontsize=font_size-2)
#axs[0].set_xlabel("Rounds", fontsize=font_size)
axs[0].set_ylabel("Accuracy", fontsize=font_size)
axs[0].set_title("Client 1", fontsize=font_size)
#axs[0].set_xticks([r + barWidth for r in range(len(Device_1))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])

axs[1].bar(br1, Device_2, color='g', width=barWidth, edgecolor='grey', label='PSO')
axs[1].bar(br2, Device_2_kfed, color='r', width=barWidth, edgecolor='grey', label='KfedAvg')
axs[1].legend(fontsize=font_size-2)
#axs[1].set_xlabel("Rounds", fontsize=font_size)
axs[1].set_ylabel("Accuracy", fontsize=font_size)
axs[1].set_title("Client 2", fontsize=font_size)
#axs[1].set_xticks([r + barWidth for r in range(len(Device_2))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])


axs[2].bar(br1, Device_3, color='g', width=barWidth, edgecolor='grey', label='PSO')
axs[2].bar(br2, Device_3_kfed, color='r', width=barWidth, edgecolor='grey', label='KfedAvg')
axs[2].legend(fontsize=font_size-2)
#axs[2].set_xlabel("Rounds", fontsize=font_size)
axs[2].set_ylabel("Accuracy", fontsize=font_size)
axs[2].set_title("Client 3", fontsize=font_size)
#axs[2].set_xticks([r + barWidth for r in range(len(Device_3))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])

#
axs[3].bar(br1, Device_4, color='g', width=barWidth, edgecolor='grey', label='PSO')
axs[3].bar(br2, Device_4_kfed, color='r', width=barWidth, edgecolor='grey', label='KfedAvg')
axs[3].legend(fontsize=font_size-3)
#axs[3].set_xlabel("Rounds", fontsize=font_size)
axs[3].set_ylabel("Accuracy", fontsize=font_size)
axs[3].set_title("Client 4", fontsize=font_size)
#axs[3].set_xticks([r + barWidth for r in range(len(Device_3))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])

axs[4].bar(br1, Device_5, color='g', width=barWidth, edgecolor='grey', label='PSO')
axs[4].bar(br2, Device_5_kfed, color='r', width=barWidth, edgecolor='grey', label='KfedAvg')
axs[4].legend(fontsize=font_size-3)
#axs[4].set_xlabel("Rounds", fontsize=font_size)
axs[4].set_ylabel("Accuracy", fontsize=font_size)
axs[4].set_title("Client 5", fontsize=font_size)
#axs[4].set_xticks([r + barWidth for r in range(len(Device_3))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])


axs[5].bar(br1, Device_6, color='g', width=barWidth, edgecolor='grey', label='PSO')
axs[5].bar(br2, Device_6_kfed, color='r', width=barWidth, edgecolor='grey', label='KfedAvg')
axs[5].legend(fontsize=font_size-3)
#axs[5].set_xlabel("Rounds", fontsize=font_size)
axs[5].set_ylabel("Accuracy", fontsize=font_size)
axs[5].set_title("Client 6", fontsize=font_size)
#axs[5].set_xticks([r + barWidth for r in range(len(Device_3))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])

axs[6].bar(br1, Device_7, color='g', width=barWidth, edgecolor='grey', label='PSO')
axs[6].bar(br2, Device_7_kfed, color='r', width=barWidth, edgecolor='grey', label='KfedAvg')
axs[6].legend(fontsize=font_size-3)
#axs[6].set_xlabel("Rounds", fontsize=font_size)
axs[6].set_ylabel("Accuracy", fontsize=font_size)
axs[6].set_title("Client 7", fontsize=font_size)
#axs[6].set_xticks([r + barWidth for r in range(len(Device_3))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])

axs[7].bar(br1, Device_7, color='g', width=barWidth, edgecolor='grey', label='PSO')
axs[7].bar(br2, Device_7_kfed, color='r', width=barWidth, edgecolor='grey', label='KfedAvg')
axs[7].legend(fontsize=font_size-3)
axs[7].set_xlabel("Rounds", fontsize=font_size)
axs[7].set_ylabel("Accuracy", fontsize=font_size)
axs[7].set_title("Client 8", fontsize=font_size)
axs[7].set_xticks([r + barWidth for r in range(len(Device_3))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])

plt.subplots_adjust( hspace = 1.5, wspace = 0.75)
plt.show()

PSO_Avg = [65, 92, 96, 96, 96, 88, 97, 97, 97]
Kfed_Avg = [38, 66, 78, 91, 94, 97, 93, 95, 88]
plt.plot(round, PSO_Avg, label="Average Accuracies: PSO")
plt.plot(round, Kfed_Avg, label="Average Accuracies: KfedAvg")
plt.legend()
plt.xlabel("Rounds")
plt.ylabel("Average accuracies")
plt.grid()
plt.show()

barWidth = 0.12
br1 = np.arange(len(PSO_Avg))
br2 = [x + barWidth for x in br1]

plt.bar(br1, PSO_Avg, color='r', width=barWidth, edgecolor='grey', label='PSO')
plt.bar(br2, Kfed_Avg, color='g', width=barWidth, edgecolor='grey', label='KfedAvg')
plt.xlabel("Rounds")
plt.ylabel("Average accuracies (%)")
plt.legend()
plt.xticks([r + barWidth for r in range(len(Device_3))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])
plt.show()
