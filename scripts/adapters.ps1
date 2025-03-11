# Shutting down all network adapters
$adapters = Get-NetAdapter -Physical
foreach ($adapter in $adapters) {
    Disable-NetAdapter -Name $adapter.Name -Confirm:$false
}

Start-Sleep -Seconds 60

## Enable all network adapters
foreach ($adapter in $adapters) {
    Enable-NetAdapter -Name $adapter.Name -Confirm:$false
}
