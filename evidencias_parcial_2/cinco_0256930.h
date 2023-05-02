//Ejercicio de estructura "Vehiculo"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#define MAX 100
#pragma once

namespace coche {
    struct Propietario {
        char nombre[MAX] = { '\0' };
    };

    struct Vehiculo {
        char marca[MAX] = { '\0' };
        char modelo[MAX] = { '\0' };
        char ano[MAX] = { '\0' };
        int ruedas = 0;
        int kilometraje = 0;
        char color[MAX] = { '\0' };
        char placa[MAX] = { '\0' };
        Propietario *propetario;
    };

    void principal();
    void principal() {
        // Memoria dinámica
        int numeroVehiculos{ 0 };
        struct Vehiculo* vehiculos = new Vehiculo[numeroVehiculos];

        for (int i = 0; i < numeroVehiculos; i++)
        {
            std::cout << "Introduce la marca del vehiculo: ";
            std::cin >> (vehiculos + i)->marca;

            (vehiculos + i)->propetario = new Propietario;

            std::cout << "Introduce el nombre del propietario: ";
            std::cin >> (vehiculos + i)->propetario->nombre;
        }

        delete vehiculos->propetario;
        delete[] vehiculos;
        std::cout << "Regresando al menu principal..." << std::endl;
    }
}