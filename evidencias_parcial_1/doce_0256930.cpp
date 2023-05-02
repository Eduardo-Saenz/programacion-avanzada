//Programa que calcula el promedio de los numeros en un array de diez numeros
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int main(int argc, char const *argv[])
{
    int arregloEnteros[10] = {};
    int sumatoria{0};

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Ingresa el numero en la posición " << (i + 1) << ": ";
        std::cin >> arregloEnteros[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sumatoria += arregloEnteros[i];
    }

    float promedio = sumatoria / 10;

    std::cout << "El promedio de los diez numeros es de: " << promedio << std::endl;
    return 0;
}