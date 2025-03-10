import tkinter as tk
from tkinter import messagebox

# Создаем главное окно
root = tk.Tk()
root.withdraw()  # Скрываем главное окно, так как оно нам не нужно

# Открываем диалоговое окно с сообщением
messagebox.showinfo("Диалоговое окно", "Привет! Это диалоговое окнаврывраыварыварвыарвыарвыарыво.")

# Завершаем работу Tkinter
root.destroy()
