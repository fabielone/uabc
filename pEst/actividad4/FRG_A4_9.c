// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
//  Algoritmo que lea 3 números y desplegar los 3 números en orden ascendente

//ciclo anidado


// FRG_A4_9.C
//done

#include <stdio.h>
#include <stdlib.h>


void main(){

 int primera,segunda,tercera,chico,medio,grande;
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
                chico=primera;
                medio=segunda;
                grande=tercera;
             }
  
            else
            {
                chico=primera;
                medio=tercera;
                grande=segunda;
             }
        }
  
        else
        {   chico=tercera;
            medio=primera;
            grande=segunda;
        }
  }
  
  else
  {
       if (segunda<tercera)
         {
            if (primera<tercera)
            {
                chico=segunda;
                medio=primera;
                grande=tercera;
            }
  
            else
             {
                 chico=segunda;
            medio=tercera;
            grande=primera;

            }
         }
  
        else
            {
                chico=tercera;
                medio=segunda;
                grande=primera;
            }
    }
  
    


    printf("%d,%d,%d, \n",chico,medio,grande);


}