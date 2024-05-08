//funcion que permita decir cual es el mayor de dos numeros

#include <iostream>
using namespace std;

int obtMayor(int num1, int num2){
    if (num1 > num2) return num1;
    else return num2;
}

int obtMenor( int num1, int num2){
    if (num1 < num2) return num1;
    else return num2;
}

int main(int argc, char const *argv[])
{
int num1, num2;
    cout << "Ingrese el primer numero :";
    cin >> num1;
    cout << "Ingrese el segundo numero :";
    cin >> num2;

    if (num1 == num2){
        cout << "Los numeros son iguales" << endl;
    }
    {
    cout << "El mayor es :" << obtMayor(num1, num2) << endl;
    cout << "El menor es :" << obtMenor(num1, num2) << endl;
    }
    return 0;
}



