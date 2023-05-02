//Ejercicio de estructura "Escuela", "Alumno", "Materia" y "Profesor"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#define MAX 100
#pragma once

namespace escuela {
	struct Materia {
		char nombre[MAX] = { '\0' };
		char horario[MAX] = { '\0' };
	};

	struct Alumno {
		char nombre[MAX] = { '\0' };
		int edad{ 0 };
		int semestre{ 0 };
		float promedio{ 0 };
	};

	struct Profesor {
		char nombre[MAX] = { '\0' };
		int edad{ 0 };
		struct Materia* materia;
	};

	struct Escuela {
		char nombre[MAX] = { '\0' };
		char direccion[MAX] = { '\0' };
		int cantidadAlumnos{ 0 };
		struct Alumno* alumnos;
		int cantidadProfesores{ 0 };
		struct Profesor* profesores;
	};
	void principal();
	void principal() {
		struct Escuela* escuela = new Escuela();

		std::cout << "Dame el nombre de la escuela: ";
		std::cin >> escuela->nombre;

		std::cout << "Dame la direccion de la escuela: ";
		std::cin >> escuela->direccion;

		std::cout << "Dame la cantidad de alumnos de la escuela: ";
		std::cin >> escuela->cantidadAlumnos;
		escuela->alumnos = new Alumno[escuela->cantidadAlumnos];

		for (int i = 0; i < escuela->cantidadAlumnos; i++)
		{
			std::cout << "Dame el nombre del alumno #" << (i + 1);
			std::cin >> (escuela->alumnos + i)->nombre;

			std::cout << "Dame la edad del alumno #" << (i + 1);
			std::cin >> (escuela->alumnos + i)->edad;

			std::cout << "Dame el semestre en numero del alumno #" << (i + 1);
			std::cin >> (escuela->alumnos + i)->semestre;

			std::cout << "Dame el promedio en numero con decimal del alumno #" << (i + 1);
			std::cin >> (escuela->alumnos + i)->promedio;
		}

		std::cout << "Dame la cantidad de profesores de la escuela: ";
		std::cin >> escuela->cantidadProfesores;
		escuela->profesores = new Profesor[escuela->cantidadProfesores];

		for (int i = 0; i < escuela->cantidadProfesores; i++)
		{
			std::cout << "Dame el nombre del profesor #" << (i + 1);
			std::cin >> (escuela->profesores + i)->nombre;

			std::cout << "Dame la edad del profesor #" << (i + 1);
			std::cin >> (escuela->profesores + i)->edad;
			
			(escuela->profesores + i)->materia = new Materia();

			std::cout << "Dame el nombre de la materia" << (i + 1);
			std::cin >> (escuela->profesores + i)->materia->nombre;

			std::cout << "Dame el horario de la materia" << (i + 1);
			std::cin >> (escuela->profesores + i)->materia->horario;
		}

		delete[] escuela->alumnos;
		delete escuela->profesores->materia;
		delete[] escuela->profesores;
		delete escuela;
		std::cout << "Regresando al menu principal..." << std::endl;
	}
}