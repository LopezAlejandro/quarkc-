#include <iostream>
using namespace std;

int main()
{
    int acumulado,valor;
    acumulado = 0;

    do {
        cout << "Ingrese un valor : ";
        cin >> valor;
        cout << "\n";
        if (valor < 9999)
        {
            acumulado = acumulado+valor;
        }

    } while (valor !=9999);
    
    if (acumulado > 0)
    {
        cout << "Acumulador mayor que 0 ";
        cout << acumulado;
        cout << "\n";
      
    } 
    else
    {
        if (acumulado < 0)
        {
            cout << "Acumulador menor que 0 ";
            cout << acumulado;
            cout << "\n";
        }
        else
        {
            cout << "Acumlador igual a 0 ";
            cout << acumulado;
            cout << "\n";
        }
    }   

}
