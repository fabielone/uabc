// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
//  Función en C que lea 3 números y desplegar cuál número es el mayor (usar AND o OR)
// FRG_A5_1.C
// done

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

    if(prim>=seg&&prim>=ter){
        
        printf("%d es el mayor",prim);
    }

    else if(seg>=prim&&seg>=ter){

        printf("%d es el mayor ", seg);

    }

    else{
        printf("%d es el mayor",ter);
    }

    
}