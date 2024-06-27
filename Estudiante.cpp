//
// Created by carlo on 27/06/2024.
//
#include <iostream>
#include <string>
#include <vector>

#include "Estudiante.h"
std::vector<Estudiante> Estudiante::estudiantes = {};//inicializacion del vector, sino peta

Estudiante::Estudiante(std::string nombre, int edad, std::string grado) { //constructor de la clase
    this->nombre = nombre;
    this->edad = edad;
    this->grado = grado;
}

void Estudiante::agregarEstudiante() {
    estudiantes.push_back(*this);
}

void Estudiante::mostrarEstudiantes(){ //funcion para mostrar los estudiantes
    vector<Estudiante>::iterator it; //iterador para recorrer el vector
    for(it = estudiantes.begin(); it != estudiantes.end(); it++){
        cout << "Nombre: " << it->nombre << endl;
        cout << "Edad: " << it->edad << endl;
        cout << "Grado: " << it->grado << endl;
        cout << "-------------------" << endl;
    }
}

void Estudiante::mostrar_info() { //funcion para mostrar la informacion de un estudiante
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Grado: " << grado << endl;
}

void Estudiante::eliminarEstudiante(std::string nombre) { //funcion para eliminar un estudiante del vector
    vector<Estudiante>::iterator es;
    for(es = estudiantes.begin(); es != estudiantes.end(); es++){
        if(es->nombre == nombre){
            estudiantes.erase(es);
            break;
        }
    }
}


