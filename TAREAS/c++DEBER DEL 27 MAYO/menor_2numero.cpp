#include <iostream>

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese los dos números
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    // Comparar los dos números para encontrar el menor
    int menor;
    if (num1 < num2) {
        menor = num1;
    } else {
        menor = num2;
    }

    // Imprimir el resultado
    std::cout << "El menor de los dos numeros es: " << menor << std::endl;

    return 0;
}
