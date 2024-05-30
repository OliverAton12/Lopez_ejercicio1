#include <iostream>

int main() {
   
    double lado1, lado2, lado3;

    
    std::cout << "Ingrese la longitud del primer lado del triangulo: ";
    std::cin >> lado1;

    std::cout << "Ingrese la longitud del segundo lado del triangulo: ";
    std::cin >> lado2;

    std::cout << "Ingrese la longitud del tercer lado del triangulo: ";
    std::cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        std::cout << "El triangulo es equilatero" << std::endl;
    }
 
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        std::cout << "El triangulo es isoceles" << std::endl;
    }

    else {
        std::cout << "El triangulo es escaleno" << std::endl;
    }

    return 0;
}
