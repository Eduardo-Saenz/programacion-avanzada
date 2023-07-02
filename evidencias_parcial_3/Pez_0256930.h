//0256930 Eduardo Alejandro Sáenz Kammermayr

#pragma once
#include <iostream>
#include "Animal_0256930.h"

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
