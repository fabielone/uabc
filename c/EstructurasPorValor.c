
#include <stdio.h>
#include <string.h>


struct Alumno  {

char Matricula[6];
char Nombre[25];
char ApellidoP[50];
char ApellidoM[50];
int Edad;
char Carrera[10];

};

void Visualizar(struct Alumno);


void main()/* Rellenar y visualizar V */ 
{
char buf[20];
struct Alumno Inicial;
printf ( "Matricula: ");
gets(Inicial.Matricula);
printf ( "Nombre: ");
gets(Inicial.Nombre);
printf("Apellido Paterno: ");
gets(Inicial.ApellidoP);
printf("Apellido Materno: ");
gets(Inicial.ApellidoM);
printf("Edad: ");
scanf("%d",&Inicial.Edad);
fgets (buf, 20, stdin);
printf ("Carrera: ");
gets(Inicial.Carrera);
Visualizar(Inicial);

};

void Visualizar (struct Alumno Datos) {
system("clear");
printf(" \nMatricual: %s", Datos.Matricula);
printf("\nNombre: %s", Datos.Nombre);
printf( "\nApellido Paterno: %s", Datos.ApellidoP);
printf ("\nApellido Materno: %s", Datos.ApellidoM);
printf("\nEdad: %d", Datos.Edad);
printf("\nCarrera: %s", Datos.Carrera);

}