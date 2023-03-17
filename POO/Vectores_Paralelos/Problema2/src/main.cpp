#include <iostream>
using namespace std;

class Boletines
{
private:
    char alumnos [4][40];
    int notas [4];
public:
    void carga();
    void imprime();
};

void Boletines::carga()
{
    cout << "Ingrese los datos de los alumnos\n";

    for (int i = 0; i < 4; i++)
    {
        cout << "Nombre del alumno "<<i<<" : ";
        cin.getline(alumnos[i],40);
        cout << "\nNota : ";
        cin >> notas[i];
        cin.get();
    }
    
}

void Boletines::imprime()
{
    int buenos=0;
    cout << "Listado de notas\n";
    cout << "Nombre del alumno        Nota    Condicion\n";

    for (int i = 0; i < 4; i++)
    {
        cout<<alumnos[i]<<"    "<<notas[i]<<"      ";
        if (notas[i] >=8)
        {
            buenos =buenos +1;
            cout << "Muy Bueno\n";
        }
        else
        {
            if (notas[i]>=4)
            {
                cout << "Bueno\n";
            }
            else
            {
                cout << "Insuficiente\n";
            }
        }
    }
    cout << "Alumnos muy buenos = "<<buenos<<"\n";
    
}


int main()
{
    Boletines bol1;
    bol1.carga();
    bol1.imprime();
    
    return 0;
}
