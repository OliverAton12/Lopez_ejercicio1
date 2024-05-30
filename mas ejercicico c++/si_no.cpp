#include <iostream>
#include <string>

void verificar_culpabilidad(const std::string& respuesta) {
    if (respuesta == "si") {
        std::cout << "Debes pedir perdón" << std::endl;
    } else if (respuesta == "no") {
        std::cout << "Puedes retirarte" << std::endl;
    } else {
        std::cout << "Respuesta no válida. Por favor, responde 'si' o 'no'." << std::endl;
    }
}

int main() {
    std::string respuesta;
    std::cout << "¿Eres culpable? (responde 'si' o 'no'): ";
    std::getline(std::cin, respuesta);
    verificar_culpabilidad(respuesta);
    return 0;
}
