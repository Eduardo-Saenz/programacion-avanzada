//Operadores a nivel de bit
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

int main(int argc, const char *argv[])
{
  unsigned char numero{1};
  // 1 = 00000001 (Valor binario)

  // Desplazamiento a la izquierda
  std::cout << (numero << 1) << std::endl; // Regresa "2"
  // 2 = 00000010
  std::cout << (numero << 2) << std::endl; // Regresa "4"
  // 4 = 00000100

  // Desplazamiento a la derecha
  std::cout << (numero >> 1) << std::endl; // Regresa "0"

  // Complemento a uno. Cambia los 0 por 1 y los 1 por 0.
  std::cout << ((int)(unsigned char)~numero) << std::endl; // Regresa "254"
  // 254 = 11111110

  // AND binario. Sólo regresa los bits que sean iguales
  unsigned char numeroDos{3};
  // 3 = 00000011
  std::cout << (numero & numeroDos) << std::endl; // Regresa "1"
  // 1 = 00000001
  // 3 = 00000011
  // ------------
  // 1 = 00000001

  // OR binario. Regresa un 1 si cualquiera de los dos bits es 1.
  std::cout << (numero | numeroDos) << std::endl; // Regresa "3"
  // 1 = 00000001
  // 3 = 00000011
  // ------------
  // 3 = 00000011

  // XOR binario. Regresa un 0 son iguales los bits, si son diferentes nos da 1.
  std::cout << (numero ^ numeroDos) << std::endl; // Regresa "2"
  // 1 = 00000001
  // 3 = 00000011
  // ------------
  // 2 = 00000010
  return 0;
}