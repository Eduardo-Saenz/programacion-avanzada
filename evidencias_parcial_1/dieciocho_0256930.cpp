//Este programa contiene la función "main". La ejecución del programa comienza y termina ahí.
//Hacer una biblioteca que tenga una funcion llamada indexOf la cual recibe como parametro un 
//arreglo de caracteres y un caracter a buscar, lo que debe de retornar es el indice de la 
//primera incidencia del caracter en caso de no encontrarlo retorna un "-1".
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#include "indexof_0256930.h"
using namespace std;

int main(int args, const char* argv[])
{
    char palabra[100];
    char letra;
    int index;
    cout << "Ingresa una palabra: ";
    cin >> palabra;
    cout << "Ingrese la letra a checar: ";
    cin >> letra;
    index = indexOf(palabra, letra);
    cout << "Aparece por primera vez en el caracter: " << index;
    return 0;
}