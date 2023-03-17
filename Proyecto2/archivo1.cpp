#include<iostream>

using namespace std;

int main()

{
    int lado;
    int superficie;

    cout << "Ingrese el lado del cuadrado ";
    cin >> lado;

    superficie = lado*lado;

    cout<< "La superficie del cuadrado es ";
    cout<< superficie;
    cout<< "\n";

    return 0;
}