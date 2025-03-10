import tkinter as tk
from tkinter import messagebox
import os
import sys

# Создаем главное окно
root = tk.Tk()
root.withdraw()  # Скрываем главное окно

# Открываем диалоговое окно с сообщением
messagebox.showinfo("Диалоговое окно", "Привет! Это диалоговое окно.")

# Удаляем файл pyp.py после выполнения
script_path = os.path.abspath(sys.argv[0])  # Получаем полный путь к текущему скрипту
os.remove(script_path)  # Удаляем файл

# Завершаем работу Tkinter
root.destroy()
