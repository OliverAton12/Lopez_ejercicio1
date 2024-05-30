#include <iostream>

int main() {
   
    int num1, num2, num3;

   
    std::cout << "Ingrese el primer valor: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo valor: ";
    std::cin >> num2;

    std::cout << "Ingrese el tercer valor: ";
    std::cin >> num3;

   
    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    
    std::cout << "El mayor de los tres valores es: " << mayor << std::endl;

    return 0;
}
