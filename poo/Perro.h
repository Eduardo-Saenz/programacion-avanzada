#pragma once
#include <iostream>
#include "Animal.h"

class Perro : protected Animal
{
private:
    std::string raza;
public:
    Perro(/* args */);
    Perro(int cantidadDeOjos, int cantidadDePatas, std::string sonido_, std::string tipo, std::string color, std::string raza);
    //set
    bool setPatas(int patas);
    bool setOjos(int ojos);
    bool setSonido(std::string sonido);
    bool setTipo(std::string tipo);
    bool setColor(std::string color);
    bool setRaza(std::string raza);
    //get
    int getPatas;
    int getOjos;
    std::string getSonido;
    std::string getTipo;
    std::string getColor;
    std::string getRaza;

    void sonido();
    void correr();
    ~Perro();
};

Perro::Perro(/* args */):Animal()
{
    this->raza = "Indefinido";
}

Perro::Perro(int cantidadDeOjos, int cantidadDePatas, std::string sonido_, std::string tipo, std::string color, std::string raza) : Animal(cantidadDePatas, cantidadDeOjos, sonido_, tipo, color)
{
    this->raza = raza;
}

bool Perro::setPatas(int patas)
{
    if (patas < 0)
    {
        return 0;
    }
    
}

void Perro::correr()
{
    std::cout << "El perro corrió" << std::endl;
}

Perro::~Perro()
{
}
