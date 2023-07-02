//Ejercicio de la clase vehivulo con los sets y gets
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>
#include "Vehiculo_0256930.h"

int main(int argc, char const *argv[])
{
    db::Vehiculo vehiculo;
    unsigned char inputLlantas;
    bool inputStatus;
    unsigned char inputPuertas;
    std::string inputColor;
    std::string inputMarca;
    std::string inputPlacas;
    float inputCombustible;
    char inputMarcha;
    std::string inputTipo;

    std::cout << "Introduzca la cantidad de llantas de su vehiculo: ";
    std::cin >> inputLlantas;
    vehiculo.setLlantas(inputLlantas);
    std::cout << "Introduzca el estatus de su vehiculo: ";
    std::cin >> inputStatus;
    vehiculo.setStatus(inputStatus);
    std::cout << "Introduzca la cantidad de puertas de su vehiculo: ";
    std::cin >> inputPuertas;
    vehiculo.setPuertas(inputPuertas);
    std::cout << "Introduzca el color de su vehiculo: ";
    std::cin >> inputColor;
    vehiculo.setColor(inputColor);
    std::cout << "Introduzca la marca de su vehiculo: ";
    std::cin >> inputMarca;
    vehiculo.setMarca(inputMarca);
    std::cout << "Introduzca las placas de su vehiculo: ";
    std::cin >> inputPlacas;
    vehiculo.setPlacas(inputPlacas);
    std::cout << "Introduzca la cantidad de combustible de su vehiculo: ";
    std::cin >> inputCombustible;
    vehiculo.setCombustible(inputCombustible);
    std::cout << "Introduzca la marcha de su vehiculo: ";
    std::cin >> inputMarcha;
    vehiculo.setMarcha(inputMarcha);
    std::cout << "Introduzca el tipo de su vehiculo: ";
    std::cin >> inputTipo;
    vehiculo.setTipo(inputTipo);
    
    return 0;
}
