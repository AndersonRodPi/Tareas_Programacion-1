// laboratorio individual de vectores y matrices.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define CANDIDATOS 5
#define NUMERO_RONDAS 5
#define NUM_VOTANTES 50
#define MAX_VOTOS 50
#define MIN_VOTOS 0
#define MAXIMA_LONGITUD_CADENA 100

void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[CANDIDATOS][NUMERO_RONDAS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[CANDIDATOS][NUMERO_RONDAS + 1], char candidatos[CANDIDATOS][MAXIMA_LONGITUD_CADENA]);

int main()
{
    srand(getpid());
    llamaCiclo();
    return 0;
}

void llamaCiclo()
{
    float matriz_rondas[CANDIDATOS][NUMERO_RONDAS + 1];
    char opcion;
    bool repetir = true;


    char candidatos[CANDIDATOS][MAXIMA_LONGITUD_CADENA] = {"","","","",""};
    do
    {
        system("cls");
        cout << "*** Tabla de votos ***" << endl;
        for (int i=0; i < CANDIDATOS; i ++ )
        {
            cout << "Ingrese el nombre del candidato " << i + 1 << ": "; cin >> candidatos[i];
        }
        llenarMatriz(matriz_rondas);
        imprimirMatriz(matriz_rondas, candidatos);
        cout << "Desea hacer otra votacion (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir=false;
        }
    } while (repetir);
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[CANDIDATOS][NUMERO_RONDAS + 1])
{
    int y, x, i;
    for (y = 0; y < CANDIDATOS; y++)
    {
        float suma=0;
        int votos=0;
        int t_votos=0;

        for (x = 0; x < NUMERO_RONDAS; x++)
        {
            for (i = 0; i < NUM_VOTANTES; i++)
            {
                votos = busquedaAleatorios(MIN_VOTOS, 1);
                suma += (float)votos;
                votos=0;
            }
        matriz[y][x] = suma;
        t_votos += suma;
        suma=0;
        }

        matriz[y][NUMERO_RONDAS] = t_votos;
    }
}

void imprimirMatrizLinea()
{
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_RONDAS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
void imprimirMatriz(float matriz[CANDIDATOS][NUMERO_RONDAS + 1], char candidatos[CANDIDATOS][MAXIMA_LONGITUD_CADENA])
{
    //Funcion para imprimir la matriz en pantalla y realizar los calculos necesarios del promedio
    int y, x;

    float mayor = matriz[0][NUMERO_RONDAS];
    float menor = matriz[0][NUMERO_RONDAS];
    float totalGeneral = 0;
    float promedioGeneral = 0;
    char candidatoGanador[MAXIMA_LONGITUD_CADENA];
    char candidatoPerdedor[MAXIMA_LONGITUD_CADENA];
    memcpy(candidatoGanador, candidatos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(candidatoPerdedor, candidatos[0], MAXIMA_LONGITUD_CADENA);
    cout << endl << "resultados de las votaciones: " << endl <<endl;
    imprimirMatrizLinea();
    cout << setw(9) << "candidato";
    for (x = 0; x < NUMERO_RONDAS; x++)
    {
        cout << setw(9) << "Ronda " << x + 1;
    }
    cout << setw(8) << "TOTAL" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < CANDIDATOS; y++)
    {
        cout << "!" << setw(8) << candidatos[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_RONDAS; x++)
        {
            int voto = matriz[y][x];
            cout << setw(9) << voto << "!";
        }
        float promedio = matriz[y][NUMERO_RONDAS];
        totalGeneral += matriz[y][NUMERO_RONDAS];
        if (promedio > mayor)
        {
            mayor = promedio;
            memcpy(candidatoGanador, candidatos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < menor)
        {
            menor = promedio;
            memcpy(candidatoPerdedor, candidatos[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    promedioGeneral = totalGeneral / CANDIDATOS;
    cout << "El candidato con mas votos es:   " << candidatoGanador <<" con "<< mayor <<" votos"<< endl;
    cout << "El candidato con menos votos es: " << candidatoPerdedor <<" con "<< menor <<" votos"<< endl;
}



