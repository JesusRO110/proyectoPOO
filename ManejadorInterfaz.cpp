// ManejadorInterfaz.cpp
#include "ManejadorInterfaz.h"
#include <iostream>

// --- Implementación del Boton ---
void Boton::click() {
    std::cout << "¡Clic! Evento de botón disparado." << std::endl;
}

// --- Implementación del ManejadorInterfaz ---
ManejadorInterfaz::ManejadorInterfaz() {
    // El constructor puede estar vacío si la inicialización se hace en un método separado.
}

void ManejadorInterfaz::inicializar() {
    // 2. Imprimir mensaje de inicialización
    std::cout << "Inicializando componentes gráficos..." << std::endl;
}

void ManejadorInterfaz::ingresarDatos(const std::string& texto, const std::string& remitente) {
    std::cout << "Simulando captura de datos de la interfaz..." << std::endl;
    this->texto_ingresado = texto;
    this->remitente_ingresado = remitente;
}

void ManejadorInterfaz::simularClicBotonGuardar() {
    // 4. Disparar el evento del botón
    boton_guardar.click();

    // 5. El evento invoca internamente la creación del objeto Mensaje
    std::cout << "Procesando evento de clic: creando objeto Mensaje..." << std::endl;
    mensaje_procesado = std::make_unique<Mensaje>(texto_ingresado, remitente_ingresado);
}

void ManejadorInterfaz::mostrarEstadoSistema() const {
    // 6. Mostrar el resultado final
    std::cout << "\n--- Estado Final del Sistema ---" << std::endl;
    if (mensaje_procesado) {
        std::cout << "Mensaje guardado de \"" << mensaje_procesado->getRemitente() << "\": ";
        std::cout << "\"" << mensaje_procesado->getTexto() << "\"" << std::endl;
    } else {
        std::cout << "No hay ningún mensaje procesado en el sistema." << std::endl;
    }
    std::cout << "--------------------------------" << std::endl;
}
