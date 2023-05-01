//Ejercicio de estructura "Vehiculo"
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
    struct Vehiculo vehiculo[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout << "ingrese la marca del vehiculo " << i + 1 << ": ";
        std::cin >> vehiculo[i].marca;
        std::cout << "ingrese el modelo del vehiculo " << i + 1 << ": ";
        std::cin >> vehiculo[i].modelo;
        std::cout << "ingrese el año del vehiculo " << i + 1 << ": ";
        std::cin >> vehiculo[i].anio;
        std::cout << "ingrese el numero de ruedas del vehiculo " << i + 1 << ": ";
        std::cin >> vehiculo[i].ruedas;
        std::cout << "ingrese el kilometraje del vehiculo " << i + 1 << ": ";
        std::cin >> vehiculo[i].kilometraje;
        std::cout << "ingrese el color del vehiculo " << i + 1 << ": ";
        std::cin >> vehiculo[i].color;
        std::cout << "ingrese la placa del vehiculo " << i + 1 << ": ";
        std::cin >> vehiculo[i].placa;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Marca del vehiculo " << i + 1 << ": " << vehiculo[i].marca << std::endl;
        std::cout << "Modelo del vehiculo " << i + 1 << ": " << vehiculo[i].modelo << std::endl;
        std::cout << "Año del vehiculo " << i + 1 << ": " << vehiculo[i].anio << std::endl;
        std::cout << "Ruedas del vehiculo " << i + 1 << ": " << vehiculo[i].ruedas << std::endl;
        std::cout << "Kilometraje del vehiculo " << i + 1 << ": " << vehiculo[i].kilometraje << std::endl;
        std::cout << "Color del vehiculo " << i + 1 << ": " << vehiculo[i].color << std::endl;
        std::cout << "Placa del vehiculo " << i + 1 << ": " << vehiculo[i].placa << std::endl;
    }
    
    
    return 0;
}