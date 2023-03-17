#include <iostream>
using namespace std;

int main(int argc, char *argv[])

{
    int valor;
    cout << "Ingrese un entero de hasta 3 cifras (1 - 999) : ";
    cin >> valor;

    if (valor <= 9)
    {
        cout << "Es de una cifra\n";
    }
    else
    {
        if (valor<=99)
        {
            cout << "Es de dos cifras\n";
        }
        else
        {
            if (valor <=999)
            {
                cout << "Es de tres cifras\n";

            }
            else
            {
                cout << "Error - Numero muy grande\n";
            }        
        }
    }

}
