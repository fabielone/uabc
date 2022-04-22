// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Leer una temperatura en grados centígrados y desplegarla en Grados Fahrenheit y grados kelvin
// FRG_ACT2_5.c

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
     float tempc,tempf, tempk;
    puts("ingrese temperatura en grados centigrados");
    scanf("%f",&tempc);

    tempf = tempc*1.8+32;
    tempk = tempc + 273.15;

    printf("%.2f centigrados = %.2f fahrenheit \n",tempc,tempf);
    printf("%.2f centrigrados = %.2f grados kelvin\n",tempc,tempk);
}