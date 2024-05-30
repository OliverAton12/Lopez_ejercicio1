#include <iostream>

int main() {
    
    int num1, num2, num3;

    
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    std::cout << "Ingrese el tercer numero: ";
    std::cin >> num3;

    
    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    
    int suma = num1 + num2 + num3;

   
    std::cout << "El menor de los tres numeros es: " << menor << std::endl;
    std::cout << "La suma de los tres numeros es: " << suma << std::endl;

    return 0;
}
