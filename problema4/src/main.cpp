#include <iostream>
using namespace std;

int main()
{
    float precio;
    int cantidad;
    cout << "Ingrese el precio del producto : ";
    cin >> precio ;
    cout << "\nIngrese la cantidad de articulos : ";
    cin >> cantidad;
    cout << "\n";
    cout << "Total a abonar : ";
    cout << cantidad * precio;
}
