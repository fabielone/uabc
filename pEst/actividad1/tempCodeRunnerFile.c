// Fabiel Ramirez Garcia
// 9-Feb-20222
// que lea 3 calificaciones calcule el promedio del alumno y desplegar:

/*Si prom < 30 Repetir
Si prom >=30 y prom <60 extraordinario

Si prom >=60 y prom <70 suficiente

Si prom >=70 y prom <80 Regular

Si prom >=80 y prom <90 bien

Si prom >=90 y prom <98 muy bien

Si prom >=98 y prom <=100 excelente Si prom >100 Error en promedio

Nota: Realizarlo anidado por el Verdadero
*/
// FRG_ACT1_1.c


#include <stdio.h>
#include <stdlib.h>

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

   if (promedio<30)
   {
       printf("Repetir");
   }
   else if (promedio<60)
   {
      printf("Extraordinario");
   }
   else if(promedio<70)
   {
       printf("Suficiente");
   }
   else if(promedio<80)
   {
       printf("Regular");
   }
   else if (promedio<90)
   {
       printf("Bien");
   }
   else if (promedio<98)
   {
       printf("Muy Bien");
   }

   else if (promedio<100)
   {
       printf("Excelente");
   }
   
   
   else
   {
        printf("Error en promedio");
   }
   


  

}      
