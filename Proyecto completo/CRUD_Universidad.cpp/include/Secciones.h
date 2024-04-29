#ifndef SECCIONES_H
#define SECCIONES_H
#include<iostream>
using std::string;

class Secciones
{
    private:
		string id, nombre, estatus;
	public:
		void menu();
		void insertar();
		void modificar();
		void buscar();
		void borrar();
};

#endif // SECCIONES_H
