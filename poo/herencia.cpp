//Cuando tenemos herencia, se manda a llamar automáticamente el constructor de la clase base.
#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"

int main(int argc, char const *argv[])
{
    //herencia private de A
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
