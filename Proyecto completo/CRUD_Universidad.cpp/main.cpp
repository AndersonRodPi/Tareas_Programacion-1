#include <iostream>
#include<fstream>

#include "Usuarios.h"
#include "Maestros.h"
#include "bitacora.h"
#include "Alumnos.h"
#include "Sedes.h"
#include "Secciones.h"
#include "Horarios.h"
using namespace std;
void creditosModulo();
void catalogos();
void reportes();
void menuGeneral();
Usuarios usuarioRegistrado;
int main()
{
    bool accesoUsuarios;
    //creditosModulo();

    accesoUsuarios=usuarioRegistrado.loginUsuarios();
    if (accesoUsuarios){
        menuGeneral();
    }
    system("cls");
    cout<<"** Hasta la proxima **";
    return 0;
}
void menuGeneral(){
    system("cls");
    int choice;
	//char x;
	do
    {
	system("cls");
	cout<<"\t\t\t\t\tUsuario: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|   SISTEMA DE LA UNIVERSIDAD |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Procesos"<<endl;
	cout<<"\t\t\t 3. Reportes"<<endl;
	cout<<"\t\t\t 4. Ayuda"<<endl;
	cout<<"\t\t\t 5. Salir del Sistema"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{*/
    		catalogos();
    		/*cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		//display();
		break;
	case 3:
		//modify();
		reportes();
		break;
	case 4:
		//search();
		break;
	case 5:
    	break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);
}
void catalogos(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA DE LA UNIVERSIDAD - Catalogos  |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Aplicaciones"<<endl;
	cout<<"\t\t\t 2. Vendedores"<<endl;
	cout<<"\t\t\t 3. Sedes"<<endl;
	cout<<"\t\t\t 4. Seccion"<<endl;
	cout<<"\t\t\t 5. Usuarios"<<endl;
	cout<<"\t\t\t 6. Usuarios"<<endl;
	cout<<"\t\t\t 7. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6/7]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	{
    	    aplicaciones aplicacion;
            aplicacion.menu();
		}
		break;
	case 2:
		//display();
		{
            vendedores vendedor;
            vendedor.menu();
		}
		break;
	case 3:
	    {
	        Sedes Sede;
            Sede.menuSedes();
	    }
		//modify();
		break;
	case 4:
        {
            Secciones seccion;
            seccion.menu();
		}
		//search();
		break;
    case 5:
	    {
	        usuarios usuario;
            usuario.menuUsuarios();
	    }
		//modify();
		break;
    case 6:
	    {
	        Horarios horario;
            horario.menuHorarios();
	    }
		break;
	case 7:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 7);
}
void reportes(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION DE VENTAS - Reportes   |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Clientes"<<endl;
	cout<<"\t\t\t 2. Vendedores"<<endl;
	cout<<"\t\t\t 3. Cobradores"<<endl;
	cout<<"\t\t\t 4. Conceptos"<<endl;
	cout<<"\t\t\t 5. Bitacora"<<endl;
	cout<<"\t\t\t 6. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{
    		catalogos();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		//display();
		break;
	case 3:
		//modify();
		break;
	case 4:
		//search();
		break;
	case 5:
		//display();
		{
            bitacora auditoria;
            auditoria.menu();
		}
		break;
	case 6:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 6);
}
void creditosModulo(){
string line;
    //char userInput = ' ';
    ifstream myFile("modulo.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        cout<<"Presione cualquier tecla para continuar";
        cin.get();
    }
    else
    {
        cout << "Error FATAL: el archivo de modulo no pudo ser cargado" << endl;
        cin.get();
    }
}
