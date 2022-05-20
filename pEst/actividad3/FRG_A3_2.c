// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Algoritmo que lea el precio y la cantidad de un artículo que vas a comprar y calcular: Subtotal, Iva (16%) y el total a pagar
// FRG_A3_2.C
// done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cantidad;
    float precio, subtotal, total;

    puts("ingrese el precio del articulo");
    scanf("%f", &precio);
    puts("ingrese la cantidad de articulos");
    scanf("%d", &cantidad);

    subtotal = (float)cantidad * precio;

    total = subtotal * 1.16;
    printf("El subtotal es : %.2f \n", subtotal);
    printf("El total es %.2f", total);
}