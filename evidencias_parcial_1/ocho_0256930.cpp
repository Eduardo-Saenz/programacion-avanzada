//Estructura del condicional "if-else"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int main(int argc, char const *argv[])
{
    int numeroUno { 0 }, numeroDos { 0 };
    std::cout << "Introduce un número entero" << std::endl;//Salida
    std::cin >> numeroUno;//Entrada
    std::cout << "Introduce un número entero" << std::endl;//Salida
    std::cin >> numeroDos;//Entrada
    if (numeroUno > numeroDos)
    {
        std::cout << "El número uno es mayor" << std::endl;
    }
    else
    {
        std::cout << "El número uno no es mayor" << std::endl;
    }
    return 0;
}