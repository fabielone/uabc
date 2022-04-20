// Fabiel Ramirez Garcia
// 9-Feb-20222
// Programa en C que lea 3 números y desplegar cuál número es el mayor y su valor
//
// FRG_ACT1_1.c
//done

#include <stdio.h>
#include <stdlib.h>

void main(){

 int primera,segunda,tercera,mayor=0;
    puts("Ingrese primer numero");
    scanf("%d",&primera);

    if(mayor<primera){

        mayor=primera;
    }



    puts("Ingrese segundo numero");
    scanf("%d",&segunda);

     if(mayor<segunda){

        mayor=segunda;
    }

    puts("Ingrese tercer numero");
    scanf("%d",&tercera);

     if(mayor<tercera){

        mayor=tercera;
    }

    printf("El Mayor es %d \n",mayor);


}


