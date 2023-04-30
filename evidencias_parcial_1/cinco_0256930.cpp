//Ejemplo de operadores aritmeticos
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int main(int argc, char const *argv[])
{
    int n1 = 0, n2 = 0;
    std::cout << "Introduce el primer número: ";
    std::cin >> n1;
    std::cout << "Introduce el segundo número: ";
    std::cin >> n2;

    std::cout << "Suma: " << n1 + n2 << std::endl;
    std::cout << "Resta: " << n1 - n2 << std::endl;
    std::cout << "Multiplicación: " << n1 * n2 << std::endl;
    std::cout << "División: " << n1 / n2 << std::endl;
    std::cout << "Módulo: " << n1 % n2 << std::endl; //Devuelve el residuo de la división
    
    return 0;
}