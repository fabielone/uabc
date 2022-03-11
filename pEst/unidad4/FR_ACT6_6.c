#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 40 

//Fabiel Ramirez Garcia
//PROGRAMA QUE PIDA UN NÚMERO Y DESPLEGAR LA CANTIDAD DE DÍGITOS QUE TIENE EL NÚMERO.
void funcion();

int main() {
    srand(time(NULL));
    funcion();
    return 0;

}

void funcion(void) {

    int num;

  do
  {
    printf("Ingrese un numero entre 1 y 20:");
   scanf("%d",&num); 
  } 
  while (num<1||num>20);

  for(int i=1;i<11;i++)
    {
      printf("%dx%d=%d\n",num,i,num*i);
    }
  
     

    
  }