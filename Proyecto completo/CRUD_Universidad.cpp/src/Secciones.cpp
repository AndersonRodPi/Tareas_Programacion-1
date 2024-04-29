#include "Secciones.h"
#include <iostream>
using namespace std;

void Secciones::menu(){
int choice;

	do
    {
	system("cls");

	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t|SISTEMA GESTION SECCIONES - 800|"<<endl;
	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Seccion"<<endl;
	cout<<"\t\t\t 2. Modifica Seccion"<<endl;
	cout<<"\t\t\t 3. Busca Seccion"<<endl;
	cout<<"\t\t\t 4. Exit"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	{
    		insertar();
    	}
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 4);
}
void Secciones::insertar()
{
	system("cls");
}
