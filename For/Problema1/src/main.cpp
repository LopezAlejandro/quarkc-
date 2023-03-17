#include <iostream>
using namespace std;

int main()
{
    int pares,grande,x;
    float superficie,base,altura;

    grande = 0;

    cout << "Ingrese cuantos pares de datos : ";
    cin >>pares;

    for (x = 1; x <= pares; x++)
    {
        cout << "\nPar Nro : ";
        cout << x;
        cout << "\nBase : ";
        cin >> base;
        cout << "\nAltura : ";
        cin >> altura;

        superficie = (base*altura)/2;

        cout << "\nSuperficie : ";
        cout << superficie;
        cout << "\n";

        if (superficie >12)
        {
            grande = grande +1;
        }

    }

    cout << "\nTriangulos grandes : ";
    cout << grande;
    cout << "\n";
    
}
