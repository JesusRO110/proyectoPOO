// Componente.h
#ifndef COMPONENTE_H
#define COMPONENTE_H
#include <iostream>
#include <string>

class Componente {
protected: 
    // Usamos 'protected' en lugar de 'private' para que los hijos puedan ver este dato
    std::string nombreComponente;

public:
    // El constructor del papá
    Componente(std::string nombre) {
        nombreComponente = nombre;
    }

    // Una acción básica que cualquier componente en la pantalla podría hacer
    void mostrarEnPantalla() {
        std::cout << "Dibujando en pantalla: " << nombreComponente << std::endl;
    }
};
#endif