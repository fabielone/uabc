// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 ----- Due date: 2/23/22, 12:00 PM
//  Algoritmo que lea edad de una persona (en años enteros) desplegar su edad en meses y días
// FRG_A3_1.C
//done 

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void main(){

    int edad, months, days;

    puts("ingrese edad en anos");
    scanf("%d",&edad);

    months=edad*12;

    days=edad*52*7;

    printf("la edad %d anos en meses es : %d y en dias es %d",edad,months,days);

    



}