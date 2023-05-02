//Programa que cuenta la frecuencia de un carácter en una cadena de cien caracteres
//0256930 Eduardo Alejandro Sáenz Kammermayr 

#include <iostream>
#include "contchar_0256930.h";

int main()
{
  char texto[100] = {};
  char caracterAContar;

  std::cout << "Introduzca un texto" << std::endl;
  std::cin >> texto;

  std::cout << "Introduzca un caracter" << std::endl;
  std::cin >> caracterAContar;

  int cantidadCaracter = contador::contarCaracter(texto, caracterAContar);

  std::cout << "El caracter " << caracterAContar << " aparece " << cantidadCaracter << " veces.";

  return 0;
}
