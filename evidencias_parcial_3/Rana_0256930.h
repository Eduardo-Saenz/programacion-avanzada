//0256930 Eduardo Alejandro Sáenz Kammermayr

#pragma once
#include <iostream>
#include "Animal_0256930.h"

class Rana : protected Animal
{
private:
    /* data */
public:
    bool veneno;
    Rana(/* args */);
    void sonido();
    void saltar();
    ~Rana();
};

Rana::Rana(/* args */)
{
}

void Rana::sonido()
{
    std::cout << "CROAC!" << std::endl;
}

void Rana::saltar()
{
    std::cout << "La rana ha saltado" << std::endl;
}

Rana::~Rana()
{
}
