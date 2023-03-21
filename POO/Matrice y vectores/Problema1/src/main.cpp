#include <iostream>
using namespace std;

class Paises
{
private:
    char nombres[4][30];
    int temperaturas[4][3];
    int promedios[4];
public:
    void cargaDatos();
    void imprimeDatos();
    void promediosTemp();
    void imprimePromedios();
    void imprimeMayor();
    
};

void Paises::cargaDatos()
{
    for (int p = 0; p < 4; p++)
    {
        cout<<"Ingrese los datos del pais "<<p<<"\n";
        cout<<"Nombre : ";
        cin.get(nombres[p],30);

        for (int t = 0; t < 3; t++)
        {
            cout<<"Temperatura del mes "<<t<<"\n";
            cin>>temperaturas[p][t];
            cin.get();
            cout<<"\n";
        }
    cout<<"\n";     
    }
}

void Paises::imprimeDatos()
{
    cout<<"Impresion de Datos\n";

    for (int p = 0; p < 4; p++)
    {
        cout<<"Pais : "<<nombres[p]<<"\n";
        cout<<"Temperaturas: \n";
        for (int t = 0; t < 3; t++)
        {
            cout<<temperaturas[p][t]<<"    ";
        }
        cout<<"\n";
        
    }
    cout<<"\n";
}
void Paises::promediosTemp()
{
    for (int i = 0; i < 4; i++)
    {
        promedios[i] = (temperaturas[i][1]+temperaturas[i][2]+temperaturas[i][3])/3;
    }
    
}
void Paises::imprimePromedios()
{
    cout<<"Impresion de Promedios\n";

    for (int i = 0; i < 4; i++)
    {
        cout <<nombres[i]<<"    "<<promedios[i]<<"\n";
    }
    
}

void Paises::imprimeMayor()
{
    int mayor=promedios[0];
    int posicion = 0;

    for (int i = 1; i < 4; i++)
    {
        if (promedios[i]>mayor)
        {
            mayor = promedios[i];
            posicion = i;

        }
    }

    cout<< "El pais con mayor promedio es "<<nombres[posicion]<<"y el promedio es "<<promedios[posicion]<<"\n"; 
    


}
int main()
{
    Paises pai3;
    pai3.cargaDatos();
    pai3.imprimeDatos();
    pai3.promediosTemp();
    pai3.imprimePromedios();
    pai3.imprimeMayor();
    return 0;
}
