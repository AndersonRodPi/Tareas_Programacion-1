#include <iostream>

using namespace std;

int main()
{
    float kilometros;
    float litros = 0;
    float kpl = 0;
    cout <<"Ingrese los kilometros conducidos (-1 para salir): "; cin >> kilometros;
    if(kilometros != -1)
    {
        cout <<"Ingrese los litros usados: "; cin >> litros;
    }
    while (kilometros != -1)
    {
        kpl = kilometros/litros;
        cout << "KPL obtenidos en este reabastecimiento: " << kpl << endl;
        cout <<"Ingrese los kilometros conducidos (-1 para salir): "; cin >> kilometros;
        if(kilometros != -1)
        {
                    cout <<"Ingrese los litros usados: "; cin >> litros;
        }
    }
    return 0;
}
