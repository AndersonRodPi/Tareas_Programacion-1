#include <iostream>

using namespace std;

int main()
{
    int contador = 1;
    int numero = 0;
    int mayor;
    while (contador <= 10)
    {
        cout <<"Ingrese el numero de ventas del vendedor " << contador << " : "; cin >> numero;
        contador+= 1;
        if (numero > mayor)
            mayor = numero;
    }
    cout <<endl;
    cout <<"El ganador del concurso es el que logro vender " << mayor << " unidades" <<endl;
    return 0;
}
