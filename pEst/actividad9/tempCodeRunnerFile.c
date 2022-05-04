// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----4/6/22, 11:59 PM (PDT)
/*
Realiza un programa que sirva para generar el CURP de una persona. El programa debe pedir los datos al usuario y generar almacenar en una cadena y desplegar el CURP.

El programa deberá repetirse cuantas veces desee el usuario



Nota: el programa deberá estar 100% validado, de datos entrada así como las reglas que e deben cuplir al generar el curp



Instructivo:



http://www.ordenjuridico.gob.mx/Federal/PE/APF/APC/SEGOB/Instructivos/InstructivoNormativo.pdf

*/
// FRG_A9_1.C
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void modifycurp(char *n);

void sololetras(char *n);

void solonumeros(char *n);

void sololetra1(char *n);

void main()
{
    char curp[18], sexo[1], nombre[20], s_nombre[20], p_a[20], s_a[20], estado[20];

    modifycurp(curp);

    printf("%s", curp);
}

void modifycurp(char *n)
{

    strcpy(n, "what");
    strncat(n, "1fwefwefwefwefwefwefwefwefwefwef0", 20);
}