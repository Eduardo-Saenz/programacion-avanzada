#pragma once
#include <iostream>

class A
{
protected:
    int a_dato_protegido;
    bool setDatoProtegido(int dato);
    int getDatoProtegido();
private:
    /* data */
    int a_dato_privado;

public:
    int a_dato_publico;
    A(/* args */);
    A(int dato);
    ~A();
    bool setDatoPrivado(int dato);
    int getDatoPrivado();
};

A::A(int dato){
    this->a_dato_privado = dato;
}

//set
bool A::setDatoProtegido(int dato){
    this->a_dato_protegido = dato;
    return true;
}

//get
int A::getDatoProtegido()
{
    return this->a_dato_protegido;
}

A::A(/* args */)
{
}

A::~A()
{
}
