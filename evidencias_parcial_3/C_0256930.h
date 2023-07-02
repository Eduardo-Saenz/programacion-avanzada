//Libreria que contiene la clase "C"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include "A_0256930.h"

class C : protected A
{
private:
    /* data */
    int c_dato_privado;

protected:
    int c_dato_protegido;

public:
    int c_dato_publico;
    C(/* args */);
    ~C();
};

C::C(/* args */)
{
}

C::~C()
{
}