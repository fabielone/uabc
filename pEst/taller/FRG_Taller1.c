// Fabiel Ramirez Garcia
// 1-Abri-20222
/*
HACER UN PROGRAMA QUE CONTENGA UNA FUNCIÓN,    QUE LEA UNA
FRASE QUE SOLO PERMITA LETRAS Y EL ESPACIO.

DEBERÁ TENER LA FUNCIÓN UN MÁXIMO DE CARACTERES PERMITIDOS  Y
 LA LA CADENA NO PODRÁ COMENZAR CON ESPACIO, Y SE PERMITEN
  LOS ESPACIOS PERO SOLO 1
 */

// FRG_T1_1.c

#include <stdio.h>
#include "../../libraries/getch.h"
#include <string.h>
#include <stdlib.h>

void funcion();

void main()
{

    funcion();
}

void funcion()
{

    int i = 0, tecla, a, b = 0, c;
    system("clear");
    printf("Ingrese maximo de caracteres: ");
    scanf("%d%*c", &a);
    do
    {
        tecla = getch();
        if (b == 1 && tecla == 32)
        {

            printf("%c", &tecla);
            i++;
            b++;
        }
        if (tecla > 64 && tecla < 91 || tecla > 96 && tecla < 123)
        {
            printf("%c", tecla);
            i++;
            b = 1;
        }

    } while (i < a);
}