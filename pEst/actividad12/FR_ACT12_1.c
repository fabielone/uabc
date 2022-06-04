//Fabiel Ramirez Garcia

/* ACTIVIDAD 12

REALICE EL SIGUIENTE PROGRAMA QUE CONTENGA UN MENÚ.

                 MENÚ

             1.- AGREGAR (AUTOM 10 REGISTROS)

  2.- AGREGAR MANUAL

             2.- ELIMINAR REGISTRO (lógico)

             3.- BUSCAR 

             4.- ORDENAR

             5.- IMPRIMIR

             6.- SALIR



UTILIZAR UN ARREGLO DE 500 REGISTROS  

SE DEBERÁ UTILIZAR ESTRUCTURAS CON LOS DATOS BÁSICOS DE UN ALUMNO ( status, Matricula, ApPat, ApMat, Nombre, Edad, Sexo )  

Busqueda y Ordenacion por campo MATRICULA



nota: usar librería propia con funciones

*/

#include <stdio.h>
#include <stdlib.h>
#define N 40 
#include "./../../libraries/getch.h"



typedef struct Alumno
{

    char Matricula[25];
    char Nombre[25];
    char ApellidoP[25];
    char ApellidoM[25];
    char Edad[25];
    char Carrera[25];
    char Status[25];

} Alumno;

typedef struct ArrAlumno
{

    Alumno arrDatos1[100];
} ArrAlumno;

void interfaz();









void main()
{
    interfaz();

    // struct ArrAlumno arrDatos;

    Alumno arrDatos[100];

    // selecion cual opcion, numtablas numero de estudiantes.

    short selecion, numtablas;

    // para hacer recuadro
    // funcion para mostra menu y regresar un numero

    selecion = menu();

    // listar(arrDatos, 1);
    int num;
    while (selecion != 48)
    {
        switch (selecion)
        {
        case 49:
            /* funcion de insertar


            */

            insertar(arrDatos, &numtablas);
            // listar(arrDatos, 1);

            break;

        case 50:
            /* funcion de borrar */
            borrar(arrDatos, &numtablas);

            break;

        case 51:
            /* funcion de modificar */
            modificar(arrDatos, &numtablas);
            // listar(arrDatos, &numtablas);
            break;

        case 52:
            /* funcion de ordenar */
            ordenar(arrDatos, &numtablas);
            // listar(arrDatos, &numtablas);
            break;

        case 54:
            /* funcion de listar */
            listar(arrDatos, &numtablas);
            break;

        case 53:
            /* funcion de buscar */
            buscar(arrDatos, &numtablas);

            break;

        default:
            break;
        }

        selecion = menu();
    }

    salida();
}


void interfaz()
{

	system("clear");
	//   Este es el cuadro principal
	Recuadro(1, 1, 82, 22, 32);

	LineaHorizontal(1, 82, 3, 32);
	LineaHorizontal(1, 82, 20, 32);
	ColorTexto(33);
	PonTextoCentradoPantalla(2, "Sheets");

	PonTextoCentradoPantalla(20, "[MENSAJES]");
	// El cuando del menu de la primera interfaz
	// Recuadro(24, 7, 56, 15, 35);
}


