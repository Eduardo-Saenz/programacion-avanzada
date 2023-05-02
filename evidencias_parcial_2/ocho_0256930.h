//Ejercicio de estructura "Persona" y función "swap" usando punteros
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#pragma once

namespace persona {
    struct Persona {
        std::string nombre;
        int edad;
        float altura;
        std::string curp;
        std::string direccion;
        std::string fechaNacimiento;
    };

    void swap(Persona* primerPunto, Persona* segundoPuntero);
    void swap(Persona* primerPunto, Persona* segundoPuntero) {
        struct Persona temp = *segundoPuntero; // Guardamos el valor de la variable del puntero

        *primerPunto = *segundoPuntero; // Cambiamos los valores de las variables de los punteros
        *primerPunto = temp;
    }

	void principal();
	void principal() {
        Persona* primeraPersona = new Persona();
        Persona* segundaPersona = new Persona();

        // Primera persona
        std::cout << "Dame el nombre de la primera persona: ";
        std::cin >> primeraPersona->nombre;

        std::cout << "Dame la edad de la primera persona: ";
        std::cin >> primeraPersona->edad;

        std::cout << "Dame la altura de la primera persona: ";
        std::cin >> primeraPersona->altura;

        std::cout << "Dame el curp de la primera persona: ";
        std::cin >> primeraPersona->curp;

        std::cout << "Dame la direccion de la primera persona: ";
        std::cin >> primeraPersona->direccion;

        std::cout << "Dame la fecha de nacimiento de la primera persona: ";
        std::cin >> primeraPersona->fechaNacimiento;

        // Segunda persona
        std::cout << "Dame el nombre de la segunda persona: ";
        std::cin >> segundaPersona->nombre;

        std::cout << "Dame la edad de la segunda persona: ";
        std::cin >> segundaPersona->edad;

        std::cout << "Dame la altura de la segunda persona: ";
        std::cin >> segundaPersona->altura;

        std::cout << "Dame el curp de la segunda persona: ";
        std::cin >> segundaPersona->curp;

        std::cout << "Dame la direccion de la segunda persona: ";
        std::cin >> segundaPersona->direccion;

        std::cout << "Dame la fecha de nacimiento de la segunda persona: ";
        std::cin >> segundaPersona->fechaNacimiento;
        
        swap(primeraPersona, segundaPersona);

        std::cout << "Nombre primera persona: " << primeraPersona->nombre << std::endl;
        std::cout << "Edad primera persona: " << primeraPersona->edad << std::endl;
        std::cout << "Altura primera persona: " << primeraPersona->altura << std::endl;
        std::cout << "CURP primera persona: " << primeraPersona->curp << std::endl;
        std::cout << "Direccion primera persona: " << primeraPersona->direccion << std::endl;
        std::cout << "Fecha de nacimiento primera persona: " << primeraPersona->fechaNacimiento << std::endl;

        std::cout << "Nombre segunda persona: " << segundaPersona->nombre << std::endl;
        std::cout << "Edad segunda persona: " << segundaPersona->edad << std::endl;
        std::cout << "Altura segunda persona: " << segundaPersona->altura << std::endl;
        std::cout << "CURP segunda persona: " << segundaPersona->curp << std::endl;
        std::cout << "Direccion segunda persona: " << segundaPersona->direccion << std::endl;
        std::cout << "Fecha de nacimiento segunda persona: " << segundaPersona->fechaNacimiento << std::endl;

        std::cout << "Regresando al menu principal..." << std::endl;
	}
}