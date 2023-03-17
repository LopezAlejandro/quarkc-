#include <iostream>
using namespace std;

int main()
{
    int personas,altura,ciclo;
    float suma;
    suma =0;
    ciclo = 0;

    cout << "Cuantas personas va a medir? : ";
    cin >> personas;

    while (ciclo < personas)
    {
        cout << "\nIngrese la altura (en cm) : ";
        cin >> altura;
        
        suma = suma + altura;
        ciclo = ciclo+1;
    }
    cout << "\nAltura promedio (en cm) : ";
    cout << float(suma /personas);
    cout << "\n";  
}
