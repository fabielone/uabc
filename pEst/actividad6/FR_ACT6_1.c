

// Fabiel Ramirez Garcia
// Due date: 3/15/22, 11:59 PM

// Función en "C" que genere 40 números aleatorios entre el 0 y 200, desplegar los números y la
// leyenda de cada número si es par o impar , la cantidad de los números pares e impares así como
//  la suma de los números pares o impares.

// FRG_A6_1.C

//done

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 40

void funcion();

int main()
{
    srand(time(NULL));
    funcion();
    return 0;
}

void funcion(void)
{

    int num, cpar = 0, sumpar = 0, sumimpar = 0;

    for (int i = 0; i < N; i++)
    {
        num = rand() % 201;
        printf("%d", num);
        if (num % 2 == 0)
        {
            printf("[par]\n");
            cpar++;
            sumpar = sumpar + num;
        }
        else
        {
            printf("[impar]\n");

            sumimpar = sumimpar + num;
        }
    }

    printf("Numeros de Par %d\n", cpar);
    printf("Suma de Pares %d\n", sumpar);
    printf("Numeros de Impar %d\n", 40 - cpar);
    printf("Suma de Impares %d\n", sumimpar);
}