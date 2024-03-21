#include <iostream>
#include <string>

using namespace std;
class Factura {
private:
    string numeroPieza;
    string descripcionPieza;
    int cantidadArticulos;
    int precioPorArticulo;

public:
    // Constructor que inicializa los cuatro datos miembros
    Factura(const string& numero, const string& descripcion, int cantidad, int precio)
        : numeroPieza(numero), descripcionPieza(descripcion), cantidadArticulos(cantidad), precioPorArticulo(precio) {}

    // Métodos para establecer y obtener los datos miembros
    void establecerNumeroPieza(const string& numero)
    {
        numeroPieza = numero;
    }
    string obtenerNumeroPieza() const
    {
        return numeroPieza;
    }
    void establecerDescripcionPieza(const string& descripcion)
    {
        descripcionPieza = descripcion;
    }
    string obtenerDescripcionPieza() const
    {
        return descripcionPieza;
    }

    void establecerCantidadArticulos(int cantidad)
    {
        cantidadArticulos = cantidad;
    }

    int obtenerCantidadArticulos() const
    {
        return cantidadArticulos;
    }

    void establecerPrecioPorArticulo(int precio)
    {
        precioPorArticulo = precio;
    }

    int obtenerPrecioPorArticulo() const
    {
        return precioPorArticulo;
    }

    // Método para calcular el monto total de la factura
    int calcularMontoTotal() const
    {
        return cantidadArticulos * precioPorArticulo;
    }
};
int main() {
    // Variables para almacenar los datos ingresados por el usuario
    string numero, descripcion;
    int cantidad, precio;

    cout << "Ingrese el numero de pieza: ";
    getline(std::cin, numero);
    cout << "Ingrese la descripcion de la pieza: ";
    getline(std::cin, descripcion);
    cout << "Ingrese la cantidad de articulos: ";
    cin >> cantidad;
    cout << "Ingrese el precio por articulo: ";
    cin >> precio;
    // Objeto de la clase Factura con los datos ingresados por el usuario
    Factura factura(numero, descripcion, cantidad, precio);

    cout << endl << "Detalles de la factura:" << endl;
    cout << "Numero de pieza: " << factura.obtenerNumeroPieza() << endl;
    cout << "Descripcion de la pieza: " << factura.obtenerDescripcionPieza() << endl;
    cout << "Cantidad de articulos: " << factura.obtenerCantidadArticulos() << endl;
    cout << "Precio por articulo: $" << factura.obtenerPrecioPorArticulo() << endl;
    cout << "Monto total: $" << factura.calcularMontoTotal() << endl;
    return 0;
}

