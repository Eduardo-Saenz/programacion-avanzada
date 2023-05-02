//Ejercicio de estructuras y bibliotecas "zoologico"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#define MAX 100
#pragma once
namespace zoo {
    struct Animal {
        char tipo[MAX] = { '\0' };
        char nombre[MAX] = { '\0' };
        bool alas{ false };
        bool pelo{ false };
        int patas{ 0 };
    };

    struct Zoo {
        char nombre[MAX] = { '\0' };
        char direccion[MAX] = { '\0' };
        struct Animal* animales;
        int cantidadAnimales{ 0 };
    };

    void principal();
    void principal() {
        struct Zoo* zoo;
        zoo = new Zoo();

        std::cout << "Inserta el nombre del zoologico: ";
        std::cin >> zoo->nombre;

        std::cout << "Inserta la direccion del zoologico: ";
        std::cin >> zoo->direccion;

        std::cout << "Inserta la cantidad de animales del zoologico: ";
        std::cin >> zoo->cantidadAnimales;

        zoo->animales = new Animal[zoo->cantidadAnimales];

        for (int i = 0; i < zoo->cantidadAnimales; i++) {
            std::cout << "Inserta el nombre del animal: ";
            std::cin >> (zoo->animales + i)->nombre;

            std::cout << "Inserta el tipo del animal: ";
            std::cin >> (zoo->animales + i)->tipo;

            std::cout << "Tiene alas el animal? ";
            std::cin >> (zoo->animales + i)->alas;

            std::cout << "Tiene pelo el animal? ";
            std::cin >> (zoo->animales + i)->alas;

            std::cout << "Inserta la cantidad de patas del animal: ";
            std::cin >> (zoo->animales + i)->patas;
        }

        delete[] zoo->animales;
        delete zoo;
        std::cout << "Regresando al menu principal..." << std::endl;
    }
}