#include <iostream> //Librerias
#include <string>
#include <vector>

#include "My_excepcion/Excepciones_per.h"
#include "Estudiante.h" //programas exteriores como clases, no son librerias

using namespace std;

void cambio_punteros(int *a, int *b){  //dos punteros a variables para el cambio
    int temp = *a;  //guardas sel valor de uno en el temp y luego lo intercambias por el otro
    *a = *b;
    *b = temp;  //El valor guardado en el temp se lo asignas al otro
}

int dividir(int a, int b){
    if(b == 0){ //lanzaz una excepcion si el divisor es 0
        throw Excepciones_per();
    }
    return a/b;
}

int main() {
    int a = 5;
    int b = 10;
    cambio_punteros(&a, &b);//llamada a la funcion asegurandose de que pasas las direcciones a las variables y no las variables en si
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;//muestra los valores intercambiados
    cout << "-------------------" << endl;
    cout << "Un numero porfavor" << endl;
    cin >> a;
    cout << "Su divisor porfavor" << endl;
    cin >> b;//pide dos numeros para dividir
    try{
        cout << dividir(a, b) << endl;//llamada a dividir dentro del try
    }catch(Excepciones_per &e){
        cout << e.what() << endl;//si se lanza la excepcion se muestra el mensaje
    }
    cout << "-------------------" << endl;
    Estudiante est1("Carlos", 20, "3ro"); //inicializacion de objeto Estudiante
    est1.agregarEstudiante(); //llamada a la funcion agregarEstudiante
    Estudiante est2("Juan", 21, "4to");
    est2.agregarEstudiante();
    est1.mostrarEstudiantes();//llamada a la funcion mostrarEstudiantes
    est1.mostrar_info();
    cout << "-------------------" << endl;

    return 0;
}
