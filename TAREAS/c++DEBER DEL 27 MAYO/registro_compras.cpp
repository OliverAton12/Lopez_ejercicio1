#include <iostream>

int main() {
    
    double costo_articulo;

    
    std::cout << "Ingrese el costo del articulo: $";
    std::cin >> costo_articulo;

    
    if (costo_articulo < 1500) {
        std::cout << "Debes pagar en efectivo" << std::endl;
    } else {
        std::cout << "Debes pagar con tarjeta" << std::endl;
    }

    return 0;
}
