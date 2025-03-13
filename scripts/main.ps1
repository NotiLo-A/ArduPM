#Invoke-Expression (Invoke-WebRequest -Uri "https://raw.githubusercontent.com/NotiLo-A/ArduPM/main/bin/hello.exe")

$url = "https://raw.githubusercontent.com/NotiLo-A/ArduPM/main/bin/hello.exe"
$output = "$env:TEMP\hello.exe"
Invoke-WebRequest -Uri $url -OutFile $output
Start-Process $output
