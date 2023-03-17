#include <iostream>
using namespace std;

int main()
{
    int valor;

    cout << "Ingrese un numero : ";
    cin >> valor;

    if (valor > 0)
    {
        cout << valor;
        cout << " es positivo\n";         
    }
    else
    {
        if (valor < 0)
        {
            cout << valor;
            cout << " es negativo\n";
        }
        else
        {
            cout << valor;
            cout << " es cero\n";
        }
    }
}
