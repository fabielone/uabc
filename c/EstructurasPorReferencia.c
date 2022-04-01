
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubble(char []);


typedef struct Alumno  {

char Matricula[6];
char Nombre[25];
char ApellidoP[50];
char ApellidoM[50];
int Edad;
char Carrera[10];

} Alumno;

void Visualizar(struct Alumno *);


void main()/* Rellenar y visualizar V */ 
{
char buf[20];

struct Alumno Inicial;

struct Alumno arrDatos[20];



for(int i=0;i<3;i++){

printf("Estudiande %d \n",i+1);
printf ("Matricula: \n");
fgets(arrDatos[i].Matricula,7,stdin);
printf ("Nombre: \n ");
fgets(arrDatos[i].Nombre,25,stdin);
printf("Apellido Paterno: \n");
fgets(arrDatos[i].ApellidoP,50,stdin);
printf("Apellido Materno: \n");
fgets(arrDatos[i].ApellidoM,50,stdin);
printf("Edad: \n ");
scanf("%d",&arrDatos[i].Edad);
fgets (buf, 20, stdin);
printf ("Carrera: \n ");
fgets(arrDatos[i].Carrera,50,stdin);

system("clear");
}


Visualizar(arrDatos);
}

void Visualizar (struct Alumno *Datos) {
system("clear");


for(int i=0;i<3;i++){
    printf("Estudiande %d \n",i+1);
printf(" \nMatricual: %s", Datos[i].Matricula);
printf("\nNombre: %s", Datos[i].Nombre);
printf( "\nApellido Paterno: %s", Datos[i].ApellidoP);
printf ("\nApellido Materno: %s", Datos[i].ApellidoM);
printf("\nEdad: %d", Datos[i].Edad);
printf("\nCarrera: %s\n", Datos[i].Carrera);
}


}