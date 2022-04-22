// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Leer 2 números y realice las 4 operaciones básicas
// FRG_ACT2_2.c
// done


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
    printf("%d - %d = %d \n",primer,segundo,primer-segundo);
    printf("%d x %d = %d \n",primer,segundo,primer*segundo);
    printf("%d / %d = %f \n",primer,segundo,(float)primer/segundo);

}