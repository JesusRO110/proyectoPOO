// Mensaje.cpp (Aquí le decimos cómo funciona exactamente)
#include "Mensaje.h"

Mensaje::Mensaje(std::string t, std::string r) {
    texto = t;
    remitente = r;
}

std::string Mensaje::obtenerTexto() { return texto; }
std::string Mensaje::obtenerRemitente() { return remitente; }