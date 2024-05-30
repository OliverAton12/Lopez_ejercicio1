#include <iostream>

int main() {
   
    double horas_trabajadas, tarifa_por_hora;

    
    std::cout << "Ingrese las horas trabajadas: ";
    std::cin >> horas_trabajadas;

    std::cout << "Ingrese la tarifa por hora: ";
    std::cin >> tarifa_por_hora;

    
    double salario;
    if (horas_trabajadas > 40) {
        
        salario = 40 * tarifa_por_hora;
       
        salario += (horas_trabajadas - 40) * (tarifa_por_hora * 1.5);
    } else {
        salario = horas_trabajadas * tarifa_por_hora;
    }

    
    std::cout << "El salario del trabajador es: $" << salario << std::endl;

    return 0;
}
