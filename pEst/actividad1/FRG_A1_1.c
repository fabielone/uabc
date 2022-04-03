// Fabiel Ramirez Garcia
// 9-Feb-20222
// Programa en C que a través de opciones (1.- MASCULINO 2.- FEMENINO ) 
//preguntar al usuario cual es su género y desplegar la leyenda “MASCULINO ”, “ FEMENINO” 
//Leer 2 numeros, realizar la suma y desplegar la suma de los 2 numeros.

#include <stdio.h>
#include "./../../libraries/getch.h"

/* Let's test it out */
int main(void) {
  char c;
  printf("(getche example) please type a letter: ");
  c = getche();
  printf("\nYou typed: %c\n", c);
  printf("(getch example) please type a letter...");
  c = getch();
  printf("\nYou typed: %c\n", c);
  return 0;
}