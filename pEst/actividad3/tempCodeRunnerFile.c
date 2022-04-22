// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/*Suponer que toda la gente duerme alrededor de 1/3 de tiempo 
(8 de 24 hrs). Hacer un algoritmo para calcular cuántas horas ha 
dormido una persona durante toda su vida, considerando que todos 
los años tienen 365 días. */
// FRG_A3_1.C

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int edad, horas;

    puts("ingrese edad en anos");
    scanf("%d",&edad);

    

    horas=edad*365*24/3;

    printf("en toda su vida a dormido %d horas",horas);
}