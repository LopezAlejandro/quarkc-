#include <iostream>
using namespace std;

class Vectores
{
private:
    int vec[9];
public:
    void carga();
    void ordenado();
};

void Vectores::carga()
{
    cout << "ingrese los 10 valores \n";
    for (int i = 0; i < 10; i++)
    {
        cout<< "Valor Nro "<<i<<": ";
        cin>>vec[i];
    }
}

void Vectores::ordenado()

{
    int flag=0;

    for (int i = 0; i < 9; i++)
    {
        if (vec[i]>vec[i+1])
        {
            flag =1;
        }
    }
    if (flag==0)
    {
        cout <<"El vector esta ordenado";
    }
    else
    {
        cout<<"El vector no esta ordenado";
    }
}

int main(int argc, char *argv[])
{
    Vectores vector1;
    vector1.carga();
    vector1.ordenado();
    return 0;

}
