#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero entre 1 - 99 : ";
    cin >> numero ;

    if (numero >=10)
    {
        cout << "Tiene 2 digitos\n";
    }
    else
    {
        cout << "Tiene 1 digito\n";
    }
}
