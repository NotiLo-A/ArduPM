# Отключаем все сетевые адаптеры
$adapters = Get-NetAdapter
foreach ($adapter in $adapters) {
    Disable-NetAdapter -Name $adapter.Name -Confirm:$false
    Write-Host "Адаптер $($adapter.Name) отключен."
}

Write-Host "Интернет отключен. Ожидание 1 минуту..."
Start-Sleep -Seconds 30 # Ждем 60 секунд (1 минуту)

# Включаем все сетевые адаптеры обратно
foreach ($adapter in $adapters) {
    Enable-NetAdapter -Name $adapter.Name -Confirm:$false
    Write-Host "Адаптер $($adapter.Name) включен."
}

Write-Host "Интернет восстановлен."
