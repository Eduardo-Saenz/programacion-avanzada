#include <iostream>

int main(int argc, char const *argv[])
{
    int cantidadNumeros;

    std::cout << "introduzca la cantidad de numeros que va a ordenar: ";
    std::cin >> cantidadNumeros;

    int numero1{0}, numero2{0}, numeroTemporal{0};

    for(int i = 0; i < cantidadNumeros; i++)
    {
    	for(int j = 0; j < cantidadNumeros - i - 1;  j++)
        {
    	      if(numero1[i] > numero2[j]){
    			numeroTemporal = vector[i];
    			vector[i] = vector[j];
    			vector[j] = numeroTemporal;
		}
          }
   }

    for (int i = 0; i < cantidadNumeros; i++)
    {
        std::cout << "introduzca un numero: ";
        std::cin >> numero1;
        if (numero1 > numero2)
        {
            numero1 = numeroTemporal;
            numero2 = numero1;
            numeroTemporal = numero1;
        }
        
    }

    return 0;
}
