import sys
import subprocess
import time
from subprocess import Popen, PIPE
import shlex
import os


cmds = ['python3 -m venv ~/cairo_venv \n source ~/cairo_venv/bin/activate \n cairo-sharp submit --source /home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo_test/MKT_test_6.cairo \
--program_input /home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo_test/cairoInput.json']

commands = '''
python3 -m venv ~/cairo_venv
source ~/cairo_venv/bin/activate
cairo-sharp submit --source /home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo_test/MKT_test_6.cairo \
--program_input /home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo_test/cairoInput.json
'''
process = subprocess.Popen('/bin/bash', stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding="utf-8")
out, err = process.communicate(commands)
fact = out[out.find("Fact")+5:-1]
print("fact: ", fact)
process.stdin.close()
process.stdout.close()
process.wait()

commands_2 = f'''
python3 -m venv ~/cairo_venv
source ~/cairo_venv/bin/activate
cairo-sharp is_verified {fact}  --node_url=https://ethereum-goerli.publicnode.com
'''

print(commands_2)
check = False
t1 = time.time()
while check == False:
    #command = 'cairo-sharp is_verified' +  fact + ' --node_url=https://ethereum-goerli.publicnode.com'
    process_2 = subprocess.Popen('/bin/bash', stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding="utf-8")
    out, err = process_2.communicate(commands_2)
    print(out)
    if str(out[:-1]) == 'True':
        check = True

t2 = time.time()
runTime = t2 - t1
print("run time: ", runTime)



