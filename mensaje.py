class Mensaje:
    """
    Clase que representa un mensaje con un texto y un remitente.
    Los atributos se marcan como privados para encapsular la información.
    """
    def __init__(self, texto: str, remitente: str):
        self.__texto = texto
        self.__remitente = remitente
        print(">> Objeto Mensaje creado.")

    def __str__(self):
        """
        Devuelve una representación en cadena del objeto,
        ideal para imprimir o mostrar en la interfaz.
        """
        return f'Remitente: {self.__remitente}\nMensaje: "{self.__texto}"'
