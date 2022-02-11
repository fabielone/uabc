#include <math.h>
#include <stdio.h>

float eqn(float num);

int main()
{
    float a, b, fa, fb, xra, xran, epc, epm;

    // pedir a usuario que ingrese un entero
    printf("Ingrese un numero entero:");
    scanf("%f", &a);

    fa = eqn(a);

    printf("%.1f", fa);

    // verificar que el numero ingresado sea entero, de lo contrario volver a pedir un numero entero.
};

float eqn(float num)
{

    /* local variable declaration */
    float result;

    result = num * num;
    return result;
};
