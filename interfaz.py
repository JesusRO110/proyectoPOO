4253345# interfaz.py

import tkinter as tk
from tkinter import messagebox
from mensaje import Mensaje

class AplicacionMensajes:
    """
    Clase que construye y gestiona la interfaz gráfica principal.
    """
    def __init__(self):
        # 1. Instanciar componente principal (la ventana)
        self.ventana = tk.Tk()
        self.ventana.title("Manejador de Mensajes")
        self.ventana.geometry("400x200")

        # 2. Imprimir mensaje de inicialización
        print("Inicializando componentes gráficos...")

        self.mensaje_final = None

        # Crear y posicionar los widgets (etiquetas, campos de texto, botón)
        self._crear_widgets()

    def _crear_widgets(self):
        """Método privado para organizar la creación de componentes."""
        # Etiqueta y campo para el remitente
        tk.Label(self.ventana, text="Remitente:").pack(pady=5)
        self.entry_remitente = tk.Entry(self.ventana, width=40)
        self.entry_remitente.pack(pady=5)

        # Etiqueta y campo para el mensaje
        tk.Label(self.ventana, text="Mensaje:").pack(pady=5)
        self.entry_texto = tk.Entry(self.ventana, width=40)
        self.entry_texto.pack(pady=5)

        # Botón para guardar el mensaje
        # El comando se vincula al método _guardar_mensaje
        tk.Button(
            self.ventana,
            text="Guardar Mensaje",
            command=self._guardar_mensaje
        ).pack(pady=10)

    def _guardar_mensaje(self):
        """
        Función que se ejecuta al hacer clic en el botón.
        3. Captura los datos de los campos de texto.
        4. El clic del botón dispara este método.
        5. Se crea el objeto Mensaje.
        6. Se muestra el resultado.
        """
        remitente = self.entry_remitente.get()
        texto = self.entry_texto.get()

        if not remitente or not texto:
            messagebox.showwarning("Campos Vacíos", "Por favor, complete todos los campos.")
            return

        # 5. Crear el objeto Mensaje
        self.mensaje_final = Mensaje(texto, remitente)

        # 6. Mostrar el resultado final
        print(f"Resultado capturado: {self.mensaje_final}")
        messagebox.showinfo(
            "Mensaje Guardado",
            f"Se ha guardado el siguiente mensaje:\n\n{self.mensaje_final}"
        )

    def arrancar_bucle(self):
        """Inicia el bucle de eventos principal de la aplicación."""
        self.ventana.mainloop()
