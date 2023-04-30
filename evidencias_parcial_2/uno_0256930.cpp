//Ejercicio de aritmetica creando funciones en una biblioteca
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#include "uno_0256930.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int option = -1;
    do
    {
        cout << "\033c"; //borrar terminal
        cout << "Inserta una opción valida\n1) aritmetica\n2) Hola\n3) Salir" << endl;
        cin >> option;
        switch (option)
        {
            case 0:
                cout << "Saliendo\n" << endl;
                return 0;
                break;
            case 1:
                aritmetica::aritmetica();
                break;
            case 2:
                cout << "Caso 2\n" << endl;
                break;
            default:
                cout << "\nOpcion  no valida\n" << endl;
                cin.get(); //Espera a que se presione la tecla "Enter".
                cin.get(); //Se neutraliza con el "\033c" que borra la pantalla.
                break;
        }
    } while (option != 0);
    
    return 0;
}
