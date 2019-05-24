#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
}eEmpleado;

eEmpleado* nuevoEmpleado();
int mostrarEmpleado(eEmpleado* unEmpleado)
{
    int isNULL
    if(unEmpleado!=NULL)
}

int main()
{
    eEmpleado* unEmpleado;

    unEmpleado = nuevoEmpleado();

    unEmpleado->legajo = 100;
    strcpy(unEmpleado->nombre,"Pedro");
    unEmpleado->sueldo=10000;

        eEmpleado* otroEmpleado;

    otroEmpleado = nuevoEmpleado

    otroEmpleado->legajo = 101;
    strcpy(otroEmpleado->nombre, "maria");
    otroEmpleado->sueldo=10000;
    return 0;
}

eEmpleado* nuevoEmpleado()
{
    eEmpleado* retornoEmpleado;
    retornoEmpleado = (eEmpleado*) malloc(sizeof(eEmpleado));
    return retornoEmpleado;
}

