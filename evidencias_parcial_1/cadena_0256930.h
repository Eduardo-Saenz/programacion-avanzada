#pragma once
namespace cadena
{
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

  bool equalsLength(char texto1[], char texto2[]);
  bool equalsLength(char texto1[], char texto2[])
  {
    return longitudArreglo(texto1) == longitudArreglo(texto2);
  }
}