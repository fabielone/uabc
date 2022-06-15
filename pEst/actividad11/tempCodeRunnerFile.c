#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 40 
#include "./../../libraries/getch.h"
#include "./../../libraries/validation.h"


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
void llenarvectormanual(int arr[]);
void lvectoral(int arr[]);
void imprimirv(int arr[]);
void ordenarv(int arr[]);
void buscarv(int arr[]);


void main() {

  int arr[10];
    
  int sel;

  sel=menu();

  while(sel!=48){
  
          char term;
          int num;
          
          

    switch (sel)
  
      {

          case 49:
          
            llenarvectormanual(arr);
          break;

          case 50:
          lvectoral(arr);
          break;

          case 51:
          imprimirv(arr);
          break;

          case 52:
          ordenarv(arr);
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
    system("clear");
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

void llenarvectormanual(int arr[]){



  for(int i=0;i<10;i++){

    int c,p;

    printf("ingrese el numero para la posicion: %d \n",i);

    c=rInt(1,20);

    p=searchArray(arr,c);    

    
    while((c==-1)||(p==1)){

        puts("Incorrecto, por favor ingrese un numero entre 1 y 20 y q no sea repedito \n");
        
        c=rInt(1,20);
        p=searchArray(arr,c);

    }


    arr[i]=c;
    


  }


}


void lvectoral(int arr[]){



  for(int i=0;i<10;i++){

    int c,p;

    srand(time(NULL));

    c=rand()%19;

    p=searchArray(arr,c);    

    
    while((p==1)){

       
        c=rand()%19;
        p=searchArray(arr,c);

    }


    arr[i]=c;
    


  }


}


void imprimirv(int arr[]){

  for(int i=0;i<10;i++){

    printf("\n %d",arr[i]);
  }

  getch();
  
}

void ordenarv(int arr[]){


  int swap;


 for (int c = 0; c < 10- 1; c++)
            {
                for (int d = 0; d < 10 - c - 1; d++)
                {

                    if ((arr[d]) > (arr[d + 1]))
                    {

                        swap = arr[d];
                        arr[d] = arr[d + 1];
                        arr[d + 1] = swap;
                    }
                }
            }




}