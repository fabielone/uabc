// Fabiel Ramirez Garcia
// Due date: 3/15/22, 11:59 PM

<<<<<<< HEAD
// REALIZA LOS SIGUIENTES EJERCICIOS EN C SUBIR UN PROGRAMA QUE LLAME LOS 3 EJERCICIOS

// 1.- Función en "C" que genere 40 números aleatorios entre el 0 y 200, desplegar los números y la leyenda de cada número si es par o impar , la cantidad de los números pares e impares así como la suma de los números pares o impares.
// 2.- Función en "C" que genere N (35) cantidad de números (100 -200), desplegar al final el número mayor y el número menor.
=======
// PARTE 1
// REALIZA LOS SIGUIENTES EJERCICIOS EN C SUBIR UN PROGRAMA QUE LLAME LOS 3 EJERCICIOS
// 1.- Función en "C" que genere 40 números aleatorios entre el 0 y 200, desplegar los números y la leyenda de cada número si es par o impar , la cantidad de los números pares e impares así como la suma de los números pares o impares.
// 2.- Función en "C" que genere N (35) cantidad de números (100 -200), desplegar al final el número mayor y el número menor. 
>>>>>>> origin/lap
// 3.- Función en "C" que despliegue la tabla de multiplicar de un número dado (número entre el 1 y 20).
// Tabla del 5
// 5 * 1 = 5
// 5* 2 = 10
<<<<<<< HEAD
// ..
// 5*10=50

// FRG_A6_P1.C

// done

#include <stdio.h>
#include <stdlib.h>
#include "../../libraries/getch.h"
#include <time.h>
#define N 10
//*** PROTOTIPOS DE FUNCIONES  ******
int msges();
int msges_exit();
void menu();
void funcion1(void);
void funcion2(void);
void funcion2(void);
//****  main principal  *********
int main()
{
    menu();

    return 0;
=======
// .
// .
// .
// 5*10=50
// FRG_A6_P1.C
//done


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define N2 40
#define N3 35

//*** PROTOTIPOS DE FUNCIONES  ******
int msges();
void menu();
void CuarentaAleatorios(void);
void MayorMenor(void);
void TablaMulti(void);
//****  main principal  *********
int main()
{
   menu();

	return 0;
>>>>>>> origin/lap
}
//  *** DESARROLLO DE LAS FUNCIONES  ******
//*********************
int msges()
<<<<<<< HEAD
{
    int op;
    system("clear");
    printf("   M  E   N   U \n");
    printf("1.- 40 numero aleatorios + pares/impares/suma \n");
    printf("2.- 35 numeros aleatorios mayor/menor \n");
    printf("3.- Tabla de Multiplicar \n");
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
=======
{ int op;
  system ("clear");
  printf ("   M  E   N   U \n");
  printf("1.- 40 Numeros Aleatorios \n");
  printf("2.- Numeros Aleatorias menor/mayor \n");
  printf("3.- Tabla de Multiplicar \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf ("%d",&op);
  return op;
>>>>>>> origin/lap
}
//****************
void menu()
{
<<<<<<< HEAD
    int op;
    do
    {
        op = msges();
        switch (op)
        {
        case 1:
            funcion1();
            msges_exit();
            break;
        case 2:
            funcion2();
            msges_exit();
            break;
        case 3:
            funcion3();
            msges_exit();
            break;
        }

    } while (op != 0);
}

//*********************
void funcion1(void)
{
    //  VARIALES LOCALES
    system("clear");
    //  AQUI DESARROLLO PROGRAMA
    printf("   Función en  'C' que genere 40 números aleatorios entre el 0 y 200, desplegar los números y la leyenda de cada número si es par o impar , la cantidad de los números pares e impares así como la suma de los números pares o impares.\n");
    srand(time(NULL));
    int num, n = 40, cpar = 0, sumpar = 0, sumimpar = 0;

    for (int i = 0; i < n; i++)
=======
  int op;
  do{
      op=msges();
      switch (op)
      {
        case 1:
              CuarentaAleatorios();
              break;
        case 2:
              MayorMenor();
              break;
        case 3:
              TablaMulti();
              break;

      }

    }while (op != 0);


}

//*********************
void CuarentaAleatorios(void)


{

    srand(time(NULL));
    system("clear");
     int num, cpar = 0, sumpar = 0, sumimpar = 0;

    for (int i = 0; i < N2; i++)
>>>>>>> origin/lap
    {
        num = rand() % 201;
        printf("%d", num);
        if (num % 2 == 0)
        {
            printf("[par]\n");
            cpar++;
            sumpar = sumpar + num;
        }
        else
        {
            printf("[impar]\n");

            sumimpar = sumimpar + num;
        }
    }

    printf("Numeros de Par %d\n", cpar);
    printf("Suma de Pares %d\n", sumpar);
    printf("Numeros de Impar %d\n", 40 - cpar);
    printf("Suma de Impares %d\n", sumimpar);
}

//*************************
<<<<<<< HEAD
void funcion2(void)
{

    //  VARIALES LOCALES
    system("clear");
    //  AQUI DESARROLLO PROGRAMA
    printf(" Función en 'c' que genere N (35) cantidad de números (100 -200), desplegar al final el número mayor y el número menor. \n");
    srand(time(NULL));
    int num, n = 35, min = 150, max = 150;

    for (int i = 0; i < n - 1; i++)
    {
        num = (rand() % 101) + 100;
        printf("%d\n", num);
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    }

    printf("Numero min %d\n", min);
    printf("Numero max %d\n", max);
}
//****************************
void funcion3(void)
{
    //  VARIALES LOCALES
    system("clear");
    //  AQUI DESARROLLO PROGRAMA
    printf(" Función en 'c' que despliegue la tabla de multiplicar de un número dado (número entre el 1 y 20).\n");

    int num;

    do
    {
        printf("Ingrese un numero entre 1 y 20:");
        scanf("%d", &num);
    } while (num < 1 || num > 20);

    for (int i = 1; i < 11; i++)
    {
        printf("%dx%d=%d\n", num, i, num * i);
    }
=======
void MayorMenor (void)
{


    srand(time(NULL));
    system("clear");

    int num,min=150,max=150;

    for(int i=0;i<N3-1;i++)
   { 
   num = (rand()%101)+100;
   printf("%d\n",num);
   if(num<min){
     min=num;
   }
   if(num>max){
     max=num;
   }
   
   
   
   }
   
   

   printf("Numero min %d\n",min);
   printf("Numero max %d\n",max);
   
}
//****************************
void TablaMulti (void)
{
    
    int num;

  do
  {
    printf("Ingrese un numero entre 1 y 20:");
   scanf("%d",&num); 
  } 
  while (num<1||num>20);

  for(int i=1;i<11;i++)
    {
      printf("%dx%d=%d\n",num,i,num*i);
    }

>>>>>>> origin/lap
}