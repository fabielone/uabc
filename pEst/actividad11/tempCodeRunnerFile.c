#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 40 
#include "./../../libraries/getch.h"


//Fabiel Ramirez Garcia
/* 
PROGRAMA CON UNA LIBRERÍA (FUNCIONES DE VALIDAR NÚMEROS)  
soolo numeros , no repetidos 
EL PROGRAMA DEBERÁ CONTENER EL SIGUIENTE MENÚ Y SUS FUNCIONES


MENÚ

1.- LLENAR VECTOR (MANUALMENTE)

2.- LLENAR VECTOR ALEATORIA MENTE

3.- IMPRIMIR VECTOR

4.- ORDENAR VECTOR

5.- BUSCAR VALOR EN VECTOR

0.- SALIR



NOTA: EL PROGRAMA DEBERÁ REPETIRSE CUANTAS VECES LO DESEE EL USUARIO

NOTA2: EL VECTOR DE 10 POSICIONES CON NÚMEROS DEL 1 AL 20 ( SIN REPETIR)

NOTA3: VALIDAR QUE SI YA ESTA ORDENADO NO VOLVER ORDENAR. 

*/

void fibonacci(int n);
int menu();


void main() {

  int arr[10];
    
  int sel;

  sel=menu();

  while(sel!=48){
  
          char term;
          int num;
          scanf("%*c");
          

    switch (sel)
  
      {

          case 49:
          
            if(scanf("%d%c", &num, &term) != 2 || term != '\n'){
            printf("failure\n");
            }
            else{
            printf("valid integer followed by enter key\n");
            }
          break;

          case 50:
          break;

          case 51:
          break;

          case 52:
          break;

  
          default:
          break;
  
      }

 sel=menu();


}

puts("bye");


}

void fibonacci(int n){

  int sum=0,sum1=0,sum2=1;


  for(int i =0;i<n;i++){

    if(i==0){
      printf("%d,",i);

    }
    else{



      
      sum=sum1+sum2;

      

      printf("%d,",sum2);
      sum1=sum2;
      sum2=sum;

    }

    
  }


  
   
}

int menu(){

    int opc;
    do
  {
   puts("Menu");
   puts("1.- LLENAR VECTOR (MANUALMENTE)");
   puts("2.- LLENAR VECTOR ALEATORIA MENTE");
   puts("3.- IMPRIMIR VECTOR");
   puts("4.- ORDENAR VECTOR");
   puts("0.- SALIR");
    opc = getch();
    

    if ((opc >= 48 && opc <= 52))
    {

      
      return opc;
    }
    else
    {
     puts("opcion no valida");
    }
  } while (opc < 48 || opc > 52);

    



}
