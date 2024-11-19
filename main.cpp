#include <iostream>
#include <string>
#include "main.h"


int main()
{
    Estudiante est;
    est.nombre = "Juan Perez";
    est.edad = 20;
    est.promedio = 8.5;

    mostrarEstudiante(est);
}
