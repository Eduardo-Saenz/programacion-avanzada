#pragma once
#ifndef VEHICULO_LIB_CPP
#define VEHICULO_LIB_CPP
#include <iostream>
namespace db
{
    class Vehiculo
    {
    private:
        /* data */
        unsigned char llantas;
        bool status;
        unsigned char puertas;
        std::string color;
        std::string marca;
        std::string placas;
        float combustible;
        char marcha;
        std::string tipo;

    public:
        Vehiculo(/* args */);
        Vehiculo(unsigned char llantas, bool status, unsigned char puertas, std::string color, 
        std::string marca, std::string placas, float combustible, char marcha, std::string tipo); 
        Vehiculo(const Vehiculo &vehiculo);

        bool setLlantas(unsigned char llantas);
        unsigned char getLlantas();
        bool setStatus(bool status);
        bool getStatus();
        bool setPuertas(unsigned char puertas);
        unsigned char getPuertas();
        bool setColor(std::string color);
        std::string getColor();
        bool setMarca(std::string marca);
        std::string getMarca();
        bool setPlacas(std::string placas);
        std::string getPlacas();
        bool setCombustible(float combustible);
        float getCombustible();
        bool setMarcha(char marcha);
        char getMarcha();
        bool setTipo(std::string tipo);
        std::string getTipo();
    
        ~Vehiculo();
    };
    
    Vehiculo::Vehiculo(/* args */)
    {
        this->llantas = 0;
        this->status = false;
        this->puertas = 0;
        this->color = "Color indefinido";
        this->marca = "Marca indefinida";
        this->placas = "Placas indefinidas";
        this->combustible = 0;
        this->marcha = 0;
        this->tipo = "Tipo indefinido";
    }
    
    bool Vehiculo::setLlantas(unsigned char llantas)
    {
        this->llantas = llantas;
        return true;
    }
    unsigned char Vehiculo::getLlantas()
    {
        return this->llantas;
    }

    bool Vehiculo::setStatus(bool status)
    {
        this->status = status;
        return true;
    }
    bool Vehiculo::getStatus()
    {
        return this->status;
    }

    bool Vehiculo::setPuertas(unsigned char puertas)
    {
        this->puertas = puertas;
        return true;
    }
    unsigned char Vehiculo::getPuertas()
    {
        return this->puertas;
    }

    bool Vehiculo::setColor(std::string color)
    {
        this->color = color;
        return true;
    }
    std::string Vehiculo::getColor()
    {
        return this->color;
    }

    bool Vehiculo::setMarca(std::string marca)
    {
        this->marca = marca;
        return true;
    }
    std::string Vehiculo::getMarca()
    {
        return this->marca;
    }

    bool Vehiculo::setPlacas(std::string placas)
    {
        this->placas = placas;
        return true;
    }
    std::string Vehiculo::getPlacas()
    {
        return this->placas;
    }

    bool Vehiculo::setCombustible(float combustible)
    {
        if (combustible > 0)
        {
            this->combustible = combustible;
            return true;
        }
        else
        {
            return false;
        }
    }
    float Vehiculo::getCombustible()
    {
        return this->combustible;
    }

    bool Vehiculo::setMarcha(char marcha)
    {
        this->marcha = marcha;
        return true;
    }
    char Vehiculo::getMarcha()
    {
        return this->marcha;
    }

    bool Vehiculo::setTipo(std::string tipo)
    {
        this->tipo = tipo;
        return true;
    }
    std::string Vehiculo::getTipo()
    {
        return this->tipo;
    }

    Vehiculo::~Vehiculo()
    {
        std::cout << "La instancia ha sido eliminada" << std::endl;
    }
    
}
#endif