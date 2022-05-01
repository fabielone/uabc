// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/*
 Realiza una función en C que imprima las tablas de multiplicar del 1 al 10

     EJEMPLO:

    TABLA DEL 1

1 * 1 = 1

1 * 2 = 2

.1*10 = 10

PRESIONA UNA TECLA PARA CONTINUAR.

NOTA:  Utilizar limpiar pantalla, esperar tecla



*/
// FRG_A8_3.C
// done
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../libraries/getch.h"

void main()
{
    for (int i = 0; i < 10; i++)
    {
        system("clear");
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", i + 1, j + 1, (j + 1) * (i + 1));
        }

        puts("presione una tecla para continuar");
        getch();
    }
}