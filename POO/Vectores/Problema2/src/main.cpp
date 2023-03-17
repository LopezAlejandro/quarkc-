#include <iostream>
using namespace std;

class Sumavectores
{
private:
    int opera1[4];
    int opera2[4];
    int resultado[4];
    void sumarvectores();
public:
    void cargavalores();
    void imprimevalores();
    
};

void Sumavectores::cargavalores()
{
    cout << "Ingrese los valores del vector 1\n";

    for (int i = 0; i < 4; i++)
    {
        cout << "Valor ";
        cout << i;
        cout << ": ";
        cin >> opera1[i];
        cout << "\n";
    }
    
    cout << "Ingrese los valores del vector 2\n";

    for (int i = 0; i < 4; i++)
    {
        cout << "Valor ";
        cout << i;
        cout << ": ";
        cin >> opera2[i];
        cout << "\n";
    }
    sumarvectores();
}

void Sumavectores::sumarvectores()
{
    for (int i = 0; i < 4; i++)
    {
        resultado[i]= opera1[i] + opera2[i];
    }
    
}

void Sumavectores::imprimevalores()
{
    cout << "Resultado de la suma\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Valor " << i << " = "<< resultado[i]<<"\n";
        // cout << i;
        // cout << "= ";
        // cout << resultado[i];
        // cout << "\n";
    }

}
 

int main()
{
    Sumavectores operacion1;
    operacion1.cargavalores();
    operacion1.imprimevalores();
    return 0;
}
    
