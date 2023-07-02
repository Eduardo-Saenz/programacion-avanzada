//0256930 Eduardo Alejandro Sáenz Kammermayr

#pragma once
#include <iostream>
class Animal
{
private:
    /* data */
    int cantidadDePatas;
    int cantidadDeOjos;
    std::string sonido_;
    std::string tipo;
    std::string color;
public:
    Animal(/* args */);
    Animal(int cantidadDeOjos, int cantidadDePatas, std::string sonido_, std::string tipo, std::string color);
    ~Animal();
    virtual void sonido()
    {
        std::cout << "Default\n";
    };
};

Animal::Animal(/* args */)
{
    this->cantidadDeOjos = 0;
    this->cantidadDePatas = 0;
    this->sonido_ = "Indefinido";
    this->tipo = "Indefinido";
    this->color = "Indefinido";
}

Animal::Animal(int cantidadDeOjos, int cantidadDePatas, std::string sonido_, std::string tipo, std::string color)
{
    this->cantidadDeOjos = cantidadDeOjos;
    this->cantidadDePatas = cantidadDePatas;
    this->sonido_ = sonido_;
    this->tipo = tipo;
    this->color = color;
}

Animal::~Animal()
{
}
