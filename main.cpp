#include <iostream>

#include "My_excepcion/Excepciones_per.h"

using namespace std;
void cambio_punteros(int *a, int *b){//dos punteros a variables para el cambio
    int temp = *a;//guardas sel valor de uno en el temp y luego lo intercambias por el otro
    *a = *b;
    *b = temp;//El valor guardado en el temp se lo asignas al otro
}

int dividir(int a, int b){
    if(b == 0){
        throw Excepciones_per();
    }
    return a/b;
}

int main() {
    int a = 5;
    int b = 10;
    cambio_punteros(&a, &b);//llamada a la funcion asegurandose de que pasas las direcciones a las variables y no las variables en si
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    cout << "-------------------" << endl;
    cout << "Un numero porfavor" << endl;
    cin >> a;
    cout << "Su divisor porfavor" << endl;
    cin >> b;
    try{
        cout << dividir(a, b) << endl;
    }catch(Excepciones_per &e){
        cout << e.what() << endl;
    }

    return 0;
}
