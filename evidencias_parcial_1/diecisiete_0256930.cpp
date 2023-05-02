//Ejemplo de un método y sus parametros
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

void saludar(std::string nombre);
void saludar(std::string nombre)
{
    std::cout << "Saludos a " << nombre << std::endl;
}
int main(int argc, char const *argv[])
{
    saludar("Eduardo");
    return 0;
}
