// Ejemplo de paso por referencia con estructuras
// 0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#pragma once
namespace pasoReferenciaEstructuras {
	struct Estructura {
		int primerNumero{ 0 };
		int segundoNumero{ 0 };
	};

	int swap(Estructura& primeraEstructura, Estructura& segundaEstructura);
	int swap(Estructura& primeraEstructura, Estructura& segundaEstructura) {
		struct Estructura temp = segundaEstructura;

		segundaEstructura = primeraEstructura;
		primeraEstructura = temp;

		return 1;
	}

	void principal();
	void principal() {
		struct Estructura unaEstructura;
		struct Estructura otraEstructura;

		std::cout << "Dame el primer numero de la primera estructura: ";
		std::cin >> unaEstructura.primerNumero;
		std::cout << "Dame el segundo numero de la primera estructura: ";
		std::cin >> unaEstructura.segundoNumero;

		std::cout << "Dame el primer numero de la segunda estructura: ";
		std::cin >> otraEstructura.primerNumero;
		std::cout << "Dame el segundo numero de la segunda estructura: ";
		std::cin >> otraEstructura.segundoNumero;

		swap(unaEstructura, otraEstructura);

		std::cout << "1. Primer numero: " << unaEstructura.primerNumero << std::endl;
		std::cout << "1. Segundo numero: " << unaEstructura.segundoNumero << std::endl;
		std::cout << "2. Primer numero: " << otraEstructura.primerNumero << std::endl;
		std::cout << "2. Segundo numero: " << otraEstructura.segundoNumero << std::endl;

		std::cout << "Regresando al menu principal..." << std::endl;
	}
}