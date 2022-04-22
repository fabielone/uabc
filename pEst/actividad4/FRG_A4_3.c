// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
//  Algoritmo que lea 4 calificaciones de un alumno, calcular y desplegar el promedio acompañado de la leyenda APROBADO o REPROBADO
//condiciones compuesta

// FRG_A4_1.C
//done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int primera,segunda,tercera,cuarta;
    float promedio;
    puts("Ingrese Primera Calificacion");
    scanf("%d",&primera);

    puts("Ingrese segunda Calificacion");
    scanf("%d",&segunda);

    puts("Ingrese tercera calificacion");
    scanf("%d",&tercera);

    puts("Ingrese cuarta calificacion");
    scanf("%d",&cuarta);
    promedio =(float)(primera+segunda+tercera+cuarta)/4;

    if(promedio>=60){

        printf("El Promedio es %f, APROBADO",promedio);
    }
    else{
      printf("El Promedio es %f, REPROBADO",promedio);
    }

}