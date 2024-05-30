#include <iostream>

int main() {
   
    int numero_mes, anio;

    
    std::cout << "Ingrese el numero de mes (del 1 al 12): ";
    std::cin >> numero_mes;

    std::cout << "Ingrese el año: ";
    std::cin >> anio;

   
    if (numero_mes < 1 || numero_mes > 12) {
        std::cout << "Numero de mes invalido. Debe estar entre 1 y 12." << std::endl;
        return 1;
    }

    
    int numero_dias;
    switch (numero_mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            numero_dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            numero_dias = 30;
            break;
        case 2:
            
            if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
                numero_dias = 29;
            } else {
                numero_dias = 28;
            }
            break;
    }

   
    std::cout << "El mes tiene " << numero_dias << " dias." << std::endl;

    return 0;
}
