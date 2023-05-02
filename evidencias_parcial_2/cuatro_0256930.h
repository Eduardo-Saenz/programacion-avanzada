//Ejercicio con punteros usándolos para crear memoria dinámica
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#define MAX 100
#pragma once
namespace memoriaDinamica {
    struct Vehiculo {
        char marca[MAX] = { '\0' };
        char modelo[MAX] = { '\0' };
        char ano[MAX] = { '\0' };
        int ruedas = 0;
        int kilometraje = 0;
        char color[MAX] = { '\0' };
        char placa[MAX] = { '\0' };
    };

    void principal();
    void principal() {
        struct Vehiculo vehiculo;
        struct Vehiculo* puntero;
        puntero = &vehiculo;

        std::cout << "Introduce la marca del vehiculo: ";
        // Cuando usamos un puntero para una estructura, accedemos a sus propiedades con "->".
        std::cin >> puntero->marca;

        std::cout << "Marca del vehiculo: " << vehiculo.marca;

        // Memoria dinámica
        int numeroVehiculos{ 0 };
        std::cout << "Dame la cantidad de vehiculos a ingresar: ";
        std::cin >> numeroVehiculos;
        // Creamos un arreglo con una longitud determinada en la ejecución
        struct Vehiculo* vehiculos = new Vehiculo[numeroVehiculos];

        for (int i = 0; i < numeroVehiculos; i++)
        {
            std::cout << "Introduce la marca del vehiculo: ";
            // Es importante notar cómo accedemos a cada uno de los elementos utilizando 
            std::cin >> (vehiculos + i)->marca;
        }
        delete[] vehiculos; // Borramos el arreglo
        std::cout << "Regresando al menu principal..." << std::endl;
    }
}