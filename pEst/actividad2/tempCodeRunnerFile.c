// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
// Leer 4 calificaciones de un alumno, desplegar el promedio del alumno
// FRG_ACT2_6.c

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void main()
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
    promedio =(float)(primera+segunda+tercera+cuarta)/3;

    printf("El Promedio es %f",promedio);


  

}      