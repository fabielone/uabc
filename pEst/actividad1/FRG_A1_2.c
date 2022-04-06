// Fabiel Ramirez Garcia
// 9-Feb-20222
// Programa en C que lea un número entero, y desplegar si el número es “PAR” o “IMPAR”
//
// FRG_ACT1_2.c


#include <stdio.h>
#include "./../../libraries/getch.h"
#include <stdlib.h>

int main(void)
{
  int c;
  system("clear");
  printf("Cual es su genero 1.-Masculino 2.-Femenino\n");
  c = getche();

  if (c == 49)
  {
    printf("\nMASCULINO\n");
  }
  else if (c == 50)
  {
    printf("\nFEMENINO\n");
  }
  else
  {
    printf("\nno entendi\n");
  }

}