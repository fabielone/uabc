#include <stdio.h>
#include "./../libraries/getch.h"
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

        printf(" ,%c = %d ", tecla, tecla);
        i++;

    } while (tecla != 0);
}