#include <iostream>
using namespace std;
int main() {
    int num1, num2 ;

    // Solicitar al usuario que ingrese los dos números
    std::cout << "Ingresa primer entero : ";
    cin >> num1;

    std::cout << "Ingresa segundo entero : ";
    cin >> num2;

    if (num1==num2)
    cout <<"los numeros son iguales";
    
    else
    if(num1>num2)
    {
       cout<<"El mayor es"<<num1;
       cout<<"El menor es"<<num2;
      
    }
    else
    {
         cout<<"El mayor es"<<num2;
        cout<<endl<<"El menor es"<<num1;
    }
    




    return 0;
}