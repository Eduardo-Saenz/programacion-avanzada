//Operadores racionales
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 1, b = 2;

    //operadores lógicos
    std::cout << "Negación lógica (NOT): " << !a;
    std::cout << "Y lógico: " << a && b;
    std::cout << "O lógico: " << a || b;
    
    //Operadores de comparación
    std::cout << "Menor que: " << (a < b);
    std::cout << "Mayor que: " << (a > b);
    std::cout << "Menor o igual que: " << (a <= b);
    std::cout << "Mayor o igual que: " << (a >= b);
    std::cout << "Igual que: " << (a == b);
    std::cout << "Diferente que: " << (a != b);

    return 0;
}