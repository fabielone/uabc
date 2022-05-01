// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/*
- Realizar función en C para un programa que sirva para leer  n cantidad de números dentro de un rango dado por el usuario, desplegar la suma de los números y la media aritmética de los números válidos dentro del rango.



*/
// FRG_A8_4.C
// done
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void main()
{
    int n;
    float min, max, suma = 0, num;
    puts("ingrese la cantidad de numeros que quiere leer");
    scanf("%d", &n);
    puts("ingrese limite inferior");
    scanf("%f", &min);
    puts("ingrese limite superior");
    scanf("%f", &max);
    for (int i = 0; i < n; i++)
    {

        do
        {
            system("clear");
            printf("# %d/%d\n", i + 1, n);
            printf("ingrese un numero entre %.2f y %.2f :", min, max);
            scanf("%f", &num);
        } while (num < min || num > max);
        suma = suma + num;
    }

    printf("la suma es : %.2f y la media es : %.2f", suma, suma / (float)n);
}