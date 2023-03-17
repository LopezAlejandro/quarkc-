#include <iostream>
using namespace std;

int main()
{
    int terminos,serie;
    terminos = 25;
    serie = 11;


    while (terminos > 0)
    {
        cout << "Termino ";
        cout << terminos;
        cout << " : ";
        cout << serie;
        terminos= terminos - 1;
        serie = serie + 11;
    }
    
    return 0;
}
