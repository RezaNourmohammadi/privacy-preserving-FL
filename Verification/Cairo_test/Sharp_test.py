import subprocess
import time

### setting up environment
cmd_1 = "python3 -m venv ~/cairo_venv"
print(subprocess.call(cmd_1, shell=True))
cmd_2 = ['source ~/cairo_venv/bin/activate']
g= subprocess.run(cmd_2, shell=True)


cairo_file = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo_test/MKT_test_6.cairo"
cairo_input = "/home/iman/projects/kara/blockchain_based_Federated_learning/federatedlearning/codes/Devices/Verification/Cairo_test/cairoInput.json"
sharp = "cairo-sharp"

sharp_submit = [sharp, "submit --source", cairo_file, " --program_input ", cairo_input]

print(sharp_submit)

g= subprocess.run(sharp_submit, capture_output=True)

print()