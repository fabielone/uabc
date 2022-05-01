// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/*
En los cabos la embarcación finisterra que tiene fondo de cristal, solo sale a navegar con un máximo de 10 turistas o un máximo de 700 kilos de pasajeros. (preguntar el peso a cada turista) con un máximo de 15% de sobrepeso. desplegar el promedio de peso de los turistas y cual de los 2 condiciones se cumplió.

*/
// FRG_A8_5.c
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../libraries/getch.h"

int salir();

void main()
{
    int counter = 0;
    float peso, total_peso = 0;
    int c;
    do
    {

        printf("ingrese peso de pasajero #%d\n", counter + 1);
        scanf("%f%*c", &peso);
        total_peso += peso;

        counter++;

        c = salir();

    } while (c != 0 && counter < 12);

    printf("promedio de peso es %.2f\n", total_peso / counter);

    if (total_peso < 700 * 1.15)
    {
        puts("El peso esta sobre un rango aceptable");
    }
    else
    {
        puts("el peso sobre pasa los limites del barco");
    }

    if (counter < 10)
    {
        puts("El numero de pasajeros es aceptable");
    }
    else
    {
        puts("el numero de pasajeros es inaceptable");
    }
}

int salir()
{

    int op;
    puts("presione 0 para salir o cualquier tecla para continuar");
    op = getch();
    if (op == 48)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}