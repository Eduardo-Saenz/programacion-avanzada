//Ejemplo paso por referencia
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#pragma once

namespace pasoReferencia {
	// Esta función recibe los parámetros por referencia
	void swap(int& primerValor, int& segundoValor);
	void swap(int& primerValor, int& segundoValor) {
		int temp = primerValor;

		primerValor = segundoValor;
		segundoValor = temp;
	}

	void principal();
	void principal() {
		// Guardamos dos variables normales
		int unValor{ 0 };
		int otroValor{ 0 };

		std::cout << "Dame un valor: ";
		std::cin >> unValor;

		std::cout << "Dame otro valor: ";
		std::cin >> otroValor;

		swap(unValor, otroValor);

		std::cout << "Primer valor: " << unValor << std::endl;
		std::cout << "Segundo valor: " << otroValor << std::endl;

		std::cout << "Regresando al menu principal..." << std::endl;
	}
}
