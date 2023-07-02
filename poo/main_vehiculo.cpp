#include <iostream>
#include "Vehiculo.h"

int main(int argc, char const *argv[])
{
    db::Vehiculo vehiculo;
    std::cout << vehiculo.getColor() << "\n";
    vehiculo.setColor("Rojo");
    std::cout << vehiculo.getColor() << "\n";
    if (vehiculo.setCombustible(-5))
    {
        std::cout << "Se actualizó la variable combustible\n";
    }
    else
    {
        std::cout << "No se actualizó la variable combustible\n";
    }
    
    if (vehiculo.getStatus())
    {
        std::cout << "El vehiculo está encendido\n";
    }
    else
    {
        std::cout << "El vehiculo está apagado\n";
    }
    
    db::Vehiculo vehiculo;
    vehiculo.setColor("Rojo");
    db::Vehiculo b(vehiculo);
    std::cout << "Color: " << b.getColor() << "\n";
    db::Vehiculo c(2, true, 0, "Azul", "Kawasaki", "13m2c", 8, 'p', "Moto");
    std::cout << "Llantas: " << (int) c.getLlantas() << "\n";

    return 0;
}
