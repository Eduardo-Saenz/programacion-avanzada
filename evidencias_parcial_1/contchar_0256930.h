//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

#ifndef _LIBCPP_COUNTCHAR
#define _LIBCPP_COUNTCHAR
namespace contador
{
  int contarCaracter(char texto[], char caracterABuscar);
  int contarCaracter(char texto[], char caracterABuscar)
  {
    int contador = 0;

    for (int i = 0; i < sizeof(texto) / sizeof(char); i++)
    {
      char caracterActual = texto[i];
      if (caracterActual == caracterABuscar)
      {
        contador++;
      }
    }

    return contador;
  }
}
#endif

