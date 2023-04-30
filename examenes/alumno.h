#pragma once 
#ifndef BIBLIOTECA_EXAMEN_MOCK
#define BIBLIOTECA_EXAMEN_MOCK
#include <iostream>

struct Alumno
{
    std::string nombre;
    int edad;
    std::string curp;
    std::string fechaNacimiento;
    std::string carrera;
    std::string universidad;
};
void leerAlumno (Alumno * alumno);
void leerAlumno (Alumno * alumno)
{
    std::cout << "Nombre del alumno?\n";
    std::cin >> alumno->nombre;
    std::cout << "Edad del alumno?\n";
    std::cin >> alumno->edad;
    std::cout << "CURP del alumno?\n";
    std::cin >> alumno->curp;
    std::cout << "Fecha de nacimiento del alumno?\n";
    std::cin >> alumno->fechaNacimiento;
    std::cout << "Carrera del alumno?\n";
    std::cin >> alumno->carrera;
    std::cout << "Universidad del alumno?\n";
    std::cin >> alumno->universidad;
}
void imprimirAlumno (Alumno * alumno);
void imprimirAlumno (Alumno * alumno)
{
    std::cout << "El nombre del alumno es: " << alumno->nombre << std::endl;
    std::cout << "La edad del alumno es: " << alumno->edad << std::endl;
    std::cout << "El CURP del alumno es: " << alumno->curp << std::endl;
    std::cout << "La fecha de nacimiento del alumno es: " << alumno->fechaNacimiento << std::endl;
    std::cout << "La carrera del alumno es: " << alumno->carrera << std::endl;
    std::cout << "La universidad del alumno es: " << alumno->universidad << std::endl;
}
#endif