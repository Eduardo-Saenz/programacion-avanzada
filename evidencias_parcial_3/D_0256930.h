//Libreria que contiene la clase "D"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#pragma once
#include "A_0256930.h"

class D : public A //Los protegidos de A serán protegidos de D, y los públicos de A serán públicos de D.
{
public:
    D();
    D(int dato);
    ~D();
private:
    /* data */
};

D::D()
{
}

D::D(int dato) : A(dato) //Llama el constructor de A
{
}

D::~D()
{
}
