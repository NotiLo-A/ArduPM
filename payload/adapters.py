import subprocess
import time

adapters = subprocess.run(["powershell", "-Command", "Get-NetAdapter -Physical"], capture_output=True, text=True)

for adapter in adapters.stdout.splitlines():
    adapter_name = adapter.split()[0]
    subprocess.run(["powershell", "-Command", f"Disable-NetAdapter -Name {adapter_name} -Confirm:$false"])

time.sleep(60)

for adapter in adapters.stdout.splitlines():
    adapter_name = adapter.split()[0]
    subprocess.run(["powershell", "-Command", f"Enable-NetAdapter -Name {adapter_name} -Confirm:$false"])