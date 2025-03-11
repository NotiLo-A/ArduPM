# Enable all network adapters
$adapters = Get-NetAdapter -Physical
foreach ($adapter in $adapters) {
    Enable-NetAdapter -Name $adapter.Name -Confirm:$false
}
