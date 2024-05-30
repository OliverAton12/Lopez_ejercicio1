#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    
    std::srand(static_cast<unsigned>(std::time(0)));

   
    int numero = std::rand() % 6 + 1;

    
    std::cout << "Número generado: " << numero << std::endl;

    
    if (numero % 2 != 0) {
        std::cout << "Felicidades, ganaste" << std::endl;
    } else {
        std::cout << "Perdiste, sigue intentando" << std::endl;
    }

    return 0;
}