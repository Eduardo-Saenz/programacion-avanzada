#pragma once 
#include <iostream>

struct Estado
{
    std::string nombre;
    std::string coordenadas;
    int cantidadMunicipios;
    std::string capital;
    std::string fechaFundacion;
};
struct Pais
{
    std::string nombre;
    std::string capital;
    int cantidadEstados;
    Estado * estado;
};

void leerDatos(Pais * paises);
void leerDatos(Pais * paises)
{
    std::cout << "Ingrese el nombre del pais" << std::endl;
    std::cin >> paises->nombre;
    std::cout << "Ingrese la capital del pais" << std::endl;
    std::cin >> paises->capital;
    std::cout << "Ingrese la cantidad de estados del pais" << std::endl;
    std::cin >> paises->cantidadEstados;

    paises->estado = new Estado[paises->cantidadEstados];
    for (int i = 0; i < paises->cantidadEstados; i++)
    {
        std::cout << "Ingrese el nombre del estado" << std::endl;
        std::cin >> (paises->estado + i)->nombre;
        std::cout << "Ingrese las coordenadas del estado" << std::endl;
        std::cin >> (paises->estado + i)->coordenadas;
        std::cout << "Ingrese la cantidad de municipios del estado" << std::endl;
        std::cin >> (paises->estado + i)->cantidadMunicipios;
        std::cout << "Ingrese la capital del estado" << std::endl;
        std::cin >> (paises->estado + i)->capital;
        std::cout << "Ingrese la fecha de fundación del estado" << std::endl;
        std::cin >> (paises->estado + i)->fechaFundacion;
    }
}
void imprimirDatos(Pais * paises);
void imprimirDatos(Pais * paises)
{
    std::cout << "El nombre del pais es: " << paises->nombre;
    std::cout << "La capital del pais es: " << paises->capital;
    std::cout << "La cantidad de estados del pais es: " << paises->cantidadEstados;
    for (int i = 0; i < paises->cantidadEstados; i++)
    {
        std::cout << "El nombre del estado " << i + 1 << " es: " << (paises->estado + i)->nombre;
        std::cout << "Las coordenadas del estado " << i + 1 << " son: " << (paises->estado + i)->coordenadas;
        std::cout << "La cantidad de municipios del estado " << i + 1 << " es: " << (paises->estado + i)->cantidadMunicipios;
        std::cout << "La capital del estado " << i + 1 << " es: " << (paises->estado + i)->capital;
        std::cout << "La fecha de fundación del estado " << i + 1 << " es: " << (paises->estado + i)->fechaFundacion;
    }
}