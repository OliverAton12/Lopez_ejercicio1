#include <iostream>

int main() {
    
    int numero;

   
    std::cout << "Ingrese un numero entre 1 y 9999999: ";
    std::cin >> numero;

   
    if (numero < 1 || numero > 9999999) {
        std::cout << "El numero ingresado esta fuera del rango permitido." << std::endl;
        return 1;
    }

    
    int cifras = 0;
    int temp = numero; 

    while (temp > 0) {
        temp /= 10;
        cifras++;
    }

    
    std::cout << "El numero " << numero << " se compone de " << cifras << " cifras." << std::endl;

    return 0;
}