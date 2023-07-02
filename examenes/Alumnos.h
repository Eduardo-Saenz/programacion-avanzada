#pragma once
#include <iostream>
#include "Persona.h"

class Alumnos : public Persona
{
private:
    float calificacion;
    std::string grado;
    std::string id_alumno;
    std::string id_materia;
    std::string carrera;
    
public:
    Alumnos(float calificacion, std::string grado, std::string id_alumno, std::string id_materia, std::string carrera);
    Alumnos(Alumnos& persona);
    Alumnos(/* args */);
    ~Alumnos();

    bool setCalificacion(float calificacion);
    float getCalificacion();

    bool setGrado(std::string grado);
    std::string getGrado();

    bool setId_alumno(std::string id_alumno);
    std::string getId_alumno();

    bool setId_materia(std::string id_materia);
    std::string getId_materia();

    bool setCarrera(std::string carrera);
    std::string getCarrera();
};

Alumnos::Alumnos(/* args */)
{
    this->calificacion = 0;
    this->grado = "indefinido";
    this->id_alumno = "indefinido";
    this->id_materia = "indefinido";
    this->carrera = "indefinido";
}

Alumnos::Alumnos(float calificacion, std::string grado, std::string id_alumno, std::string id_materia, std::string carrera)
{
	this->calificacion = calificacion;
	this->grado = grado;
	this->id_alumno = id_alumno;
	this->id_materia = id_materia;
	this->carrera = carrera;
}

Alumnos::Alumnos(Alumnos& alumnosCopia)
{
	this->calificacion = alumnosCopia.calificacion;
	this->grado = alumnosCopia.grado;
	this->id_alumno = alumnosCopia.id_alumno;
	this->id_materia = alumnosCopia.id_materia;
	this->carrera = alumnosCopia.carrera;
}

float Alumnos::getCalificacion()
{
	return this->calificacion;
}

bool Alumnos::setCalificacion(float calificacion)
{
	this->calificacion = calificacion;

	return true;
}

std::string Alumnos::getGrado()
{
	return this->grado;
}

bool Alumnos::setGrado(std::string grado)
{
	this->grado = grado;

	return true;
}

std::string Alumnos::getId_alumno()
{
	return this->id_alumno;
}

bool Alumnos::setId_alumno(std::string id_alumno)
{
	this->id_alumno = id_alumno;

	return true;
}

std::string Alumnos::getId_materia()
{
	return this->id_materia;
}

bool Alumnos::setId_materia(std::string id_materia)
{
	this->id_materia = id_materia;

	return true;
}

std::string Alumnos::getCarrera()
{
	return this->carrera;
}

bool Alumnos::setCarrera(std::string carrera)
{
	this->carrera = carrera;

	return true;
}

Alumnos::~Alumnos()
{
}
