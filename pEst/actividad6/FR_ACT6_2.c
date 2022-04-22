#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 35 

//Fabiel Ramirez Garcia
//Función en "C" que genere N (35) cantidad de números (100 -200), 
//desplegar al final el número mayor y el número menor. 

//done



void funcion();

int main() {
    srand(time(NULL));
    funcion();
    return 0;

}

void funcion(void) {

    int num,min=150,max=150;

    for(int i=0;i<N-1;i++)
   { 
   num = (rand()%101)+100;
   printf("%d\n",num);
   if(num<min){
     min=num;
   }
   if(num>max){
     max=num;
   }
   
   
   
   }
   
   

   printf("Numero min %d\n",min);
   printf("Numero max %d\n",max);
   


}