// main.cpp
#include <iostream>
#include "ManejadorInterfaz.h"

int main() {
    ManejadorInterfaz interfaz;
    
    interfaz.inicializar(); 
    
    std::string texto = "Hola";
    std::string usuario = "Jesus Ramirez";
    interfaz.ingresarDatos(texto, usuario);
    
    interfaz.simularClicBotonGuardar();
    
    interfaz.mostrarEstadoSistema();
    
    return 0;
}