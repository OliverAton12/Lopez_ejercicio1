#include <iostream>
#include <cmath>  
int main() {
    double a, b, c;

   
    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;
    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;
    std::cout << "Ingrese el valor de c: ";
    std::cin >> c;

    
    if (a == 0) {
        std::cout << "El valor de 'a' no puede ser cero en una ecuación cuadrática." << std::endl;
        return 1;
    }

    
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
       
        double x1 = (-b + std::sqrt(discriminante)) / (2 * a);
        double x2 = (-b - std::sqrt(discriminante)) / (2 * a);
        std::cout << "Las soluciones son x1 = " << x1 << " y x2 = " << x2 << std::endl;
    } else if (discriminante == 0) {
        
        double x = -b / (2 * a);
        std::cout << "La solución es x = " << x << std::endl;
    } else {
        
        double parteReal = -b / (2 * a);
        double parteImaginaria = std::sqrt(-discriminante) / (2 * a);
        std::cout << "Las soluciones son x1 = " << parteReal << " + " << parteImaginaria << "i y x2 = " << parteReal << " - " << parteImaginaria << "i" << std::endl;
    }

    return 0;
}