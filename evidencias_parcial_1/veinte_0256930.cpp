// Crear biblioteca que contenga una función llamada equalslenght la cual validara si dos cadenas tienen el mismo número de elementos, retorna true o false según sea el caso
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#include "cadena_0256930.h";

int main()
{
  char texto1[10] = {'H', 'o', 'l', 'a', '\0', '\0'};
  char texto2[10] = {'A', 'l', 'o', 'h', 'h', '\0'};

  if (cadena::equalsLength(texto1, texto2))
  {
    std::cout << "Son del mismo tamano";
  }
  else
  {
    std::cout << "No son del mismo tamano";
  }
  return 0;
}