// Fabiel Ramirez Garcia
// 9-Feb-20222
// Programa en C que lea 3 calificaciones y calcular y desplegar el promedio y
// la leyenda de Reprobado si prom menor de 60, Aprobado si el promedio mayor igual que
// 60 y menor que 100 y Excelente si promedio igual a 100
//
// FRG_ACT1_3.c
//Done

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

    printf("El Promedio es %f",promedio);


  

}      