import struct

number = 1

for i in range(15):
    filePath = f'/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Proof_Size_Check/proof_samples/proof_{i+1}.txt'
    binaryFile = f'/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Proof_Size_Check/proof_samples/proof_{i+1}.bin'
    g = open(binaryFile, "wb")
    f = open(filePath)
    for line in f:
        print(float(line))
        # arr = bytes(float(line))
        arr = bytearray(struct.pack("f", float(line)))
        g.write(arr)
    f.close()
    g.close()

