//Estructuras de control "for", "while" y "do-while"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int main(int argc, char const *argv[])
{
    //For
    for (int i = 0; i < 100; i++)
    {
        std::cout << i << std::endl;
    }
    //While
    int operacion { 1 };
    while (operacion != 0)
    {
        std::cout << "Introduce un número entero" << std::endl;//Salida
        std::cin >> operacion;//Entrada
    }
    //Do-while
    do
    {
        std::cout << "Introduce un número entero" << std::endl;//Salida
        std::cin >> operacion;//Entrada
    } while (operacion != 0);
    return 0;
}