# Shutting down all network adapters
$adapters = Get-NetAdapter
foreach ($adapter in $adapters) {
    Disable-NetAdapter -Name $adapter.Name -Confirm:$false
}

Start-Sleep -Seconds 30

# Turning them up again
foreach ($adapter in $adapters) {
    Enable-NetAdapter -Name $adapter.Name -Confirm:$false
}
