// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/* 
 Algoritmo que sirva para desplegar el Total de una llamada telefónica donde se pide 

como datos de entrada los ​ minutos​ y el ​ tipo de llamada​ , se cobra de la siguiente manera:

1.- Llamada Loca​ l $3.00 sin límite de tiempo  

2.-​ ​ Llamada Nacional​ $7.00 por los 3 primeros minutos y $2.00 minuto adicional 

3.-​ ​ Llamada Internacional​ $9.00 por los 2 primeros minutos y $4.00 minuto

adicional 

 Desplegar, ​ Subtotal​ ,​ Iva​ (16%) y ​ Tota​l.

*/

//ciclo anidado
// FRG_A4_11.C



#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void main()

{

   int minutos, selecion ;
   float subtotal , total ;

    puts("ingrese los minutos de la llamada");
    scanf("%d",&minutos);

    puts("ingrese el numero del tipo de llamada: 1. Local 2. Nacional 3. Internacional");
    scanf("%d",&selecion);

   if(selecion==1){

       subtotal = 3;
       total = subtotal*1.16;
       printf("el subtotal es : %.2f\n",subtotal);
       printf("el total es : %.2f\n",total);
       
   }
   if(selecion==2){

       if (minutos>3)
       {
           subtotal=7+(minutos-3)*2;
           total = subtotal*1.16;
       printf("el subtotal es : %.2f\n",subtotal);
       printf("el total es : %.2f\n",total);

       }
       else
       {
           subtotal=7;
           total = subtotal*1.16;
       printf("el subtotal es : %.2f\n",subtotal);
       printf("el total es : %.2f\n",total);

       }
       
        
   }
   if(selecion==3){
       if (minutos>2)
       {
           subtotal=9+(minutos-2)*4;
           total = subtotal*1.16;
       printf("el subtotal es : %.2f\n",subtotal);
       printf("el total es : %.2f\n",total);

       }
       else
       {
           subtotal=9;
           total = subtotal*1.16;
            printf("el subtotal es : %.2f\n",subtotal);
            printf("el total es : %.2f\n",total);

       }
       
     
   }

}

  
  
