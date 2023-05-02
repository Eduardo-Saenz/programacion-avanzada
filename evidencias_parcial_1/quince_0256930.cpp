// Programa que cuenta la frecuencia de los caracteres en una cadena de máximo cien caracteres introducida por el usuario
// 0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

bool buscar(char caracteres[100], char caracterABuscar);
bool buscar(char caracteres[100], char caracterABuscar)
{
  for (int i = 0; i < sizeof(caracteres) / sizeof(char); i++)
  {
    char caracterActual = caracteres[i];

    if (caracterActual == caracterABuscar)
      return true;
  }

  return false;
}

int main()
{
  char texto[100] = {};
  char caracteresContados[100] = {};
  int maximoIndice = 0;

  std::cout << "Introduzca un texto" << std::endl;
  std::cin >> texto;

  for (int i = 0; i < sizeof(texto) / sizeof(char); i++)
  {
    char caracterActual = texto[i];
    int contador = 0;

    if (buscar(caracteresContados, caracterActual))
    {
      break;
    }

    caracteresContados[maximoIndice] = caracterActual;
    maximoIndice++;

    for (int j = 0; j < sizeof(texto) / sizeof(char); j++)
    {
      char caracterActualEnBusqueda = texto[j];

      if (caracterActual == caracterActualEnBusqueda)
      {
        contador++;
      }
    }

    std::cout << contador << " " << caracterActual << std::endl;
  }
  return 0;
}