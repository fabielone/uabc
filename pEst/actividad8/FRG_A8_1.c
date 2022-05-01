// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----Due date: 3/29/22, 3:00 PM
/*
- El profesor de una materia desea conocer la cantidad de sus alumnos que no tienen derecho al examen de nivelación.

Diseñe un programa en C que lea las calificaciones obtenidas en las 5 unidades por cada uno de los 40 alumnos y escriba la cantidad de ellos que no tienen derecho al examen de nivelación ( Los promedios menores de 50 no tiene derecho a examen de nivelación) .



*/
// FRG_A8_1.C
// done
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define S 40
#define U 5

void main()
{

    int cal, calsum = 0, count = 0;
    float promedio;

    for (int i = 0; i < S; i++)
    {
        calsum = 0;
        for (int j = 0; j < U; j++)
        {
            if (j == 0)
            {
                system("clear");
                printf("Alumno # %d\n", i + 1);
            }

            printf("Iingrese calificacion # %d  : \n", j + 1);
            scanf("%d", &cal);
            calsum += cal;
        }
        promedio = (float)calsum / 5;

        if (promedio < 50)
        {
            count++;
        }
    }

    printf("el numero de estudiantes que no tiene derecho a titulacion son : %d", count);
}