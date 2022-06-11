// Fabiel Ramirez Garcia
// Due date: 3/15/22, 11:59 PM

// REALIZA LOS SIGUIENTES EJERCICIOS EN C SUBIR UN PROGRAMA QUE LLAME LOS 3 EJERCICIOS
// MENÚ
// 1.- FIBONACCI
// 2.- FACTORIAL
// 3.- CANTIDAD DE DÍGITOS
// 1.- PROGRAMA QUE PREGUNTE LA CANTIDAD DE VECES QUE DESEA QUE SE REALICE EL PROGRAMA DE FIBONACCI
// 2.- PROGRAMA QUE PIDA UN NÚMERO Y DESPLEGAR LA SALIDA DE FACTORIAL DE UN NÚMERO DADO.
// EJEMPLO
// 5 * 4 =20
// 20* 3 = 60
// 60*2 =120
// FACTORIAL DE 5 = 120
// 3.- PROGRAMA QUE PIDA UN NÚMERO Y DESPLEGAR LA CANTIDAD DE DÍGITOS QUE TIENE EL NÚMERO.
// EJEMPLO
// 25 TIENE 2 DÍGITOS 1
// 2578 TIENE 5 DÍGITOS

// FRG_A6_P2.C
// done

#include <stdio.h>
#include <stdlib.h>
#include "../../libraries/getch.h"
#define N 10
//*** PROTOTIPOS DE FUNCIONES  ******
int msges();
int msges_exit();
void menu();
void Fibonacci(void);
void Factorial(void);
void Digitos(void);
//****  main principal  *********
int main()
{
    menu();

    return 0;
}
//  *** DESARROLLO DE LAS FUNCIONES  ******
//*********************
int msges()
{
    int op;
    system("clear");
    printf("   M  E   N   U \n");
    printf("1.- FIBONACCI \n");
    printf("2.- FACTORIAL \n");
    printf("3.- DIGITOS \n");
    printf("0.- SALIR  \n");
    printf("ESCOGE UNA OPCION: ");
    scanf("%d", &op);
    return op;
}
//****************
int msges_exit()
{
    int op;
    puts("presione 0 para regresar al menu principal");
    do
    {
        op = getch();
    } while (op != 48);

    return op;
}
//****************
void menu()
{
    int op;
    do
    {
        op = msges();
        switch (op)
        {
        case 1:
            Fibonacci();
            puts(" ");
            msges_exit();
            break;
        case 2:
            Factorial();
            puts(" ");
            msges_exit();
            break;
        case 3:
            Digitos();
            puts(" ");
            msges_exit();
            break;
        }

    } while (op != 0);
}

//*********************
void Fibonacci(void)
{
    //  VARIALES LOCALES
    system("clear");
    //  AQUI DESARROLLO PROGRAMA
    printf("   FIBONACCI\n");
    int n;
    puts("ingrese el numero de veces para correr fibonacci");
    scanf("%d", &n);
    int sum = 0, sum1 = 0, sum2 = 1;

    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            printf("%d,", i);
        }
        else
        {

            sum = sum1 + sum2;

            printf("%d,", sum2);
            sum1 = sum2;
            sum2 = sum;
        }
    }
}

//*************************
void Factorial(void)
{

    //  VARIALES LOCALES
    system("clear");
    //  AQUI DESARROLLO PROGRAMA
    printf("   FACTORIAL\n");
    int product = 1;
    int n;
    puts("ingrese un numero para obtener su factorial");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        product = product * i;

        if (i < n)
        {

            printf("%d*", i);
        }
        else if (i == n)
        {
            printf("%d", i);
            printf("=%d", product);
        }
    }
}
//****************************
void Digitos(void)
{
    //  VARIALES LOCALES
    system("clear");
    //  AQUI DESARROLLO PROGRAMA
    printf("   DIGITOS\n");
    int n;
    int count = 0;
    printf("Ingrese un numero : ");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("\nEl numero de digitos en el numero son  : %d", count);
}