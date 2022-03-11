#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
//*******************
#define N 20
//******************
void menu(void);
int Letrero(void);
void Opcion1(void);
void Opcion2(void);
void Opcion3(void);
//*****************
int main()
{
	menu();// llamada a funcion menu
	return 0;
}
//********************
void menu(void)
{
	int op;
	do{
		op=Letrero();
		switch (op)
		{
			case 1: 
				Opcion1();
				break;
			case 2: 
				Opcion2();
				break;
			case 3:
				Opcion3(); 
				break;
		}
	
	}while(op != 0);
}
//***********************
int Letrero(void)
{
	int op;
	system ("CLS");
	printf ("M    E    N    U\n");
	printf ("1.- FIBONACCI\n");
	printf ("2.- FACTORIAL\n");
	printf ("3.- DIGITOS\n");
	printf ("0.- SALIR \n");
	printf ("ESCOGE UNA OPCION: ");
	scanf ("%d",&op);
	return op;
}
//*******************
void Opcion1(void)
{
	system ("CLS");
	printf("\n FIBONNACCI  OPCION 1\n");
	system("PAUSE");

}
//*******************
void Opcion2(void)
{
	system ("CLS");
	printf("\n FACTORIAL  OPCION 1\n");
	system("PAUSE");

}
//*******************
void Opcion3(void)
{
	system ("CLS");
	printf("\n DIGITOS  OPCION 1\n");
	system("PAUSE");

}