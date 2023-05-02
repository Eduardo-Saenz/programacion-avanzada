//Ejemplo paso por puntero
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#pragma once

namespace pasoPunteros {
	// Esta función recibe los parámetros por punteros
	void swap(int* primerValor, int* segundoValor);
	void swap(int* primerValor, int* segundoValor) {
		int temp = *primerValor;

		*primerValor = *segundoValor;
		*segundoValor = temp;
	}

	void principal();
	void principal() {
		// Guardamos dos variables normales
		int* unValor = new int();
		int* otroValor = new int();

		std::cout << "Dame un valor: ";
		std::cin >> *unValor;

		std::cout << "Dame otro valor: ";
		std::cin >> *otroValor;

		swap(unValor, otroValor);

		std::cout << "Primer valor: " << *unValor << std::endl;
		std::cout << "Segundo valor: " << *otroValor << std::endl;

		delete unValor;
		delete otroValor;
		std::cout << "Regresando al menu principal..." << std::endl;
	}
}