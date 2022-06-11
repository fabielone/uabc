#include <stdio.h>
#include <stdlib.h>
#include "../../libraries/getch.h"
#define N 10
//*** PROTOTIPOS DE FUNCIONES  ******
int msges();
int msges_exit();
void menu();
void Fibonacci(void);
void Factorial(void);
void Digitos(void);
//****  main principal  *********
int main()
{
  menu();

  return 0;
}
//  *** DESARROLLO DE LAS FUNCIONES  ******
//*********************
int msges()
{
  int op;
  system("clear");
  printf("   M  E   N   U \n");
  printf("1.- FIBONACCI \n");
  printf("2.- FACTORIAL \n");
  printf("3.- DIGITOS \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf("%d", &op);
  return op;
}
//****************
int msges_exit()
{
  int op;
  puts("presione 0 para regresar al menu principal");
  do
  {
    op = getch();
  } while (op != 48);

  return op;
}
//****************
void menu()
{
  int op;
  do
  {
    op = msges();
    switch (op)
    {
    case 1:
      Fibonacci();
      msges_exit();
      break;
    case 2:
      Factorial();
      msges_exit();
      break;
    case 3:
      Digitos();
      msges_exit();
      break;
    }

  } while (op != 0);
}

//*********************
void Fibonacci(void)
{
  //  VARIALES LOCALES
  system("clear");
  //  AQUI DESARROLLO PROGRAMA
  printf("   FIBONACCI\n");
}

//*************************
void Factorial(void)
{

  //  VARIALES LOCALES
  system("clear");
  //  AQUI DESARROLLO PROGRAMA
  printf("   FACTORIAL\n");
}
//****************************
void Digitos(void)
{
  //  VARIALES LOCALES
  system("clear");
  //  AQUI DESARROLLO PROGRAMA
  printf("   DIGITOS\n");
}