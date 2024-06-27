//
// Created by carlo on 27/06/2024.
//

#ifndef ORDINARIA_EXCEPCIONES_PER_H
#define ORDINARIA_EXCEPCIONES_PER_H
#include <iostream>
#include <exception>

class Excepciones_per: public std::exception{
public:
    const char* what() const throw(){
        return "Error en la operacion";
    }


};


#endif //ORDINARIA_EXCEPCIONES_PER_H
