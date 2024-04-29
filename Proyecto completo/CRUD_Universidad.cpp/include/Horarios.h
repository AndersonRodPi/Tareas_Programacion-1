#ifndef HORARIOS_H
#define HORARIOS_H

#include <iostream>
//#include <string>
using namespace std;

class Horarios
{
    private:
		string id, nombre, estatus;
	public:
		void menuHorarios();
		void seleccionar();
		void insertar();
		void modificar();
		void buscar();
		void borrar();
};

#endif // HORARIOS_H
