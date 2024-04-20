import numpy as np
import matplotlib.pyplot as plt

PSO_Avg_with_malicious = [64, 86, 76, 61, 73, 86, 76, 71, 86]
PSO_Avg_with_two_malicious = [53, 61, 79, 77, 80, 80, 79, 79, 79]
PSO_Avg_without_malicious = [51, 70, 75, 95, 92, 93, 84, 91, 92]
roundNum = [2, 3, 4, 5, 6, 7, 8, 9, 10]
plt.plot(roundNum, PSO_Avg_with_malicious, label="Average Accuracies: with one malicious node")
plt.plot(roundNum, PSO_Avg_with_two_malicious, label="Average Accuracies: with two malicious nodes")
plt.plot(roundNum, PSO_Avg_without_malicious, label="Average Accuracies: without malicious node")
plt.legend()
plt.xlabel("Rounds")
plt.ylabel("Average accuracies")
plt.grid()
plt.show()
#
# barWidth = 0.12
# br1 = np.arange(len(PSO_Avg_with_malicious))
# br2 = [x + barWidth for x in br1]
#
# plt.bar(br1, PSO_Avg_with_malicious, color='r', width=barWidth, edgecolor='grey', label='PSO')
# plt.bar(br2, PSO_Avg_without_malicious, color='g', width=barWidth, edgecolor='grey', label='KfedAvg')
# plt.xlabel("Rounds")
# plt.ylabel("Average accuracies (%)")
# plt.legend()
# plt.xticks([r + barWidth for r in range(len(PSO_Avg_without_malicious))], ['2', '3', '4', '5', '6', '7', '8', '9', '10'])
# plt.show()
