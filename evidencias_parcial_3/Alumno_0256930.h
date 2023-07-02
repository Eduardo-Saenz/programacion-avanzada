//0256930 Eduardo Alejandro Sáenz Kammermayr

#pragma once
#include <iostream>

class Alumno
{
public:
  Alumno();
  Alumno(std::string nombre, int edad, std::string curp, std::string fechaDeNacimiento, std::string carrera, std::string universidad);
  Alumno(Alumno &alumno);
  ~Alumno();

  std::string nombre;
  int edad;
  std::string curp;
  std::string fechaDeNacimiento;
  std::string carrera;
  std::string universidad;

  void imprimirDatos();
};

Alumno::Alumno()
{
  this->nombre = "Indefinido";
  this->edad = 0;
  this->curp = "Indefinido";
  this->fechaDeNacimiento = "Indefinido";
  this->carrera = "Indefinido";
  this->universidad = "Indefinido";
}

Alumno::Alumno(std::string nombre, int edad, std::string curp, std::string fechaDeNacimiento, std::string carrera, std::string universidad)
{
  this->nombre = nombre;
  this->edad = edad;
  this->curp = curp;
  this->fechaDeNacimiento = fechaDeNacimiento;
  this->carrera = carrera;
  this->universidad = universidad;
}

Alumno::Alumno(Alumno &alumnoCopia)
{
  this->nombre = alumnoCopia.nombre;
  this->edad = alumnoCopia.edad;
  this->curp = alumnoCopia.curp;
  this->fechaDeNacimiento = alumnoCopia.fechaDeNacimiento;
  this->carrera = alumnoCopia.carrera;
  this->universidad = alumnoCopia.universidad;
}

void Alumno::imprimirDatos()
{
  std::cout << "Nombre: " << this->nombre << std::endl;
  std::cout << "Edad: " << this->edad << std::endl;
  std::cout << "CURP: " << this->curp << std::endl;
  std::cout << "Fecha de nacimiento: " << this->fechaDeNacimiento << std::endl;
  std::cout << "Carrera: " << this->carrera << std::endl;
  std::cout << "Universidad: " << this->universidad << std::endl;
}

Alumno::~Alumno()
{
}