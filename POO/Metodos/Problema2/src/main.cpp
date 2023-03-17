#include <iostream>

using namespace std;

class Mayormenor
{
private:
    int mayor(int x,int y);
public:
    void cargavalores();
};

void Mayormenor::cargavalores()
{
    int valor1, valor2;

    cout << "Ingrese el primer valor : ";
    cin >> valor1;
    cout <<"\nIngrese el segundo valor : ";
    cin >> valor2;
    cout << "\nEl valor mayor es : ";
    cout << mayor(valor1,valor2);
}

int Mayormenor::mayor(int x,int y)
{
    int m;
    if (x > y)
    {
        m = x;
    }
    else
    {
        m=y;
    }
    return m;
}

int main(int argc, char *argv[])
{
    Mayormenor numero;
    numero.cargavalores();
}
