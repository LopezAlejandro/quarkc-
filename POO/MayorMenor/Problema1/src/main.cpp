#include <iostream>
using namespace std;

class mayorMenor
{
private:
    int elementos[4];
public:
    void carga();
    void imprime();
};

void mayorMenor::carga()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "\nIngrese el valor "<<i<<" : ";
        cin >> elementos[i];
    }
    
}

void mayorMenor::imprime()
{
    int menor;
    int repe = 0;
    menor = elementos[0];
    for (int i = 1; i < 5; i++)
    {
        if (elementos[i]< menor)
        {
            menor = elementos[i];
        }
        else if (elementos[i] == menor)
        {
            repe=1;
        }
    }
    cout<< "El menor valor es "<<menor<<"\n";

    if (repe != 0)
    {
        cout << "El valor esta repetido";
    }
    
}

int main()
{
    mayorMenor bol1;
    bol1.carga();
    bol1.imprime();

    return 0;
}
