#pragma once
#include <iostream>

class Producto
{
private:
    std::string nombre;
    std::string marca;
    std::string fechaCaducidad;
    std::string clasificacion;
    int codigo;
    int cantidad;

public:
    //set
    bool setNombre(std::string nombre);
    bool setMarca(std::string marca);
    bool setFechaCaducidad(std::string fechaCaducidad);
    bool setClasificacion(std::string clasificacion);
    bool setCodigo(int codigo);
    bool setCantidad(int cantidad);
    Producto(std::string nombre, std::string marca, std::string fechaCaducidad, std::string clasificacion, int codigo);
    Producto(/* args */);
    //get
    std::string getNombre();
    std::string getMarca();
    std::string getFechaCaducidad();
    std::string getClasificacion();
    int getCodigo();
    int getCantidad();
    ~Producto();

};

Producto::Producto(std::string nombre, std::string marca, std::string fechaCaducidad, std::string clasificacion, int codigo)
{
    this->nombre = nombre;
    this->marca = marca;
    this->fechaCaducidad = fechaCaducidad;
    this->clasificacion = clasificacion;
    this->codigo = codigo;
}

Producto::Producto(/* args */)
{
    this->nombre = "No asignado";
    this->marca = "No asignada";
    this->fechaCaducidad = "No asignada";
    this->clasificacion = "No asignada";
    this->codigo = 0;
    this->cantidad = 0;
}

bool Producto::setNombre(std::string nombre)
{
    this->nombre = nombre;
    return true;
}

std::string Producto::getNombre()
{
    return this->nombre;
}

bool Producto::setMarca(std::string marca)
{
    this->marca = marca;
    return true;
}

std::string Producto::getMarca()
{
    return this->marca;
}

bool Producto::setFechaCaducidad(std::string fechaCaducidad)
{
    this->fechaCaducidad = fechaCaducidad;
    return true;
}

std::string Producto::getFechaCaducidad()
{
    return this->fechaCaducidad;
}

bool Producto::setClasificacion(std::string clasificacion)
{
    this->clasificacion = clasificacion;
    return true;
}

std::string Producto::getClasificacion()
{
    return this->clasificacion;
}

bool Producto::setCodigo(int codigo)
{
    this->codigo = codigo;
    return true;
}

int Producto::getCodigo()
{
    return this->codigo;
}

bool Producto::setCantidad(int cantidad)
{
    this->cantidad = cantidad;
    return true;
}

int Producto::getCantidad()
{
    return this->cantidad;
}

Producto::~Producto()
{
}
