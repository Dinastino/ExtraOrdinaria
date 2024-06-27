cmake_minimum_required(VERSION 3.26)
project(Ordinaria)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ordinaria main.cpp
        My_excepcion/Excepciones_per.cpp
        My_excepcion/Excepciones_per.h
        Estudiante.cpp
        Estudiante.h)
