#pragma once
#include <iostream>
#include "Animal.h"

class Pez : protected Animal
{
private:
    /* data */
public:
    bool escamas;
    int aletas;
    Pez(/* args */);
    void nadar();
    void sonido() override;
    ~Pez();
};

Pez::Pez(/* args */) : Animal()
{
}

void Pez::sonido()
{
    std::cout << "GLUP GLUP" << std::endl;
}

Pez::~Pez()
{
}
