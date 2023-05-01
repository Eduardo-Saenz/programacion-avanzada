//Ejercicio de estructura "Persona" y función "swap" usando punteros
//0256930 Eduardo Alejandro Sáenz Kammermayr

#define _CRT_SECURE_NO_Warnings
#include <iostream>
#include <cstring>
#define MAX 100

struct Persona
{
    char nombre[MAX];
    char apellidoPaterno[MAX];
    char apellidoMaterno[MAX];
};
int main(int argc, char const *argv[])
{
    struct Persona persona;
    std::strcpy(persona.nombre, "Juan");
    std::strcpy(persona.apellidoPaterno, "Perez");
    std::strcpy(persona.apellidoMaterno, "Perez");
    std::cout << "nombre: " << persona.nombre << " " << persona.apellidoPaterno << " " << persona.apellidoMaterno << std::endl;
    return 0;
}