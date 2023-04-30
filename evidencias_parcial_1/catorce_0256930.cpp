/*Hacer un programa que lea n numeros y nos indique cual fue el numero mayor de todos,
los numeros tienen que ser leidos de la terminal*/
//0256930 Eduardo Alejandro Sáenz Kammermayr
#include <iostream>

int main(int argc, char const *argv[])
{
    int n, numero1, numero2;

    std::cout << "inserte la cantidad de numeros que desea comparar: " << std::endl;
    std::cin >> n;
    for (int i = 0; i < n ; i++)
    {
        std::cout << "inserte el numero que irá en la posición " << i + 1 << ": " << std::endl;
        std::cin >> numero1;
    }
    
    for (int i = 0; i < n; i++)
    {
      if (numero1 > numero2)
        {
            numero2 = numero1;
        }
    }
    std::cout << "El numero mas grande del grupo es: " << numero2 << std::endl;
    return 0;
}