//Programa para validar si un número es primo
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int main(int argc, char const *argv[])
{
    int numero;
    bool band {true};
    std::cout << "Ingrese un número para saber si es primo" << std::endl;
    std::cin >> numero;

    for (int i = 2; i < 10; i++)
    {
        if (numero != i && numero % i == 0)
        {
            band = false;
        }
    }
    if (band)
    {
        std::cout << "El numero es primo" << std::endl;
    }
    else
    {
        std::cout << "El numero no es primo" << std::endl;
    } 
    return 0;
}