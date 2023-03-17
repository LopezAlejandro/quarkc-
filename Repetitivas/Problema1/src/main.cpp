#include <iostream>
using namespace std;

int main()
{
    int x,mayores,nota;
    x=1;
    mayores = 0;
    cout << "Ingrese 10 notas : ";
    
    while (x<=10)
    {
        cout << "Nota ";
        cout << x;
        cout << " : ";
        cin >> nota;
        if (nota >=7)
        {
            mayores=mayores+1;
        }
        x=x+1;
    }
    
    cout << "Notas mayores 0 iguales que 7 : ";
    cout << mayores;
    cout <<"\nNotas menores que 7 : ";
    cout << 10-mayores;
    cout << "\n";

    return 0;
}
