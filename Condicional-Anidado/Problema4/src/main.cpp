#include <iostream>
using namespace std;

int main()
{
    int correctas,totales,porcentaje;
    
    cout << "Ingrese la cantidad de preguntas : ";
    cin >> totales;
    cout << "Ingrese la cantidad de preguntas correctas : ";
    cin >> correctas;

    porcentaje = (correctas * 100)/totales;

    if (porcentaje >=90)
    {
        cout << "Nivel maximo\n";
    }
    else
    {
        if (porcentaje>=75)
        {
            cout << "Nivel medio\n";
        }
        else
        {
            if (porcentaje >= 50)
            {
                cout << "Nivel Regular\n";
            }
            else
            {
                cout << "Fuera de nivel\n";
            }
        }
    }
}
