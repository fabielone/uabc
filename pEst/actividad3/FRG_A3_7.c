// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Escriba un algoritmo que reciba como entrada las longitudes de los dos catetos a y b de
// un triángulo rectángulo, y que entregue como salida el largo de la
// hipotenusa c del triángulo, dado por el teorema de Pitágoras: c2=a2+b2.

// FRG_A3_7.C
// done
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a, b, c;

    puts("ingrese cateto a");
    scanf("%f", &a);

    puts("ingrese cateto b");
    scanf("%f", &b);

    c = sqrt(a * a + b * b);

    printf("el largo de la hipotenusa es : %.2f", c);
}