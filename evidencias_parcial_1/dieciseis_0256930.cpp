//Ejemplo de una función, parámetros y valores de retorno
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int suma(int numeroUno, int numeroDos);
int suma(int numeroUno, int numeroDos)
{
    return numeroUno + numeroDos;
}
int main(int argc, char const *argv[])
{
    std::cout << "La suma de 5 + 10 es: " << suma(5, 10) << std::endl;
    return 0;
}