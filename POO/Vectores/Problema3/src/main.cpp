#include <iostream>

using namespace std;

class cargaCursos
{
private:
    int cursoA[4];
    int cursoB[4];
public:
    void cargar();
    void promedio();
};

void cargaCursos::cargar()
{
    cout<<"Ingrese las notas del curso A \n";
    for (int i = 0; i < 5; i++)
    {
        cout<< "Nota "<<i<<" : ";
        cin>> cursoA[i];
    }
    cout<<"Ingrese las notas del curso B \n";
    for (int i = 0; i < 5; i++)
    {
        cout<< "Nota "<<i<<" : ";
        cin>> cursoB[i];
    }
}

void cargaCursos::promedio()
{   
    int sumaA,sumaB;
    sumaA=0;
    sumaB=0;

    for (int i = 0; i < 5; i++)
    {
        sumaA = sumaA+cursoA[i];
    }

    for (int i = 0; i < 5; i++)
    {
        sumaB = sumaB+cursoB[i];
    }

    if ((sumaA/5) > (sumaB/5))
    {
        cout << "El curso A tiene mayor promedio que B";
    }
    else
    {
        cout << "El curso B tiene mayor promedio que A";
    }

}


int main()
{
    cargaCursos prueba;
    prueba.cargar();
    prueba.promedio();
    return 0;

}
