#pragma once
#include "A.h"

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
