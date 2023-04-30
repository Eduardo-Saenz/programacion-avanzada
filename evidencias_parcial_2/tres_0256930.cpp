//Introducción a punteros
//0256930 Eduardo Alejandro Sáenz Kammermayr

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#define MAX 100

struct Vehiculo
{
    char marca[MAX] = {'\0'};
    char modelo[MAX] = {'\0'};
    int anio;
    int ruedas;
    float kilometraje;
    char color[MAX] = {'\0'};
    char placa[MAX] = {'\0'};
};
int main(int argc, char const *argv[])
{
    int numeroVehiculos{0};
    std::cout << "Introduzca la cantidad de vehiculos: ";
    std::cin >> numeroVehiculos;
    struct Vehiculo * vehiculo = new Vehiculo [numeroVehiculos];
    
    for (int i = 0; i < numeroVehiculos; i++)
    {
        std::cout << "introduzca la marca: ";
        std::cin >> (vehiculo + i) -> marca; 
    }
    for (int i = 0; i < numeroVehiculos; i++)
    {
        std::cout << (vehiculo + i) -> marca << std::endl;   
    }
    delete[] vehiculo;
    return 0;
}