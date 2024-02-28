//Nombre: Anderson Cristofer Rodríguez Pivaral
//Carnet: 9959-23-495

//Librerias utilizadas sobre programa de matrices con codigo heredado de C
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>
//Función para dejar de colocar std en las funciones que lo ameritan
using namespace std;
//Declaración de constantes
#define NUMERO_ALUMNOS 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100
//Realiza el prototipo de las funciones
void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]);
void imprimirMatrizLinea();
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad);
int main()
{
    //Programa que compara las facultados de una universidad
    srand(getpid());
    llamaCiclo();
    return 0;
}
void llamaCiclo()
{
    //Se declaran las matrices, nombre de matriz y tamaño
    float matrizFacultad_1[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matrizFacultad_2[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matrizFacultad_3[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    char opcion;
    bool repetir = true;
    //declaran variables tipo float
    float promedioFacultad_1;
    float promedioFacultad_2;
    float promedioFacultad_3;

    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Carlos","Luis","Maria","Pedro","Juan"};
    do
    {
        system("cls"); //limpiar toda la pantalla
        //inicialización de variables
        promedioFacultad_1=0;
        promedioFacultad_2=0;
        promedioFacultad_3=0;
        cout << "*** Comparativo de Facultades ***" << endl << endl;
        llenarMatriz(matrizFacultad_1);//llama a la funcion llenarMatriz
        promedioFacultad_1 = imprimirMatriz(matrizFacultad_1, alumnos, "Facultad de Ingenieria");
        llenarMatriz(matrizFacultad_2);
        promedioFacultad_2 = imprimirMatriz(matrizFacultad_2, alumnos, "Facultad de Arquitectura");
        llenarMatriz(matrizFacultad_3);
        promedioFacultad_3 = imprimirMatriz(matrizFacultad_3, alumnos, "Facultad de Administracion");
        if (promedioFacultad_1 > promedioFacultad_2 && promedioFacultad_1 > promedioFacultad_3)
        {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Ingenieria" << endl << " Promedio: " << promedioFacultad_1 << endl;
        } else
        if (promedioFacultad_2 > promedioFacultad_1 && promedioFacultad_2 > promedioFacultad_3)
        {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Arquitectura" << endl<< " Promedio: " << promedioFacultad_2 << endl;
        } else
        if (promedioFacultad_3 > promedioFacultad_2 && promedioFacultad_3 > promedioFacultad_1)
        {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Administracion" << endl << " Promedio: " << promedioFacultad_3 << endl;
        } else
        {
            cout << " Algunas facultades tienen el mismo promedio " << endl << endl;
        }
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir=false;
        }
    } while (repetir);
}
//funcion para crear numeros aleatorios
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
//funcion para llenar la matriz con los numeros aleatorios
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        float suma = 0;
        int calificacion = 0;
        for (x = 0; x < NUMERO_NOTAS; x++)
        {
            if (x == 0 || x == 3)  //primer parcial y actividades
            {
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 20);
            } else if (x == 1)  //segundo parcial
            {
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 25);
            } else if (x == 2)  //examen final
            {
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 35);
            }
            suma += (float)calificacion;
            matriz[y][x] = calificacion;
            calificacion=0;
        }
        // Se Agrega el promedio

        matriz[y][NUMERO_NOTAS] = suma;
    }
}
//funcion para imprimir lineas y darle forma de tabla a las matrices
void imprimirMatrizLinea()
{
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_NOTAS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad)
{
    //Funciòn que imprime la matriz en pantalla y realizando los calculos necesarios del promedio
    int y, x;

    float promedioMayor = matriz[0][NUMERO_NOTAS];
    float promedioMenor = matriz[0][NUMERO_NOTAS];
    float totalGeneral = 0;
    float promedioGeneral = 0;
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    cout << nombreFacultad << endl;
    cout << "(Nota1)=>Primer Parcial  (Nota2)=>Segundo Parcial (Nota3)=>Examen Final (Nota4)=>Actividades" << endl;
    imprimirMatrizLinea();
    cout << setw(9) << "Alumno";
    for (x = 0; x < NUMERO_NOTAS; x++)
    {
        cout << setw(9) << "Nota" << x + 1;
    }
    cout << setw(8) << "TOTAL" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        cout << "!" << setw(8) << alumnos[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_NOTAS; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz[y][NUMERO_NOTAS];
        totalGeneral += matriz[y][NUMERO_NOTAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    promedioGeneral = totalGeneral / NUMERO_ALUMNOS;
    cout << "Nota mas alta: " << setw(10) << alumnoPromedioMayor <<  setw(10) << promedioMayor <<" %" <<endl;
    cout << "Nota mas baja: " << setw(10) << alumnoPromedioMenor <<  setw(10) << promedioMenor << " %"<<endl;
    cout << "Promedio de la facultad: " << setw(10) <<  promedioGeneral <<" %" <<endl << endl;
    return promedioGeneral;
}
