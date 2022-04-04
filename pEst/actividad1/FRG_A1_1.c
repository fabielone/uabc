// Fabiel Ramirez Garcia
// 9-Feb-20222
// Programa en C que a través de opciones (1.- MASCULINO 2.- FEMENINO )
// preguntar al usuario cual es su género y desplegar la leyenda “MASCULINO ”, “ FEMENINO”

// FRG_ACT1_1.c

#include <stdio.h>
#include "./../../libraries/getch.h"
#include <stdlib.h>

int main(void)
{
  char c;
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