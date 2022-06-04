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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "../../libraries/getch.h"



void validarLetras(char string[], int a, char *ask);
void validarNumeros(char string[], int a);




void main()
{

    char nombre[20];
	
    validarLetras(nombre,20,"Ingresar Nombre:");

	validarNumeros(nombre,20);

	printf("\n %s",nombre);

}

void validarLetras(char string[], int a, char *ask)
{

    int i = 0, tecla, b = 0, c;
    printf("%s ",ask);
    scanf("%d%*c", &a);
    do
    {
		 tecla = getch();
        
        if (tecla > 64 && tecla < 91 || tecla > 96 && tecla < 123)
        {
            printf("%c", tecla);
			string[i]=tecla;

            i++;
            b = 1;
        }

		else{

			

			

		}
		

		if(tecla==10){

			string[i]='\0';

			return ;
		}

		

    } while (i < a);
}

void validarNumeros(char string[],int a)
{

    int i = 0, tecla, b = 0, c;
    system("clear");
    printf("Ingrese maximo de caracteres: ");
    scanf("%d%*c", &a);
    do
    {
		 tecla = getch();
        
        if (tecla > 47 && tecla < 58)
        {
            printf("%c", tecla);
			string[i]=tecla;

            i++;
            b = 1;
        }
		else{

			

			

		}
		

		if(tecla==10){

			string[i]='\0';

			return 0;
		}

		

    } while (i < a);
}