//Programa que explica los conceptos de la programacion orientada a objetos en C++
//0256930 Eduardo Alejandro Sáenz Kammermayr

#include <iostream>

class Conceptos
{
    protected://solo se puede acceder si eres miembro de la clase. puede haber metodos protegidos tambien
        int datoProtegido{0};

    private: //cuando hay herencia no se vuelve parte de 
        int dato{0};
    
    public:
        int datoPublico{0};
        Conceptos(); //constructor, lleva el mismo nombre de la clase y se ejecuta siempre que se crea el objeto
        Conceptos(int dato);

        Conceptos(Conceptos &copia); //constructor copia
        int leerDato();
        void escribirDato(int dato);
        ~Conceptos(); //destructor
};
Conceptos::Conceptos()
{
    this->dato = 0;//"this" es el equivalente a "self" en python
}
Conceptos::Conceptos(Conceptos &copia)
{
    this->dato = copia.dato;
}
Conceptos::Conceptos(int dato)
{
    this->dato = dato;
}
Conceptos::~Conceptos()
{
    std::cout << "Se eliminó la instancia\n";
}
int Conceptos::leerDato()
{
    return this->dato = 0;
}
void Conceptos::escribirDato(int dato)
{
    this->dato = dato;
}