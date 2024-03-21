// Fig. 3.11: LibroCalificaciones.h
// Definición de la clase LibroCalificaciones. Este archivo presenta la interfaz
// public de LibroCalificaciones sin revelar las implementaciones de sus funciones
// miembro, que están definidas en LibroCalificaciones.cpp.
#include <string> //  la clase LibroCalificaciones utiliza la clase string estándar de C++

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    explicit LibroCalificaciones( std::string ); //  constructor que inicializa a nombreCurso
    void establecerNombreCurso( std::string ); // establece el nombre del curso
    std::obtenerNombreCurso() const; // obtiene el nombre del curso
    void mostrarMensaje() const; // muestra un mensaje de bienvenida
private:
    std::string nombreCurso; // nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones
