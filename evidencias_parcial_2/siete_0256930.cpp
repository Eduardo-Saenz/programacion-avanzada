//Ejercicio de estructura "Escuela", "Alumno", "Materia" y "Profesor"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#include "siete_0256930.h"

int main(int argc, char const *argv[])
{
    //Estructura escuela.
    struct Escuela * escuela = new Escuela;
    std::cout << "Ingrese el nombre de la escuela: ";
    std::cin >> escuela->nombre;
    std::cout << "Ingrese la dirección de la escuela: ";
    std::cin >> escuela->direccion;
    std::cout << "Ingrese el nivel educativo de la escuela: ";
    std::cin >> escuela->nivelEducativo;
    //Estructura alumno.
    escuela->alumnos = new Alumno;
    std::cout << "Ingrese el nombre del alumno: ";
    std::cin >> escuela->alumnos->nombre;
    std::cout << "Ingrese el apellido paterno del alumno: ";
    std::cin >> escuela->alumnos->apellidoPaterno;
    std::cout << "Ingrese el apellido materno del alumno: ";
    std::cin >> escuela->alumnos->apellidoMaterno;
    std::cout << "Ingrese la edad del alumno: ";
    std::cin >> escuela->alumnos->edad;
    std::cout << "Ingrese el grado del alumno: ";
    std::cin >> escuela->alumnos->grado;
    //Estructura materia.
    escuela->alumnos->materias = new Materia;
    std::cout << "Ingrese el nombre de la materia: ";
    std::cin >> escuela->alumnos->materias->nombre;
    std::cout << "Ingrese los creditos de la materia: ";
    std::cin >> escuela->alumnos->materias->creditos;
    std::cout << "Ingrese el numero de horas de la materia: ";
    std::cin >> escuela->alumnos->materias->horario;
    //Estructura profesor.
    escuela->alumnos->materias->profesores = new Profesor;
    std::cout << "Ingrese el nombre del profesor: ";
    std::cin >> escuela->alumnos->materias->profesores->nombre;
    std::cout << "Ingrese el apellido paterno del profesor: ";
    std::cin >> escuela->alumnos->materias->profesores->apellidoPaterno;
    std::cout << "Ingrese el apellido materno del profesor: ";
    std::cin >> escuela->alumnos->materias->profesores->apellidoMaterno;
    return 0;
}
