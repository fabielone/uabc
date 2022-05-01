#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 40 
#include "./../../libraries/getch.h"


//Fabiel Ramirez Garcia
// PROGRAMA QUE PREGUNTE LA CANTIDAD DE VECES QUE DESEA QUE SE REALICE EL PROGRAMA DE FIBONACCI

void fibonacci(int n);

void main() {
    
int n;
    puts("ingrese el numero de veces para correr fibonacci");
    scanf("%d",&n);

    fibonacci(n);

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

