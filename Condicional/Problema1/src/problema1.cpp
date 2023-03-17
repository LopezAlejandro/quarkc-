#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float num1,num2;
    cout << "Ingrese primer numero : ";
    cin >> num1;
    cout << "\nIngrese segundo numero : ";
    cin >> num2;
    if (num1 > num2)
    {
        cout << "\nSuma : ";
        cout << num1+num2 ;
        cout << "\nDiferencia : ";
        cout << num1-num2;
        cout << "\n";
    }
    else
    {
        cout << "\nProducto : ";
        cout << num1*num2 ;
        cout << "\nCociente : ";
        cout << float(num1/num2);
        cout << "\n";
    }
    
    
}
