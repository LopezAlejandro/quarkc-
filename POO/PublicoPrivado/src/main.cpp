#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Vector
{
    int enteros[5];
public:
    Vector();
    void imprimeMayor();
    void imprimeMenor();
    void imprime();
  
};

Vector::Vector()
{
    srand (time(NULL));
    for (int i = 0; i < 5; i++)
    {
       enteros[i]= (rand() % 10 + 1);
    }
}

void Vector::imprimeMayor()
{
    int max = enteros[0];

    for (int i = 1; i < 5; i++)
    {
        if (enteros[i] > max)
        {
            max = enteros[i];
        }
    }
    
    cout << "El numero mayor es "<<max<<"\n";
}

void Vector::imprimeMenor()
{
    int min = enteros[0];

    for (int i = 1; i < 5; i++)
    {
        if (enteros[i] < min)
        {
            min = enteros[i];
        }
    }
    
    cout << "El numero menor es "<<min<<"\n";
}

void Vector::imprime()
{
    for (int i = 0; i < 5; i++)
    {
        cout <<"Posicion "<<i<<" "<<enteros[i]<<"\n";
    }
}

int main()
{
   Vector lista; 
    lista.imprime();
    lista.imprimeMayor();
    lista.imprimeMenor();
}
