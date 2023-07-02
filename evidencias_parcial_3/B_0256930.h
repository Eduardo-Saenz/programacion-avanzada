//Libreria que contiene la clase "B"
//0256930 Eduardo Alejandro Sáenz Kammermayr

#pragma once
#include "A_0256930.h"

class B : private A //Los datos publicos y protegidos de "A" pasarán a ser privados de "B"
{
protected:
    int b_dato_protegido;

private:
    /* data */
    int b_dato_privado;

public:
    int b_dato_publico;
    B(/* args */);
    B(int dato);
    ~B();
    bool setDatoProtegido(int dato);
    int getDatoProtegido();
};

bool B::setDatoProtegido(int dato){
    this->b_dato_protegido = dato;
    return true;
}

int B::getDatoProtegido()
{
    return this->a_dato_protegido;
}

B::B(int dato) : A(dato)
{
    std::cout << "Constructor de B -> A\n";
    this->a_dato_protegido = 6;
}

B::~B()
{
}