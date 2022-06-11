// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Algoritmo que sirva para calcular el área de un cuadrado
// FRG_A3_3.C
// done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int side, area;

    puts("ingrese la longitud del cuadrado");
    scanf("%d", &side);

    area = side * side;

    printf("el area del cuadrado es : %d", area);
}