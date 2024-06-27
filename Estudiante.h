//
// Created by carlo on 27/06/2024.
//

#ifndef ORDINARIA_ESTUDIANTE_H
#define ORDINARIA_ESTUDIANTE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std; //Header de la clase: aqui se especifican las funciones y variables que se van a utilizar en la clase
class Estudiante {
private:  //Parte privada de la clase, No acesible desde fuera de la misma
    string nombre;
    int edad;  //Variables q tendra cada objeto de la clase
    string grado;
    static vector<Estudiante> estudiantes;
public:   // Parte publica de la clase, aka las funciones que se utilizan
    Estudiante(string nombre, int edad, string grado);
    void agregarEstudiante();
    void mostrarEstudiantes();
    void mostrar_info();
    void eliminarEstudiante(string nombre);

};


#endif //ORDINARIA_ESTUDIANTE_H
