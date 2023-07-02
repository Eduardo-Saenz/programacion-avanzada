#include <iostream>
#include <stdio.h>
#include "Conceptos_0256930.h"

/*
int main(int argc, char const *argv[])
{
    Conceptos a; //llama al metodo 1
    std::cout << "a: " << a.leerDato() << "\n";   
    Conceptos b(100); //llama al metodo 2
    std::cout << "b: " << b.leerDato() << "\n";  
    Conceptos c(b); //llama al metodo 3
    std::cout << "c: " << c.leerDato() << "\n";  
    Conceptos conceptos(20); //llama al metodo 4

    return 0;
}
*/

int main(int argc, char const *argv[])
{
    Conceptos conceptos(100);
    Conceptos b;
    Conceptos *puntero = new Conceptos(300);
    delete puntero;
    b = conceptos;
    std::cout << "leerDato: " << conceptos.leerDato() << "\n";
    conceptos.escribirDato(20);
    std::cout << "leerDato: " << conceptos.leerDato() << "\n";
    std::cout << "leerDato b: " << b.leerDato() << "\n";
    b.~Conceptos();
    return 0;
}
