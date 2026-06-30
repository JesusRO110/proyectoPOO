Guía de Ejecución para el Profesor
==================================

Este documento detalla la investigacion y los pasos necesarios para correr el Manejador de Mensajes y Alertas.


============================================================================================================================================================================================================
FASE 1:

Investigacion teorica

Graphical User Interface.
	La interfaz grafica de usuario es la parte del programa que permite al usuario interactuar con el.

Porque se dice que cada elemento de una interfaz grafica ( Boton, etiqueta, Ventana) es un objeto?
	Por que son una instancia de una clase.
Los atributos definen su estado visual (color de fondo, tamano, fuente, posicion).
Los metodos definen su comportamiento (hacerse visible, ocultarse, cambiar de tamano o desactivarse).
Elementos basicos de una GUI
1.	Ventanas: Son contenedores de primer nivel compuestas por una barra de titulo y botones de control de la Ventana, tienen un panel de contenido que es un contenedor de Segundo nivel.
2.	Los paneles son contenedores de Segundo nivel que organizan los componenetes u otros paneles que contenga segun la disposicion, 
3.	Componentes: son los elementos con los que interactua el usuario como botones, etiquetas, cuadros de texto, Casillas de verificacion, Desplegables, Iconos etc.
Jerarquía de Componentes
Las interfaces gráficas no se dibujan al azar; se estructuran en forma de árbol genealógico, conocido como el "Árbol de Componentes" o la jerarquía gráfica.
Componente Contenedor (Padre): Es un objeto cuyo propósito principal es agrupar, organizar y gestionar a otros objetos. El contenedor raíz suele ser la "Ventana" principal (Window o Tk en Python). Dentro de ella, suele haber "Paneles" (Frames) que agrupan secciones (por ejemplo, un panel para el menú y otro para el contenido).
Componente Hijo: Son los elementos interactivos o visuales que viven dentro de un contenedor (botones, cajas de texto, imágenes).
El comportamiento se hereda en cascada: si tú ocultas o destruyes el contenedor "padre", automáticamente se ocultan o destruyen todos sus "hijos".


Eventos
Evento: Es cualquier acción que ocurre en el sistema operativo durante la ejecución del programa. Puede ser físico (un clic izquierdo, presionar la tecla "Enter", mover el ratón) o del sistema (un temporizador que llega a cero, la ventana minimizándose).
Tipos de Eventos
CLASE	DESCRIPCIÓN
EventObject	Clase principal de la que derivan todos los eventos.
MouseEvent	Eventos relativos a la acción del ratón.
ComponentEvent	Eventos relacionados con cambios en el componente (tamaño, posición).
ContainerEvent	Eventos al añadir o eliminar componentes de un contenedor.
WindowEvent	Eventos relacionados con variaciones en una ventana (apertura, cierre, cambio de tamaño).
ActionEvent	Evento que se produce al detectarse una acción sobre un componente (uno de los más comunes).

Escuchador (Listener)
Escuchador (Listener / Handler): Es un método o función que está "en pausa", esperando pasivamente a que ocurra un evento específico.
            Vincular (Bind): Es el acto de conectar un evento físico con un escuchador lógico. Significa decirle al programa: "Cuando el componente X reciba el evento Y, ejecuta la función Z". Por ejemplo: Vincular el 'Clic Izquierdo' del 'Botón Guardar' al método crear_mensaje().

Herramientas en Tiempo de Ejecución: El Event Loop (Bucle de Eventos)

Si un programa normal llega a su última línea de código, se cierra. Para evitar que una interfaz gráfica se cierre inmediatamente después de dibujarse, se utiliza el Event Loop (Bucle de Eventos).

El Event Loop es, en esencia, un ciclo infinito (while True:) invisible que mantiene viva la aplicación. Su única tarea es dar vueltas constantemente revisando una "cola de eventos" del sistema operativo.

El bucle pregunta: ¿El usuario hizo algo?

Si no hizo nada, sigue dando vueltas (manteniendo la ventana en pantalla).

Si el usuario hizo clic en un botón, el Event Loop atrapa ese evento, busca si hay alguna función vinculada a ese botón, pausa el bucle un milisegundo para ejecutar la acción lógica, y luego vuelve a su tarea de vigilancia.


============================================================================================================================================================================================================

FASE 2: 

Estructura del Proyecto

-------------------------------------------
1. Proyecto en Python (Interfaz Gráfica Real)
-------------------------------------------

Esta versión utiliza la librería nativa `tkinter` para crear una interfaz de usuario funcional.

Requisitos:
- Python 3.6 o superior.
- La librería `tkinter` generalmente viene incluida por defecto en las instalaciones estándar de Python.

Pasos para ejecutar:
1. Abra una terminal o línea de comandos.
2. Navegue hasta el directorio raíz del proyecto (la carpeta que contiene `main.py`, `interfaz.py` y `mensaje.py`).
3. Ejecute el siguiente comando:

   ```
   python main.py
   ```

   *Nota: En algunos sistemas (como Linux o macOS), podría ser necesario usar `python3` en lugar de `python`:*
   
   ```
   python3 main.py
   ```

Al ejecutar el comando, se abrirá una ventana gráfica donde podrá introducir un remitente, un mensaje y guardarlo. Los eventos se registrarán en la consola desde la que se lanzó el programa.

-------------------------------------------
2. Proyecto en C++ (Simulación en Consola)
-------------------------------------------

Esta versión simula la arquitectura de una GUI utilizando la consola.

**Requisitos:**
- Un compilador de C++, como `g++` (se recomienda MinGW-w64 para Windows).

**Paso 1: Compilación**
Para compilar el proyecto, abra una terminal en el directorio que contiene los archivos `.cpp` y `.h` y ejecute el siguiente comando. Este comando enlazará todos los archivos fuente necesarios en un único ejecutable:

```
g++ main.cpp Mensaje.cpp ManejadorInterfaz.cpp -o proyecto -std=c++17
```

**Paso 2: Ejecución**
Una vez compilado sin errores, se generará un archivo ejecutable llamado `proyecto` (o `proyecto.exe`). Para ejecutarlo, use el comando correspondiente a su sistema operativo:

- **En Windows:**
  ```
  proyecto.exe
  ```

- **En Linux o macOS:**
  ```
  ./proyecto
  ```

La salida de la simulación se mostrará directamente en la terminal.

