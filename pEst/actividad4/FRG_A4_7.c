// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
//  Algoritmo que lea 3 números y desplegar cuál número es el menor y su valor
//ciclo anidado
// FRG_A4_7.C
//done


#include <stdlib.h>
#include <stdio.h>


void main(){

 int primera,segunda,tercera,menor;
    puts("Ingrese primer numero");
    scanf("%d",&primera);

  



    puts("Ingrese segundo numero");
    scanf("%d",&segunda);

    

    puts("Ingrese tercer numero");
    scanf("%d",&tercera);

    

   

   if(primera>segunda){

       if(segunda<tercera){

           menor=segunda;

       }
       else{
           menor=tercera;
       }

   }
   else{

       if(primera<tercera){

           menor=primera;

       }

       else{
           menor=tercera;
       }

    
   }

    printf("El menor es %d \n",menor);


}


