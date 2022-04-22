// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Leer una medida en centímetros y desplegar la misma medida pero convertida en pies y pulgadas
// FRG_ACT2_4.c
// done 

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    
    float medida,conversionft, conversioninch;
    puts("ingrese medida en cm");
    scanf("%f",&medida);

    conversionft = medida/30.48;
    conversioninch = conversionft*12;

    printf("%.2f cm = %.2f ft \n",medida,conversionft);
    printf("%.2f cm = %.2f inches\n",medida,conversioninch);
}