#include <math.h>
#include <stdio.h>
int main()
{
    int num;
    float x;

    // pedir a usuario que ingrese un entero
    printf("Ingrese un numero entero:");
    scanf("%f", &x);

    // verificar que el numero ingresado sea entero, de lo contrario volver a pedir un numero entero.

    num = ceil(x);

    while (num != x)
    {

        printf("Ingrese un numero entero:");
        scanf("%f", &x);
    }

    // si el numer es uno , imprimir 1
    printf("%d ", num);

    // mientras el numer sea mayor a 1
    while (num > 1)
    {
        // si es impar
        if (num % 2)
        {
            num = num * 3 + 1;
            printf(", %d ", num);
        }

        // si es par

        else
        {
            num = num / 2;
            printf(", %d ", num);
        }
    }
}