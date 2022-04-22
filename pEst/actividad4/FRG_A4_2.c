// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
//  Algoritmo que lea un número entero, y desplegar si el número es “PAR” o “IMPAR”
// condicion simple
// FRG_A4_1.C
//done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int c;
  system("clear");
  printf("Ingrese un numero entero\n");
  scanf("%d",&c);


  if (c%2)
  {
    printf("\nimpar\n");
  }
  if (c%2==0)
  {
    printf("\npar\n");
  }
}