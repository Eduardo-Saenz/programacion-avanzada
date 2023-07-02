//Programa que demuestra la herencia y los tipos de acceso en C++
//0256930 Eduardo Alejandro Sáenz Kammermayr

//Cuando tenemos herencia, se manda a llamar automáticamente el constructor de la clase base.
#include "A_0256930.h"
#include "B_0256930.h"
#include "C_0256930.h"
#include "D_0256930.h"

int main(int argc, char const *argv[])
{
    //herencia privada de A
    B b;
    b.b_dato_publico = 3;
    //herencia protegida de A
    C c;
    c.c_dato_publico = 5;
    //herencia pública de A
    D d;
    d.a_dato_publico = 2;
    return 0;
}
