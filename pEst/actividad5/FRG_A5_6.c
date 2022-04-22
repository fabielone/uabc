// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
//  Función en C que lea 3 números y despegarlos en forma ascendente (usar AND o OR)


// FRG_A5_1.C
//done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
  int prim,seg,ter;

    puts("ingrese el primer numero");
    scanf("%d",&prim);
    puts("ingrese el segundo numero");
    scanf("%d",&seg);
    puts("ingrese el tercer numero");
    scanf("%d",&ter);

    if(prim>=seg||prim>=ter){

        

        if(seg>ter){

            if (prim>seg)
            {
                printf("%d,%d,%d",ter,seg,prim);
            }
            else
            {
               printf("%d,%d,%d",ter,prim,seg);
            }
            

        }

        else{

            if (prim>ter)
            {
                printf("%d,%d,%d",seg,ter,prim);
            }
            else
            {
                printf("%d,%d,%d",seg,prim,ter);
            }
            


        }


    }
    else{

        //primer es el mas chico
        if(seg>ter){

            printf("%d,%d,%d",prim,ter,seg);


        }
        else{
             printf("%d,%d,%d",prim,seg,ter);

        }

    }


}