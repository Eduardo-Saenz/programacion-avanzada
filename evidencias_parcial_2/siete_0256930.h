#pragma once
#ifndef _LIBCPP_ESCUELA
#define _LIBCPP_ESCUELA
#define MAX 50

struct Escuela
{
    char nombre [MAX] = {'\0'};
    char direccion [MAX] = {'\0'};
    char nivelEducativo [MAX] = {'\0'};
    Alumno * alumnos;
};

struct Alumno
{
    char nombre [MAX] = {'\0'};
    char apellidoPaterno [MAX] = {'\0'};
    char apellidoMaterno [MAX] = {'\0'};
    int edad {0};
    int grado {0};
    Materia * materias;
};

struct Materia
{
    char nombre [MAX] = {'\0'};
    int creditos {0};
    char horario [MAX] = {'\0'};
    Profesor * profesores;
};

struct Profesor
{
    char nombre [MAX] = {'\0'};
    char apellidoPaterno [MAX] = {'\0'};
    char apellidoMaterno [MAX] = {'\0'};
};
#endif