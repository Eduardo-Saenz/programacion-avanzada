//1.- Corregir el codigo e indicazr el resultado.
//R.- Dice: OK!
/* #include <iostream>
union Data
{
    int data {0x214b4f};
    char cad[4];
};

int main(int argc, char const *argv[])
{
    Data data;
    std::cout << data.cad;
    return 0;
} */
//2.- Para que se utiliza #define?
//R.- Es una directiva que se utiliza para crear una macro.
//3.- Que es un puntero?
//R.- Es un identificador que almacena una direccion de memoria del tipo de dato del puntero.
//4.- Que es una estructura?
//R.- Es un tipo de dato que te permite almacenar otros tipos de datos dentro de él.
//5.- Escriba un programa que le permita al usuario ingresar n cantidad de elementos del tipo de una estructura Alumno,
//    la cual tiene como elementos 
#include <iostream>
#include "Alumno.h"
int main(int argc, char const *argv[])
{
    Alumno * datos;
    int cantidad;
    std::cout << "Cuantos alumnos hay?\n";
    std::cin >> cantidad;
    datos = new Alumno [cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        leerAlumno((datos+i));
    }
    for (int i = 0; i < cantidad; i++)
    {
        imprimirAlumno((datos+i));
    }
    return 0;
}