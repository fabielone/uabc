// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Calcular el área de un triángulo a=.5b*h
// FRG_ACT2_3.c
//done 
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int altura,base;
    float area;
    puts("ingrese altura de triangulo");
    scanf("%d",&altura);
    puts("ingrese base de triangulo");
    scanf("%d",&base);

    area = (float)(altura*base*.5);

    printf(" El area del triangulo es : %f",area);
}