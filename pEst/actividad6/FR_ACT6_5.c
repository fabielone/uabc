#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 40

// Fabiel Ramirez Garcia
// PROGRAMA QUE PIDA UN NÚMERO Y DESPLEGAR LA SALIDA DE FACTORIAL DE UN NÚMERO DADO.

void factorial(int n);

void main()
{

  factorial(5);
}

void factorial(int n)
{

  int product = 1;

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
