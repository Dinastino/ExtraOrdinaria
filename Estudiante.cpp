//
// Created by carlo on 27/06/2024.
//
#include <iostream>
#include <string>
#include <vector>

#include "Estudiante.h"

Estudiante::Estudiante(std::string nombre, int edad, std::string grado) {
    this->nombre = nombre;
    this->edad = edad;
    this->grado = grado;
}

void Estudiante::agregarEstudiante() {
    estudiantes.push_back(*this);
}

void Estudiante::mostrarEstudiantes(){
    vector<Estudiante>::iterator it;
    for(it = estudiantes.begin(); it != estudiantes.end(); it++){
        cout << "Nombre: " << it->nombre << endl;
        cout << "Edad: " << it->edad << endl;
        cout << "Grado: " << it->grado << endl;
        cout << "-------------------" << endl;
    }
}

void Estudiante::mostrar_info() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Grado: " << grado << endl;
}

