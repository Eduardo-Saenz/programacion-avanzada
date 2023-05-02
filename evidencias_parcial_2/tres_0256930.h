//Introducción a punteros
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#pragma once

namespace punteros {
	void principal();
	void principal() {
		int a{ 0 };

		// Este es un puntero de tipo entero que va a almacenar la dirección de memoria de la variable "a"
		int* puntero{ NULL };
		
		std::cout << "Dame un numero entero para a: ";
		std::cin >> a;

		std::cout << "Valor de a: " << a << std::endl;
		std::cout << "Dirección de a: " << &a << std::endl;
		std::cout << "Valor de a en double: " << (double)a << std::endl;
		std::cout << "Dirección del puntero: " << &puntero << std::endl;
		std::cout << "Valor del puntero: " << puntero << std::endl;
		puntero = &a; // Aquí asignamos la dirección de memoria de "a" al puntero

		std::cout << "Valor del puntero: " << puntero << std::endl;
		std::cout << "Valor de la dirección del puntero: " << *puntero << std::endl;
		*puntero = 20; // Aquí cambiamos el valor de va por medio del puntero

		std::cout << "Valor de a: " << a << std::endl;

		std::cout << "Regresando al menu principal..." << std::endl;
	}
}