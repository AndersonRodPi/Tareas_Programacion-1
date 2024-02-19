#include <iostream>

using namespace std;

int main()
{
    float ventas = 0;
    float total = 0;
    float salario = 200;
    int i = 1;
    cout <<"Ingrese las ventas brutas en dolares (-1 para salir): "; cin >> ventas;

    while (ventas != -1)
    {
        total = salario+(ventas*0.09);
        cout << "El salario del vendedor " << i++ << " es: " << "$" << total << endl;
        cout <<"Ingrese las ventas brutas en dolares (-1 para salir): "; cin >> ventas;
    }
    return 0;
}


