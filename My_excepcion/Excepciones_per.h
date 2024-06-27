//
// Created by carlo on 27/06/2024.
//

#ifndef ORDINARIA_EXCEPCIONES_PER_H
#define ORDINARIA_EXCEPCIONES_PER_H
#include <iostream>
#include <exception>

class Excepciones_per: public std::exception{
public:
    const char* what() const throw(){ //Al lanzar la excepcion en el catch se pondria un e.what() para que se muestre el mensaje
        return "Error en la operacion"; //hay que tener en cuneta que este excepcion es lamas basica
    }


};


#endif //ORDINARIA_EXCEPCIONES_PER_H
