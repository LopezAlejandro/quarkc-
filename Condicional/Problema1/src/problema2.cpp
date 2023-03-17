#include <iostream>
using namespace std;

int main()
{
    int nota1,nota2,nota3;
    float promedio;

    cout << "Ingrese la primer nota : ";
    cin >> nota1;
    cout << "Ingrese la segunda nota : ";
    cin >> nota2;
    cout << "Ingrese la tercer nota : ";
    cin >> nota3;
    promedio = (nota1+nota2+nota3)/3;

    if (promedio >= 7)
    {
        cout << "Promocionado";
    }
}
