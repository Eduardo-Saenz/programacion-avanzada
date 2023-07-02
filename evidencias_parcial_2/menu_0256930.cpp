//Menú que puede llamar a todas las funciones de las librerias con los ejercicios
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#include "uno_0256930.h";
#include "dos_0256930.h";
#include "tres_0256930.h";
#include "cuatro_0256930.h";
#include "cinco_0256930.h";
#include "seis_0256930.h";
#include "siete_0256930.h";
#include "ocho_0256930.h";
#include "nueve_0256930.h";
#include "diez_0256930.h";
#include "once_0256930.h";
#include "doce_0256930.h";
#include "trece_0256930.h";
#include "catorce_0256930.h";

int main()
{
	int opcion{ 0 };
	do {
		std::cout << "Menu:" << std::endl;
		std::cout << "1) Aritmetica" << std::endl;
		std::cout << "2) Estructura de coche" << std::endl;
		std::cout << "3) Introducción a punteros" << std::endl;
		std::cout << "4) Memoria dinámica" << std::endl;
		std::cout << "5) Estructura coche" << std::endl;
		std::cout << "6) Estructura zoológico" << std::endl;
		std::cout << "7) Estructura escuela" << std::endl;
		std::cout << "8) Estructura persona con swap" << std::endl;
		std::cout << "9) Paso por referencia" << std::endl;
		std::cout << "10) Paso por punteros" << std::endl;
		std::cout << "11) Paso por referencia de estructuras" << std::endl;
		std::cout << "12) Copiar estructuras con punteros" << std::endl;
		std::cout << "13) Introduccion a las uniones" << std::endl;
		std::cout << "14) Uniones con diferentes tipos de datos" << std::endl;
		std::cout << "0) Salir del programa" << std::endl;

		std::cin >> opcion;

		switch (opcion)
		{
		case 0:
			break;
		case 1:
			std::cout << "Aritmetica" << std::endl;
			aritmetica::principal();
			break;
		case 2:
			std::cout << "Estructura de coche" << std::endl;
			estructuras::principal();
			break;
		case 3:
			std::cout << "Introducción a punteros" << std::endl;
			punteros::principal();
			break;
		case 4:
			std::cout << "Memoria dinamica" << std::endl;
			memoriaDinamica::principal();
			break;
		case 5:
			std::cout << "Estructura coche" << std::endl;
			coche::principal();
			break;
		case 6:
			std::cout << "Estructura zoológico" << std::endl;
			zoo::principal();
			break;
		case 7:
			std::cout << "Estructura escuela" << std::endl;
			escuela::principal();
			break;
		case 8:
			std::cout << "Estructura persona con swap" << std::endl;
			persona::principal();
			break;
		case 9:
			std::cout << "Paso por referencia" << std::endl;
			pasoReferencia::principal();
			break;
		case 10:
			std::cout << "Paso por punteros" << std::endl;
			pasoPunteros::principal();
			break;
		case 11:
			std::cout << "Paso por referencia de estructuras" << std::endl;
			pasoReferenciaEstructuras::principal();
			break;
		case 12:
			std::cout << "Copiar estructuras con punteros" << std::endl;
			copiaConPuntero::principal();
			break;
		case 13:
			std::cout << "Introducción a las uniones" << std::endl;
			uniones::principal();
			break;
		case 14:
			std::cout << "Uniones con diferentes tipos de datos" << std::endl;
			unionesDiferentesDatos::principal();
			break;
		default:
			std::cout << "Esa opción no es valida, intente de nuevo." << std::endl;
			break;
		}
	} while (opcion != 0);

	std::cout << "Hasta luego!" << std::endl;
}