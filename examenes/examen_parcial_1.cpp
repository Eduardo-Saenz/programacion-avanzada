/*Hacer un programa que calcule el sueldo final de “n” trabajadores, n  y el sueldo base deberán ser ingresados desde la terminal.

*Si el sueldo base del empleado es menos a 10000 recibe un incremento en su sueldo final de más el 20%.

*Si el sueldo base del empleado es entre 10000 y 15000 recibe un incremento en su sueldo final de más el 10%.

*Si el sueldo base del empleado es entre 15000 y 20000 recibe un incremento en su sueldo final de más el 5%.

*Si el sueldo base del empleado es mayor a 20000 no recibe incremento.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numeroDeTrabajadores, sueldoBase, sueldoConAumento, sueldoFinal;
    do
    {
        cout << "Indique el numero de trabajadores: ";
        cin >> numeroDeTrabajadores;
    } while (numeroDeTrabajadores < 1);

    for (int i = 0; i < numeroDeTrabajadores; i++)
    {
        do
        {
            cout << "Indique el sueldo base del trabajador " << i + 1 << ": ";
            cin >> sueldoBase;
        } while (sueldoBase < 1);
            
        if (sueldoBase > 0 && sueldoBase < 10000)
        {
            sueldoConAumento = sueldoBase * 0.20;
            sueldoFinal = sueldoBase + sueldoConAumento;
            cout << "El sueldo final del trabajador es: " << sueldoFinal << endl;
        }
        else if (sueldoBase > 10000 && sueldoBase < 15000)
        {
            sueldoConAumento = sueldoBase * 0.10;
            sueldoFinal = sueldoBase + sueldoConAumento;
            cout << "El sueldo final del trabajador es: " << sueldoFinal << endl;
        }
        else if (sueldoBase > 15000 && sueldoBase < 20000)
        {
            sueldoConAumento = sueldoBase * 0.05;
            sueldoFinal = sueldoBase + sueldoConAumento;
            cout << "El sueldo final del trabajador es: " << sueldoFinal << endl;
        }
        else if (sueldoBase > 20000)
        {
            cout << "El sueldo final del trabajador es: " << sueldoBase << endl;
        }
    }
    return 0;
}