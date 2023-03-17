#include <iostream>
using namespace std;

class Persona
{
private:
    float sueldo;
    char nombre[40];

public:
    void inicializar();
    void imprimir_datos();
    void paga_impuestos();
};

    
void Persona::inicializar()
{
    cout<< "Ingrese el nombre : ";
    cin.getline (nombre,40);
    cout << "\nIngrese el sueldo : ";
    cin>>sueldo;
}

void Persona::imprimir_datos()
{
    cout << "Nombre : ";
    cout << nombre;
    cout << "\n";
    cout << "Sueldo : ";
    cout << sueldo;
    cout << "\n";
}

void Persona::paga_impuestos()
{
    cout << nombre;
    
    if (sueldo > 3000)
    {
            cout << " debe pagar impuestos\n";
    }
    else
    {
        cout << " no debe pagar impuestos\n";
    }
}

int main()
{
    Persona persona1;

    persona1.inicializar();
    persona1.imprimir_datos();
    persona1.paga_impuestos();
    return 0;
}
