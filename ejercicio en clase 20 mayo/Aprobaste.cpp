#include <iostream>
using namespace std;
int main() {
    int nota1, nota2, nota3, promedio;

    // Solicitar al usuario que ingrese los dos números
    std::cout << "Ingresa nota 1: ";
    cin >> nota1;

    std::cout << "Ingresa  nota 2 : ";
    cin >> nota2;

    std::cout << "Ingresa  nota 3 : ";
    cin >> nota3;
    promedio = (nota1+nota2+nota3)/3;
    cin>>nota3;

    promedio = (nota1+nota2+nota3)/3;
    if (promedio>=6)
       cout<<"aprobaste algoritmos con "
             <<promedio;
    else
        cout<<"Tu nota es" <<promedio<<", por tanto no aprobaste algoritmo";




    return 0;
}
