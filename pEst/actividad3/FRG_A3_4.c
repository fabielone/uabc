// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Algoritmo que sirva para calcular el área de un trapecio

// FRG_A3_4.C

// done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float side1, side2, height, area;

    puts("ingrese la longitud del primer lado paralelo");
    scanf("%f", &side1);

    puts("ingrese la longitud del segundo lado paralelo");
    scanf("%f", &side2);

    puts("ingrese la distancia entre los lados parelelos");
    scanf("%f", &height);

    area = .5 * (side1 + side2) * height;

    printf("el area del trapecio es : %.2f", area);
}