//Ejemplo de uniones con diferentes tipos de datos
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#pragma once
namespace unionesDiferentesDatos
{
	union OtrosDatos
    {
		int numero{ 0 };
		char text[4];
	};

	void principal();
	void principal()
    {
		std::cout << "Tamano de otros datos: " << sizeof(OtrosDatos) << std::endl;

		OtrosDatos datos;
		std::cout << "Dame un numero: ";
		std::cin >> datos.numero;

		// Los dos valores deben de ser los mismos al igual que sus direcciones de memoria
		std::cout << "Numero: " << datos.numero << std::endl;
		std::cout << "Text: " << datos.text[0] << "/" << datos.text[1] << "/" << datos.text[2] << "/" << datos.text[3] << std::endl;
		std::cout << "Memoria numero: " << &datos.numero << " Memoria text: " << &datos.text << std::endl;
		std::cout << "Regresando al menu principal..." << std::endl;
	}
}