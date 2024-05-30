#include <iostream>
#include <cstdlib> 
#include <ctime>   
int main() {
 
    std::srand(static_cast<unsigned>(std::time(0)));

    
    int dado = std::rand() % 6 + 1;

    
    std::cout << "Número generado: " << dado << std::endl;

    
    switch (dado) {
        case 1:
            std::cout << "*" << std::endl;
            break;
        case 2:
            std::cout << "--" << std::endl;
            break;
        case 3:
            std::cout << "+++" << std::endl;
            break;
        case 4:
            std::cout << "@@@@" << std::endl;
            break;
        case 5:
            std::cout << "|   |   |   |  |" << std::endl;
            break;
        case 6:
            std::cout << ":-)    :-)    :-)    :-)    :-)    :-)" << std::endl;
            std::cout << "¡Has ganado!" << std::endl;
            break;
        default:
            std::cout << "Error inesperado." << std::endl;
    }

    return 0;
}