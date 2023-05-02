//Ejercicio de aritmetica creando funciones en una biblioteca
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#pragma once

namespace aritmetica {
	float suma(float numeroUno, float numeroDos);
	float suma(float numeroUno, float numeroDos) {
		return numeroUno + numeroDos;
	}

	float resta(float numeroUno, float numeroDos);
	float resta(float numeroUno, float numeroDos) {
		return numeroUno - numeroDos;
	}

	float multiplicacion(float numeroUno, float numeroDos);
	float multiplicacion(float numeroUno, float numeroDos) {
		return numeroUno * numeroDos;
	}

	float division(float numeroUno, float numeroDos);
	float division(float numeroUno, float numeroDos) {
		return numeroUno / numeroDos;
	}

	float modulo(float numeroUno, float numeroDos);
	float modulo(float numeroUno, float numeroDos) {
		return int(numeroUno) % int(numeroDos);
	}

	void ejecutarOperacion(int operacion);
	void ejecutarOperacion(int operacion) {
		// 1 -> Sumar
		// 2 -> Restar
		// 3 -> Multiplicar
		// 4 -> Division
		// 5 -> Modulo
		int numeroUno{ 0 };
		int numeroDos{ 0 };
		float resultado{ 0 };

		std::cout << "Dame el primer numero: " << std::endl;
		std::cin >> numeroUno;

		std::cout << "Dame el segundo numero: " << std::endl;
		std::cin >> numeroDos;

		switch (operacion)
		{
		case 1:
			resultado = suma(numeroUno, numeroDos);
			break;

		case 2:
			resultado = resta(numeroUno, numeroDos);
			break;

		case 3:
			resultado = multiplicacion(numeroUno, numeroDos);
			break;

		case 4:
			resultado = division(numeroUno, numeroDos);
			break;

		case 5:
			resultado = modulo(int(numeroUno), int(numeroDos));
			break;
		}

		std::cout << "El resultado de tu operacion es: " << resultado << std::endl;
	}

	void principal();
	void principal() {
		int opcion{ 0 };

		do {
			std::cout << "Menu:" << std::endl;
			std::cout << "1) Suma" << std::endl;
			std::cout << "2) Resta" << std::endl;
			std::cout << "3) Multiplicacion" << std::endl;
			std::cout << "4) Division" << std::endl;
			std::cout << "5) Modulo" << std::endl;
			std::cout << "0) Regresar" << std::endl;
			std::cin >> opcion;

			switch (opcion)
			{
			case 0:
				break;
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				ejecutarOperacion(opcion);
				break;
			default:
				std::cout << "Opcion incorrecta, vuelve a intentarlo" << std::endl;
				break;
			}
		} while (opcion != 0);

		std::cout << "Regresando al menu principal..." << std::endl;
	}
}