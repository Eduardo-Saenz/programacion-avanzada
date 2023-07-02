#pragma once
#include <iostream>

class Persona
{
private:
    std::string nombre;
    int edad;
    std::string fechaDeNacimiento;
    std::string curp;

public:
    Persona(std::string nombre, int edad, std::string fecha_nacimiento, std::string curp);
	Persona(Persona& persona);
    Persona(/* args */);
    ~Persona();

    bool setNombre(std::string nombre);
    std::string getNombre();

    bool setEdad(int edad);
    int getEdad();

    bool setFechaDeNacimiento(std::string fechaDeNacimiento);
    std::string getFechaDeNacimiento();

    bool setCurp(std::string curp);
    std::string getCurp();

};

Persona::Persona(/* args */)
{
    this->nombre = "Indefinido";
    this->edad = 0;
    this->fechaDeNacimiento = "Indefinido";
    this->curp = "Indefinido";
}

Persona::Persona(std::string nombre, int edad, std::string fechaDeNacimiento, std::string curp)
{
	this->nombre = nombre;
	this->edad = edad;
	this->fechaDeNacimiento = fechaDeNacimiento;
	this->curp = curp;
}

Persona::Persona(Persona& personaCopia)
{
	this->nombre = personaCopia.nombre;
	this->edad = personaCopia.edad;
	this->fechaDeNacimiento = personaCopia.fechaDeNacimiento;
	this->curp = personaCopia.curp;
}

bool Persona::setNombre(std::string nombre)
{
    this->nombre = nombre;
    return true;
}
std::string Persona::getNombre()
{
    return this->nombre;
}

bool Persona::setEdad(int edad)
{
    this->edad = edad;
    return true;
}
int Persona::getEdad()
{
    return this->edad;
}

bool Persona::setFechaDeNacimiento(std::string fechaDeNacimiento)
{
    this->fechaDeNacimiento = fechaDeNacimiento;
    return true;
}
std::string Persona::getFechaDeNacimiento()
{
    return this->fechaDeNacimiento;
}

bool Persona::setCurp(std::string curp)
{
    this->curp = curp;
    return true;
}
std::string Persona::getCurp()
{
    return this->curp;
}

Persona::~Persona()
{
}
