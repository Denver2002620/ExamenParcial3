#include <stdio.h>
#include "mainc.h"
int main() {
    struct Estudiante est;
    snprintf(est.nombre, sizeof(est.nombre), "Juan Perez");
    est.edad = 20;
    est.promedio = 8.5;

    mostrarEstudiante(est);

    return 0;
}