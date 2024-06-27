//
// Created by carlo on 27/06/2024.
//

#ifndef ORDINARIA_ESTUDIANTE_H
#define ORDINARIA_ESTUDIANTE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std; //Header de la clase: aqui se especifican la
class Estudiante {
public:
    string nombre;
    int edad;
    string grado;
    static vector<Estudiante> estudiantes;
public:
    Estudiante(string nombre, int edad, string grado);
    void agregarEstudiante();
    void mostrarEstudiantes();
    void mostrar_info();
    void eliminarEstudiante(string nombre);
};


#endif //ORDINARIA_ESTUDIANTE_H
