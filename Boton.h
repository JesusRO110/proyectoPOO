// ManejadorInterfaz.h
#ifndef MANEJADORINTERFAZ_H
#define MANEJADORINTERFAZ_H

#include "Mensaje.h"
#include <string>
#include <memory> // Para std::unique_ptr

// Simulación de un componente Boton
class Boton {
public:
    // El método click simula el evento
    void click();
};

class ManejadorInterfaz {
private:
    // Datos temporales que simulan los campos de texto (Entry)
    std::string texto_ingresado;
    std::string remitente_ingresado;

    // El objeto Mensaje final, gestionado con un puntero inteligente
    std::unique_ptr<Mensaje> mensaje_procesado;

    // El manejador "contiene" un botón
    Boton boton_guardar;

public:
    ManejadorInterfaz(); // Constructor
    void inicializar();
    void ingresarDatos(const std::string& texto, const std::string& remitente);
    void simularClicBotonGuardar();
    void mostrarEstadoSistema() const;
};

#endif // MANEJADORINTERFAZ_H
