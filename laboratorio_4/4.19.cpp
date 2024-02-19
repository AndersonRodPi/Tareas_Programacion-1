#include <iostream>
using namespace std;
int main()
{
    int contador = 1;
    int numero = 0;
    int mayor;
    int segundo = mayor = INT_MIN;
    while (contador <= 10)
    {
        cout <<"Ingrese numero " << contador << " : "; cin >> numero;
        contador+= 1;
        if (numero > mayor)
        {
            segundo = mayor;
            mayor = numero;
        }
    }
    cout <<endl;
    cout <<"El numero mayor es "<<mayor<<" y el segundo es "<<segundo<<endl;
    return 0;
}
