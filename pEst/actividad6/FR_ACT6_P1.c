// Fabiel Ramirez Garcia
// Due date: 3/15/22, 11:59 PM

// PARTE 1
// REALIZA LOS SIGUIENTES EJERCICIOS EN C SUBIR UN PROGRAMA QUE LLAME LOS 3 EJERCICIOS
// 1.- Función en "C" que genere 40 números aleatorios entre el 0 y 200, desplegar los números y la leyenda de cada número si es par o impar , la cantidad de los números pares e impares así como la suma de los números pares o impares.
// 2.- Función en "C" que genere N (35) cantidad de números (100 -200), desplegar al final el número mayor y el número menor. 
// 3.- Función en "C" que despliegue la tabla de multiplicar de un número dado (número entre el 1 y 20).
// Tabla del 5
// 5 * 1 = 5
// 5* 2 = 10
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
}
//  *** DESARROLLO DE LAS FUNCIONES  ******
//*********************
int msges()
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
}
//****************
void menu()
{
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

}