#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;

    cout << "Ingrese el primer numero : ";
    cin >> n1;
    cout << "Ingrese el segundo numero : ";
    cin >> n2;
    cout << "Ingrese el tercer numero : ";
    cin >> n3;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "El mayor numero es ";
            cout << n1;
            cout << "\n";
        }
        else
        {
            cout << "El mayor numero es ";
            cout << n3;
            cout << "\n";
        }

    }
    else
    {
        if (n2 > n3)
        {
            cout << "El mayor numero es ";
            cout << n2;
            cout << "\n";
        }
        else
        {
            cout << "El mayor numero es ";
            cout << n3;
            cout << "\n";
        }
    }

}
