// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Algoritmo que sirva para calcular el volumen de un cilindro
// FRG_A3_5.C
// done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    float radio, altura, area;

    puts("ingrese radio de la base del cilindro");
    scanf("%f", &radio);

    puts("ingrese la altura del cilindro");
    scanf("%f", &altura);

    area = 3.14 * radio * radio * altura;

    printf("el area del cilindro es : %.2f", area);
}