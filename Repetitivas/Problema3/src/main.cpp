#include <iostream>
using namespace std;

int main()
{
    int empleados,medios,altos;
    float suma_total,sueldo;

    medios=0;
    altos=0;
    suma_total=0;
    
    cout << "Cuantos empleados tiene ? : ";
    cin >> empleados;

    while (empleados > 0)
    {
        cout << "\nIngrese el sueldo del empleado ";
        cout << empleados;
        cout << " : ";
        cin >> sueldo;

        if (sueldo >=100 && sueldo <=300)
        {
            medios = medios +1;
        }
        else
        {
            altos = altos +1;
        }
        suma_total = suma_total + sueldo;
        empleados = empleados -1;
    }
    
    cout << medios;
    cout << "empleados ganan menos de $300\n";
    cout << altos;
    cout << "empleados ganan mas de $300\n";
    cout << "Total de gasto en sueldos : ";
    cout << suma_total;
    cout << "\n";


}
