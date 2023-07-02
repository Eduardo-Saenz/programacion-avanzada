// Ejemplo de una clase alumno con sus métodos y atributos correspondientes
// 0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#include "Alumno_0256930.h"

int main()
{
  Alumno unAlumno; //Crea un alumno sin elementos

  std::cout << unAlumno.nombre << std::endl;

  std::string nombre;
  std::cout << "Introduzca el nombre del alumno: ";
  std::cin >> nombre;
  unAlumno.nombre = nombre;

  int edad;
  std::cout << "Introduzca la edad del alumno: ";
  std::cin >> edad;
  unAlumno.edad = edad;

  std::string curp;
  std::cout << "Introduzca el curp del alumno: ";
  std::cin >> curp;
  unAlumno.curp = curp;

  std::string fechaDeNacimiento;
  std::cout << "Introduzca la fecha de nacimiento del alumno: ";
  std::cin >> fechaDeNacimiento;
  unAlumno.fechaDeNacimiento = fechaDeNacimiento;

  std::string carrera;
  std::cout << "Introduzca la carrera del alumno: ";
  std::cin >> carrera;
  unAlumno.carrera = carrera;

  std::string universidad;
  std::cout << "Introduzca la universidad del alumno: ";
  std::cin >> universidad;
  unAlumno.universidad = universidad;

  std::cout << "Los datos fueron guardados correctamente: " << std::endl;
  unAlumno.imprimirDatos(); //Imprime los datos introducidos del alumno
}


