/* 
0256930 Eduardo Alejandro Sáenz Kammermayr
Examen final programacion avanzada

1.     ¿Qué es una clase base?
        Una clase base es aquella que le va a heredar sus propiedades a otras clases, como variables por ejemplo y metodos.

2.     ¿Qué es una clase derivada?
        Es una clase que utiliza las propiedades de una o varias clases base. esto sirve para la reutilizacion de codigo. 

3.     ¿Qué es un constructor copia?
        Es un constructor que recibe en sus parametros una clase del mismo tipo y le copia los atributos para iniciarse.

4.     ¿Qué es el destructor?
        Sirve para eliminar un objeto y se ejecuta en distintos casos como cuando se requiere destruir el objeto o cuando ya ha terminado el programa.

5.     Describa las características de los diferentes niveles de acceso para los miembros de una clase y que pasa en cada uno de los casos cuando se tiene herencia.
        El nivel de acceso "public" quiere decir que se puede acceder a sus elementos desde qualquier clase. 
        cuando se hereda como "public", solamente los métodos y atributos públicos de la clase base se transfieren como "public" de la clase derivada.

        Con el nivel "private", sólo pueden acceder a los métodos de la misma clase en la que las variable o métodos fueron declarados. 
        Cuando se heredan como "private", los métodos y atributos públicos y protegidos de la clase base se transfieren como "private" de la clase derivada.

        Los elementos con el nivel de acceso "protected", son accesibles desde cualquiera de las clases que las heredan y desde la misma clase.
        Cuando se heredan como "protected", los métodos y atributos públicos y protegidos de la clase base se transfieren como "protected" de la clase derivada.

6.     Escriba un programa que le permita al usuario ingresar n cantidad de elementos de una clase Alumno que tiene herencia de la clase Persona.

a.     Los miembros de la clase Alumno son (calificación, grado, id_alumno ,id_materia, carrera).

b.     Los miembros de la clase Persona son (nombre, edad, fecha_nacimiento, curp).

c.     Programar los métodos gets, sets para los respectivos atributos de cada una de las clases.
*/

#include <iostream>
#include "Alumnos.h"

int main(int argc, char const *argv[])
{
	int cantidadDeAlumnos{ 0 };

	std::cout << "Inserte el numero de alumnos que desea agregar: ";
	std::cin >> cantidadDeAlumnos;

	Alumnos* alumno = new Alumnos[cantidadDeAlumnos];

	for (int i = 0; i < cantidadDeAlumnos; i++)
	{
		std::string nombre{""};
		std::cout << "Inserte el nombre completo del alumno número " << (i + 1) << ": ";
		std::cin >> nombre;
		(alumno + i)->setNombre(nombre);

		int edad{0};
		std::cout << "inserte la edad del alumno número " << (i + 1) << ": ";
		std::cin >> edad;
		(alumno + i)->setEdad(edad);

		std::string fechaDeNacimiento{""};
		std::cout << "Inserte la fecha de nacimiento del alumno número " << (i + 1) << ": ";
		std::cin >> fechaDeNacimiento;
		(alumno + i)->setFechaDeNacimiento(fechaDeNacimiento);

		std::string curp{""};
		std::cout << "inserte el CURP del alumno número " << (i + 1) << ": ";
		std::cin >> curp;
		(alumno + i)->setCurp(curp);

		float calificacion{0};
		std::cout << "Inserte la calificación del alumno número " << (i + 1) << ": ";
		std::cin >> calificacion;
		(alumno + i)->setCalificacion(calificacion);

		std::string grado{""};
		std::cout << "Inserte el grado del alumno número " << (i + 1) << ": ";
		std::cin >> grado;
		(alumno + i)->setGrado(grado);

		std::string id_alumno{""};
		std::cout << "Inserte el ID del alumno número " << (i + 1) << ": ";
		std::cin >> id_alumno;
		(alumno + i)->setId_alumno(id_alumno);

		std::string id_materia{""};
		std::cout << "Inserte el ID de la materia del alumno número " << (i + 1) << ": ";
		std::cin >> id_materia;
		(alumno + i)->setId_materia(id_materia);

		std::string carrera{""};
		std::cout << "Inserte la carrera del alumno número " << (i + 1) << ": ";
		std::cin >> carrera;
		(alumno + i)->setCarrera(carrera);
	}
    
	std::cout << "----------------Datos de los alumnos----------------" << std::endl;
	for (int i = 0; i < cantidadDeAlumnos; i++)
	{
		std::cout << "Datos del alumno número " << (i + 1) << std::endl;

		std::cout << "Nombre: " << (alumno + i)->getNombre() << std::endl;

		std::cout << "Edad: " << (alumno + i)->getEdad() << std::endl;

		std::cout << "Fecha de nacimiento: " << (alumno + i)->getFechaDeNacimiento() << std::endl;

		std::cout << "CURP: " << (alumno + i)->getCurp() << std::endl;

		std::cout << "Calificación: " << (alumno + i)->getCalificacion() << std::endl;

		std::cout << "Grado: " << (alumno + i)->getGrado() << std::endl;

		std::cout << "ID del alumno: " << (alumno + i)->getId_alumno() << std::endl;

		std::cout << "ID de la materia: " << (alumno + i)->getId_materia() << std::endl;

		std::cout << "Carrera: " << (alumno + i)->getCarrera() << std::endl;
	}
}
