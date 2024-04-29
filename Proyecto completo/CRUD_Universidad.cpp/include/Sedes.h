#ifndef SEDES_H
#define SEDES_H

#include<iostream>
using std::string;

class Sedes
{
    private:
		string id, nombre, estatus;
	public:
		void menuSedes();
		void insertar();
		void desplegar();
		void buscar();
		void borrar();
};

#endif // SEDES_H
