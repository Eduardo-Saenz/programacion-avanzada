//Programa que demusetra el funcionamiento de la herencia usando de ejemplo clases de animales
//0256930 Eduardo Alejandro Sáenz kammermayr

#include <iostream>
#include "Perro_0256930.h"
#include "Pez_0256930.h"
#include "Rana_0256930.h"

int main(int argc, char const *argv[])
{
    Perro unPerro;
    Pez unPez;
    Rana unaRana;

    unPerro.sonido(); //Imprime el sonido del perro
    unPez.sonido(); //Imprime el sonido del pez
    unaRana.sonido(); //Imprime el sonido de la rana
    return 0;
}
