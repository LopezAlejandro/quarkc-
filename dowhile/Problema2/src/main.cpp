#include <iostream>
using namespace std;

int main()
{
    int cuenta;
    float saldo,saldot;
    saldot = 0;
    do {
        cout << "Ingrese Nro de cuenta : ";
        cin >> cuenta;
        if (cuenta >=0)
        {
            cout << "\nIngrese el saldo : ";
            cin >> saldo;
            cout << "\n";

            cout << " Numero de cuenta : ";
            cout << cuenta;
            cout << " - ";

            if (saldo > 0)
            {
                cout << "Acreedor";
                cout << "\n";

                saldot = saldot + saldo;
            }
            else
            {
                if (saldo < 0)
                {
                    cout << "Deudor";
                    cout << "\n";
                }
                else
                {
                    cout << "Nulo";
                    cout << "\n";
                }
            }
        } 

    }while (cuenta >=0);
    cout << "Saldo acreedor : ";
    cout << saldot;
    cout << "\n";
}
