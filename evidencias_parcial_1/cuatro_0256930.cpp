//Entrada y salida estandar
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int numeroUno{ 0 }, numeroDos{ 0 }, resultado{ 0 };
    setlocale(LC_ALL, "Spanish");

    std::cout << "introduce un numero entero\n"; //Salida
    std::cin >> numeroUno; //Entrada
    std::cout << "introduce un numero entero\n"; //Salida
    std::cin >> numeroDos; //Entrada
    resultado = numeroUno + numeroDos;
    std::cout << "resultado: " << resultado; //salida
    return 0;
}