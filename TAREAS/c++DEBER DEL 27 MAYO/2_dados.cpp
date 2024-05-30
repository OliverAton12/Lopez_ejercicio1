#include <iostream>
#include <cstdlib> 
#include <ctime>  

int main() {
    
    std::srand(static_cast<unsigned>(std::time(0)));

    
    int dado1 = std::rand() % 6 + 1;
    int dado2 = std::rand() % 6 + 1;

    
    std::cout << "Dado 1: " << dado1 << std::endl;
    std::cout << "Dado 2: " << dado2 << std::endl;

   
    if (dado1 == dado2 || dado1 + dado2 == 11) {
        std::cout << "¡Felicidades, has ganado!" << std::endl;
    } else {
        std::cout << "Lo siento, no has ganado esta vez." << std::endl;
    }

    return 0;
}