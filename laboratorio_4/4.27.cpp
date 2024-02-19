#include <iostream>
 #include <stdio.h>
#define Tamano 35
using namespace std;
void Recibe( int a[]);
void Imprime( int b[]);
int main()
{
    int arreglo[Tamano];
    int evaluar;
    cout<<"\nEste programa recibe un numero binario y lo convierte a decimal"<<endl;
    Recibe(arreglo);
    Imprime(arreglo);
    return 0;
}
void Recibe( int a[])
{
    int i = 0;
    for( i = 0; i < Tamano; i++ )
        a[i] = ' ';
        cout<<"\nIntroduzca un numero binario: ";
    i = 0;
    while ( (a[i++] = getchar()) != '\n' && Tamano > i );
    cout<<endl;
}
void Imprime( int b[] )
{
    int i;
    int potencia = 1;
    int decimal = 0;
    int inicio;
    for ( i = Tamano - 1; i >= 0; i-- )
    {
        if ( ' ' != b[i] )
        {
            inicio = i;
            break;
        }
    }
    int valido = 1;
    for ( i = inicio; i >= 0; i-- )
    {
        switch( b[i] )
        {
            case '0':
            decimal += 0*potencia;
            potencia *= 2;
            break;
            case '1':
            decimal += 1*potencia;
            potencia *= 2;
            break;
            default:
            if ( '\n' != b[i])
            {
                cout<<"\nERROR. LA CADENA NO ES VALIDA!\n";
                valido = 0;
                cout<<"\nEste caracter no es valido: ";
                putchar(b[i]);
                cout<<endl;
            }
        break;
        }
    }
    if ( 1 == valido )
        cout<<"\nEl valor decimal es: "<<decimal<<endl;
    else
        cout<<"\nEl numero introducido no es valido."<<endl;
}
