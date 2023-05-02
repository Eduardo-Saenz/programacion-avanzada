//Introducción a "Uniones"
//0256930 Eduardo Alejandro Sáenz Kammermayr

/*La unión es un tipo de datos especial disponible en C que permite
almancenar diferentes tipos de datos en la misma ubicación de memoria.*/

#include <iostream>
#pragma once

namespace uniones
{

	union Datos {
		int numeroUno{ 0 };
		int numeroDos;
	};

	void principal();
	void principal() {
		std::cout << "Tamano de datos: " << sizeof(Datos) << std::endl;
		
		Datos datos;
		std::cout << "Dame un numero: ";
		std::cin >> datos.numeroUno;

		// Los dos valores deben de ser los mismos al igual que sus direcciones de memoria
		std::cout << "Numero uno: " << datos.numeroUno << " Numero dos: " << datos.numeroDos << std::endl;
		std::cout << "Memoria numero uno: " << &datos.numeroUno << " Memoria numero dos: " << &datos.numeroDos << std::endl;

		std::cout << "Regresando al menu principal..." << std::endl;
	}
}