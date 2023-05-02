// Ejemplo de cómo copiar arreglos estructuras con punteros
// 0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#pragma once

namespace copiaConPuntero {
    struct Persona {
        std::string nombre;
        int edad;
        float altura;
        std::string curp;
        std::string direccion;
        std::string fechaNacimiento;
    };

    int copiarEstructura(struct Persona* estrcutura1, struct Persona* estructura2, int tamano);
    int copiarEstructura(struct Persona* estrcutura1, struct Persona* estructura2, int tamano) {
        for (int i = 0; i < tamano; i++)
        {
            *(estructura2 + i) = *(estrcutura1 + i);
        }

        return 1;
    }

	void principal();
	void principal() {
        int numeroPersonas{ 0 };
        struct Persona* personas;
        struct Persona* personasCopia;

        std::cout << "Inserta el numero de personas: ";
        std::cin >> numeroPersonas;

        personas = new Persona[numeroPersonas];
        personasCopia = new Persona[numeroPersonas];

        for (int i = 0; i < numeroPersonas; i++)
        {
            std::cout << "Persona " << (i + 1) << std::endl;

            std::cout << "Inserta el nombre de la persona " << (i + 1) << ": ";
            std::cin >> (personas + i)->nombre;

            std::cout << "Inserta la edad de la persona " << (i + 1) << ": ";
            std::cin >> (personas + i)->edad;

            std::cout << "Inserta la altura de la persona " << (i + 1) << ": ";
            std::cin >> (personas + i)->altura;

            std::cout << "Inserta el curp de la persona " << (i + 1) << ": ";
            std::cin >> (personas + i)->curp;

            std::cout << "Inserta la direccion de la persona " << (i + 1) << ": ";
            std::cin >> (personas + i)->direccion;

            std::cout << "Inserta la fecha de nacimiento de la persona " << (i + 1) << ": ";
            std::cin >> (personas + i)->fechaNacimiento;
        }

        copiarEstructura(personas, personasCopia, numeroPersonas);

        for (int i = 0; i < numeroPersonas; i++)
        {
            std::cout << "Persona " << (i + 1) << std::endl;
            std::cout << (i + 1) << ") Nombre: " << (personasCopia + i)->nombre << std::endl;
            std::cout << (i + 1) << ") Edad: " << (personasCopia + i)->edad << std::endl;
            std::cout << (i + 1) << ") Altura: " << (personasCopia + i)->altura << std::endl;
            std::cout << (i + 1) << ") curp: " << (personasCopia + i)->curp << std::endl;
            std::cout << (i + 1) << ") Direccion: " << (personasCopia + i)->direccion << std::endl;
            std::cout << (i + 1) << ") Fecha de nacimiento: " << (personasCopia + i)->fechaNacimiento << std::endl;
        }

        delete[] personas;
        delete[] personasCopia;
        std::cout << "Regresando al menu principal..." << std::endl;
	}
}