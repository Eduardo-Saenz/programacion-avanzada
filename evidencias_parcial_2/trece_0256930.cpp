//Introducción a "Uniones"
//0256930 Eduardo Alejandro Sáenz Kammermayr

/*La unión es un tipo de datos especial disponible en C que permite
almancenar diferentes tipos de datos en la misma ubicación de memoria.*/

#include <iostream>

union Datos
{
    int numeroUno;
    int numeroDos;
};
int main(int argc, char const *argv[])
{
    Datos datos;
    datos.numeroUno = 10;
    std::cout << "numero guardado:" << datos.numeroDos << std::endl;
    return 0;
}