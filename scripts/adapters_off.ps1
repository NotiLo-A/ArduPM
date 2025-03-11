# Shutting down all network adapters
$adapters = Get-NetAdapter
foreach ($adapter in $adapters) {
    Disable-NetAdapter -Name $adapter.Name -Confirm:$false
}
