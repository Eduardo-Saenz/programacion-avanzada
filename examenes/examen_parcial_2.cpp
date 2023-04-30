//Pregunta 1: Escriba las líneas faltantes en el siguiente código y ejecútelo, indique el resultado.
//Respuesta pregunta 1: ESPROGRAMADOR;

#include <iostream>
union Data{
    int data[4] = {0x52505345,0x4152474f,0x4f44414d,0x3b52};
    char cad[16];
};
int main(int argc, char const *argv[])
{
    Data *data;
    data = new Data;
    std::cout << data->cad;
    return 0;
}

//Pregunta 2: Indique las maneras en que se puede definir una constante
//Respuesta 2: Mediante el uso de la directiva "define" seguido del nombre que va a adquirir la constante e igualandolos.
//otra manera es usando "const <tipo de variable> <nombre de variable> = la variable".
//Pregunta 3: ¿Qué reglas deben de cumplirse para declarar un identificador?
//Respuesta 3: No se deben de usar numeros al inicio asi como tampoco espacios o signos de puntuacion. se recomienda usar UpperCamelCase
//Pregunta 4: Mencione los tipos de datos que utilizan un byte de memoria.
//Respuesta 4: Los datos de tipo char y bool.
//Pregunta 5:Escriba un programa que le permita al usuario ingresar n cantidad de elementos del tipo de una estructura país,
//la cual tiene como elementos nombre, capital, cantidad de estados, que a su vez contiene una estructura anidada de tipo puntero
//llamada Estado la cual tiene como miembros nombre, coordenadas, cantidad de municipios, capital, fecha de fundación.
//5.1) Crear funciones para leer e imprimir los datos en la consola
//5.2) Crear una biblioteca donde estarán las funciones y las estructuras.
//5.3) Declare una constate con su nombre completo e imprímalo en la consola
//Respuesta 5:
#include <iostream>
#include "pais.h"
#define constante "Eduardo Saenz kammermayr"

int main(int argc, char const *argv[])
{
    std::cout << constante << std::endl;
    int cantidadPaises;
    std::cout << "ingrese la cantidad de paises" << std::endl;
    std::cin >> cantidadPaises;
    Pais * paises = new Pais[cantidadPaises];
    leerDatos(paises);
    std::cout << "\n Resultados: " << std::endl;
    imprimirDatos(paises);
    return 0;
}