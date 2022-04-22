// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
//  Algoritmo que a través de opciones (1.- HOMBRE 2.- MUJER ) preguntar al usuario cual
// es su SEXO y desplegar la leyenda “HOLA, ERES HOMBRE ”, “ HOLA, ERES MUJER”
//condicion compuesta
// FRG_A4_1.C
//done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char c;
  //system("clear");
  printf("Cual es su genero 1.-Masculino 2.-Femenino : ");
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