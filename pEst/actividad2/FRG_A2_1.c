// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Leer 2 numeros, realizar la suma y desplegar la suma de los 2 numeros.
// FRG_ACT2_1.c
// done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void main()
{
    int primer,segundo,suma;
    puts("ingrese primer numero");
    scanf("%d",&primer);
    puts("ingrese el segundo numero");
    scanf("%d",&segundo);

    suma=primer+segundo;

    printf("%d + %d = %d \n",primer,segundo,suma);
}