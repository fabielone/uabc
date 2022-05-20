// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/* LSe tiene un terreno rectangular y se desea saber el costo de sembrar
pasto en el considerando que cada metro cuadrado cuesta $35.40. Además se
pide determinar qué Cantidad de alambre se necesitará para cercarlo sin tomar
en cuenta la altura de la cerca. Elaborar un programa que muestre tales totales.

*/
// FRG_A3_6.C
// done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float longitud, ancho, area, perimetro, costo;

    puts("INgrese longitud de terrono: ");
    scanf("%f", &longitud);

    puts("Ingresese ancho del terreno");
    scanf("%f", &ancho);

    area = longitud * ancho;
    costo = area * 35.40;
    perimetro = longitud * 2 + ancho * 2;

    printf("El costo para sembrar pasto es de : %.2f \n", costo);
    printf("Se necesitan %.2f metros de alembre\n", perimetro);
}