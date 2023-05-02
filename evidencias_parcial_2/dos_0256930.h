//Introducción a estructuras
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#define MAX 100
#pragma once

namespace estructuras {
    struct Vehiculo {
        char marca[MAX] = { '\0' };
        char modelo[MAX] = { '\0' };
        char anio[MAX] = { '\0' };
        int ruedas = 0;
        int kilometraje = 0;
        char color[MAX] = { '\0' };
        char placa[MAX] = { '\0' };
    };

    void principal();
    void principal() {
        std::cout << "Inserta los datos de 10 vehículos: " << std::endl;
        struct Vehiculo vehiculos[10];

        for (int i = 0; i < 10; i++)
        {
            std::cout << "Dame la marca del coche #" << (i+1) << ": ";
            std::cin >> vehiculos[i].marca;

            std::cout << "Dame el modelo del coche #" << (i + 1) << ": ";
            std::cin >> vehiculos[i].modelo;

            std::cout << "Dame el anio del coche #" << (i + 1) << ": ";
            std::cin >> vehiculos[i].anio;

            std::cout << "Dame la cantidad de ruedas del coche #" << (i + 1) << ": ";
            std::cin >> vehiculos[i].ruedas;

            std::cout << "Dame el kilometraje del coche #" << (i + 1) << ": ";
            std::cin >> vehiculos[i].kilometraje;

            std::cout << "Dame el color del coche #" << (i + 1) << ": ";
            std::cin >> vehiculos[i].color;

            std::cout << "Dame la placa del coche #" << (i + 1) << ": ";
            std::cin >> vehiculos[i].placa;
        }

        for (int i = 0; i < 10; i++)
        {
            std::cout << "Informacion del coche #" << (i + 1) << std::endl;
            std::cout << "Marca: " << vehiculos[i].marca << std::endl;
            std::cout << "Modelo: " << vehiculos[i].modelo << std::endl;
            std::cout << "Anio: " << vehiculos[i].anio << std::endl;
            std::cout << "Numero de ruedas: " << vehiculos[i].ruedas << std::endl;
            std::cout << "Kilometraje: " << vehiculos[i].kilometraje << std::endl;
            std::cout << "Color: " << vehiculos[i].color << std::endl;
            std::cout << "Placa: " << vehiculos[i].placa << std::endl;
        }

        std::cout << "Regresando al menu principal..." << std::endl;
    }

}