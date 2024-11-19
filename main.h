//
// Created by Usuario on 11/19/2024.
//

#ifndef MAIN_H
#define MAIN_H

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

void mostrarEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}



#endif //MAIN_H
