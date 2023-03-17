#include <iostream>

using namespace std;

class Listado
{
private:
    void imprime(int valor);

public:
    void cargavalor();
};

void Listado::imprime(int v)
{
    for (int i = 1; i <= v; i++)
    {
        cout << i;
        cout <<"\n";
    }
    
}

void Listado::cargavalor()
{
    int valor;
    cout << "Ingrese un valor : ";
    cin >> valor;
    cout << "\n";

    imprime(valor);
}


int main()
{
    Listado lista1;
    lista1.cargavalor();
}
