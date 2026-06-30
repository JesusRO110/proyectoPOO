// Mensaje.h (El plano o dibujo de nuestro mensaje)
#ifndef MENSAJE_H
#define MENSAJE_H
#include <string>

class Mensaje {
private:
    std::string texto;
    std::string remitente;
public:
    Mensaje(std::string t, std::string r); // Constructor
    std::string obtenerTexto();            // Métodos para ver los datos
    std::string obtenerRemitente();
};
#endif