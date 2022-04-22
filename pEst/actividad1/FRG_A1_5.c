// Fabiel Ramirez Garcia
// 9-Feb-20222
// Programa en C que lea 3 números y desplegar cuál número es del medio y su valor
//
// FRG_ACT1_5.c
//done

#include <stdio.h>
#include <stdlib.h>

void main(){

 int primera,segunda,tercera,medio;
    puts("Ingrese primer numero");
    scanf("%d",&primera);

   



    puts("Ingrese segundo numero");
    scanf("%d",&segunda);

     

    

    puts("Ingrese tercer numero");
    scanf("%d",&tercera);

     
  if (primera<segunda)
  {
       if (primera<tercera)
        {
            if (segunda<tercera)
            {
                medio=segunda;
             }
  
            else
            {
                medio=tercera;
             }
        }
  
        else
        {
            medio=primera;
        }
  }
  
  else
  {
       if (segunda<tercera)
         {
            if (primera<tercera)
            {
                medio=primera;
            }
  
            else
             {
            medio=tercera;

            }
         }
  
        else
            {
                medio=segunda;
            }
    }
  
    


    printf("El del medio  es %d \n",medio);


}



