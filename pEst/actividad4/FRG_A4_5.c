// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/*
Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar: 

 Si prom < 30 Repetir 

 Si prom >=30 y prom <60 extraordinario 

 Si prom >=60 y prom <70 suficiente 

 Si prom >=70 y prom <80 Regular 

 Si prom >=80 y prom <90 bien 

 Si prom >=90 y prom <98 muy bien 

 Si prom >=98 y prom <=100 excelente 

 Si prom >100 Error en promedio 
   (ANIDADO POR EL VERDADERO)
 */
// FRG_A4_5.C
//done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
void main()
{
    
    int primera,segunda,tercera;
    float promedio;
    puts("Ingrese Primera Calificacion");
    scanf("%d",&primera);

    puts("Ingrese segunda Calificacion");
    scanf("%d",&segunda);

    puts("Ingrese tercera calificacion");
    scanf("%d",&tercera);
    promedio =(float)(primera+segunda+tercera)/3;

   if (promedio>=30)
   {
       
        if (promedio>=60)
            {
                
                 if(promedio>=70)
                {
                   

                    if(promedio>=80)
                 {
                     if (promedio>=90)
                         {

                            if (promedio>=98)
                                 {
                                    if (promedio>100)
                                         {
                                 
                                            printf("Error en promedio");
                                     
                                         } //ultimo iff
   
   
                                     else {//100
                                            printf("Excelente");

                                    
                                          }// ultimo else
                                }//98

                             else {//98
                            printf("Muy Bien");
                            
                                }
           
                         }//90
                            
                 
                     else {//90
                        printf("Bien");
                         }
                   
                     
                 }//80
                    else 
                {//80
                    printf("Regular");
                    
                }
                }//70
                else {//70
                 printf("Suficiente");
             }//60


            }//60
       else {//60
          printf("Extraordinario");
             }
        
   }//30
   else {//30
       printf("Repetir");
      }
}