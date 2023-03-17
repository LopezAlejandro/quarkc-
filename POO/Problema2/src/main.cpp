#include <iostream>
using namespace std;

class Operaciones
{
private:
    int operando1,operando2;

public:
    void carga();
    void suma();
    void resta();
    void multiplicacion();
    void division();
};

void Operaciones::carga()
{
    cout<< "Primer operando : ";
    cin >> operando1;
    cout <<"\nSegundo operando : ";
    cin >> operando2;
}

void Operaciones::suma()
{
    cout << "La suma es : ";
    cout << operando1 + operando2;
    cout << "\n";
}
void Operaciones::resta()
{
    cout << "La resta es : ";
    cout << operando1 - operando2;
    cout << "\n";
}
void Operaciones::multiplicacion()
{
    cout << "El producto es : ";
    cout << operando1 * operando2;
    cout << "\n";
}
void Operaciones::division()
{
    if (operando2 != 0)
    {
        cout << "El cociente es : ";
        cout << (float)operando1 / (float)operando2;
        cout << "\n";
    } 
    else
    {
        cout << "Division por 0 no definida\n";
    }   
}

int main()
{
    Operaciones operacion1;

    operacion1.carga();
    operacion1.suma();
    operacion1.resta();
    operacion1.multiplicacion();
    operacion1.division();
    return 0;
}
