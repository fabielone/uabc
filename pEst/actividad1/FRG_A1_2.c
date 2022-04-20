// Fabiel Ramirez Garcia
// 9-Feb-20222
// Programa en C que lea un número entero, y desplegar si el número es “PAR” o “IMPAR”
//
// FRG_ACT1_2.c
//done

#include <stdio.h>
#include "./../../libraries/getch.h"
#include <stdlib.h>

void main()
{
  int c;
  system("clear");
  printf("Ingrese un numero entero\n");
  scanf("%d",&c);


  if (c%2)
  {
    printf("\nimpar\n");
  }
  else
  {
    printf("\npar\n");
  }
  

}
 
  

