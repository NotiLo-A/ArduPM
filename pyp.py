import subprocess

def disable_internet(adapter_name):
    try:
        # Команда для отключения сетевого адаптера
        subprocess.run(["netsh", "interface", "set", "interface", adapter_name, "admin=disable"], check=True)
        print(f"Интернет отключен (адаптер '{adapter_name}' отключен).")
    except subprocess.CalledProcessError as e:
        print(f"Ошибка при отключении интернета: {e}")

if __name__ == "__main__":
    # Укажите имя вашего сетевого адаптера
    adapter_name = "Ethernet"  # Замените на имя вашего адаптера, например "Wi-Fi" или "Ethernet"
    disable_internet(adapter_name)
