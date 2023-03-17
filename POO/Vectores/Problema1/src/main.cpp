#include <iostream>
using namespace std;

class Vector
{
private:
    int valores[8];
public:
    void cargavalor();
    void mayormenor();
};

void Vector::cargavalor()
{
    for (int i = 0; i < 8; i++)
    {
        cout << "Ingrese el valor ";
        cout << i;
        cout << ": ";
        cin >> valores[i];
        cout << "\n";
    }
}

void Vector::mayormenor()
{
    int suma,suma50,suma36;
    suma =0;
    suma50=0;
    suma36=0;

    for (int i = 0; i < 8; i++)
    {
        suma = suma + valores[i];
        if (valores[i] > 36)
        {
            suma36=suma36 + valores[i];
        }
        if (valores[i]>50)
        {
            suma50 = suma50+1;
        }
        
    }
    cout << "La suma del vector es : ";
    cout << suma;
    cout <<"\nLa suma de valores mayores a 36 es : ";
    cout << suma36;
    cout << "\n";
    cout << "Hay ";
    cout << suma50;
    cout << " elementos mayores que 50\n";

}


int main()
{
    Vector vector1;
    vector1.cargavalor();
    vector1.mayormenor();

}
