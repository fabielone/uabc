// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/* 
Programa que sirva para calcular el salario semanal de un trabajador donde se obtiene 

como dato de entrada las ​ horas semanales​ trabajadas, el ​ salario por hora​ . 

El programa deberá calcular el ​ salario normal​ , ​ salario extra​ y ​ salario total​ , considerando

lo siguiente:  

● Jornada Normal de 40 horas. 

● El salario normal se considera las horas trabajadas menores o igual a la jornada 

normal

● Salario extra se considera las horas trabajadas mayores a la jornada normal y se 

pagan dobles las primeras 9 y triples a partir de la décima hora extra 

 

Nota:​ Desplegar todos los datos (Salario x hora, Horas Trabajadas, Salario normal, Salario

extra y Salario Total) 


*/
// FRG_A4_1.C
//done 

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float horas,salario,normal,extra,total;
   puts("ingrese horas semanales trabajadas");
   scanf("%f",&horas);

   puts("ingrese salario por hora :");
   scanf("%f",&salario);

   if(horas>40){

       if (horas>49)
       {
           normal=salario*40;
           extra=(9*salario*2)+(horas-49)*salario*3;
           total=normal + extra;
           printf("el pago normal es : %f\n",normal);
           printf("el pago exgtra es : %f\n",extra);
           printf("el pago total es : %f \n",total);
       }
       else
       {
           normal=salario*40;
           extra=(horas-40)*salario*2;
            total=normal + extra;
           printf("el pago normal es : %f\n",normal);
           printf("el pago exgtra es : %f\n",extra);
           printf("el pago total es : %f \n",total);
       }
       

   }
   else{

       normal=horas*salario;
       printf("el salario normal es %f\n",normal);
       printf("no hubo horas extras");
   }
   
}