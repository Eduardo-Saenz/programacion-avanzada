// Programa que valida si dos cadenas tienen el mismo número de elementos
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int longitudArreglo(char arreglo[]);
int longitudArreglo(char arreglo[])
{
  int contador{0};

  for (int i = 0; arreglo[i] != '\0'; i++)
  {
    contador++;
  }

  return contador;
}

int main()
{
  char texto1[10] = {'H', 'o', 'l', 'a', '\0', '\0'};
  char texto2[10] = {'A', 'l', 'o', 'h', 'h', '\0'};

  if (longitudArreglo(texto1) == longitudArreglo(texto2))
  {
    std::cout << "Tienen el mismo número de elementos";
  }
  else
  {
    std::cout << "No tienen el mismo número de elementos";
  }
  return 0;
}