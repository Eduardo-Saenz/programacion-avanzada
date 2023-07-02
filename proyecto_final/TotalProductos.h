#pragma once
#include <iostream>
#include "Producto.h"
#include <vector>

class TotalProductos
{
private:
    std::vector<Producto> productos;

public:
    void agregarProducto(const Producto& producto);
    void mostrarProductosAnimales();
    void mostrarProductosVegetales();
    void mostrarTotalProductos();
    TotalProductos(/* args */);
    ~TotalProductos();
};

TotalProductos::TotalProductos(/* args */)
{
}

TotalProductos::~TotalProductos()
{
}

void TotalProductos::agregarProducto(const Producto& producto) 
{
    productos.push_back(producto);
}

void TotalProductos::mostrarProductosAnimales() 
{
    std::cout << "\nPRODUCTOS DE ORIGEN ANIMAL:\n";
    for (auto& producto : productos) 
    {
        if (producto.getClasificacion() == "animal") 
        {
            std::cout << "Nombre: " << producto.getNombre() << std::endl;
            std::cout << "Marca: " << producto.getMarca() << std::endl;
            std::cout << "Fecha de caducidad: " << producto.getFechaCaducidad() << std::endl;
            std::cout << "Código: " << producto.getCodigo() << std::endl;
            std::cout << "------------------------------\n";
        }
    }
}

void TotalProductos::mostrarProductosVegetales() 
{
    std::cout << "\nPRODUCTOS DE ORIGEN VEGETAL:\n";
    for (auto& producto : productos) 
    {
        if (producto.getClasificacion() == "vegetal") 
        {
            std::cout << "Nombre: " << producto.getNombre() << std::endl;
            std::cout << "Marca: " << producto.getMarca() << std::endl;
            std::cout << "Fecha de caducidad: " << producto.getFechaCaducidad() << std::endl;
            std::cout << "Código: " << producto.getCodigo() << std::endl;
            std::cout << "------------------------------\n";
        }
    }
}

void TotalProductos::mostrarTotalProductos()
{
    std::cout << "\nTOTAL DE PRODUCTOS EN EL INVENTARIO: " << productos.size() << std::endl;
}