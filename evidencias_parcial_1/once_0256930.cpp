//Programa para validar si un número es par o impar
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int main(int argc, char const *argv[])
{
    int numero;
    std::cout << "Ingrese un numero para saber si es par o impar" << std::endl;
    std::cin >> numero;

    if (numero % 2 == 0)
    {
        std::cout << "El número es par" << std::endl;
    }
    else
    {
        std::cout << "El número es impar" << std::endl;
    }
    return 0;
}