// Fabiel Ramirez Garcia
// Due date: 3/15/22, 11:59 PM
// PARTE 2
// REALIZA LOS SIGUIENTES EJERCICIOS EN C SUBIR UN PROGRAMA QUE LLAME LOS 3 EJERCICIOS
// MENÚ 
// 1.- FIBONACCI 
// 2.- FACTORIAL 
// 3.- CANTIDAD DE DÍGITOS 
// 1.- PROGRAMA QUE PREGUNTE LA CANTIDAD DE VECES QUE DESEA QUE SE REALICE EL PROGRAMA DE FIBONACCI
// 2.- PROGRAMA QUE PIDA UN NÚMERO Y DESPLEGAR LA SALIDA DE FACTORIAL DE UN NÚMERO DADO.
// EJEMPLO 
// 5 * 4 =20
// 20* 3 = 60
// 60*2 =120
// FACTORIAL DE 5 = 120
// 3.- PROGRAMA QUE PIDA UN NÚMERO Y DESPLEGAR LA CANTIDAD DE DÍGITOS QUE TIENE EL NÚMERO.
//  EJEMPLO 
// 25 TIENE 2 DÍGITOS 1
// 2578 TIENE 5 DÍGITOS
// .
// 5*10=50
// FRG_A6_P2.C
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
void Fibonacci(void);
void Fibonacci2(int n);
void Factorial(void);
void Factorial2(int n);
void CDigitos(void);
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
  printf("1.- Fibonacci \n");
  printf("2.- Factorial \n");
  printf("3.- Cantidad de Digitos \n");
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
              Fibonacci();
              break;
        case 2:
              Factorial();
              break;
        case 3:
              CDigitos();
              break;

      }

    }while (op != 0);


}

//*********************
void Fibonacci(void){

  
    system("clear");
    int n;
    puts("ingrese el numero de veces para correr fibonacci");
    scanf("%d",&n);

    Fibonacci2(n);


  

}

//*************************
void Factorial (void)
{


    
   
   
  
    system("clear");
   int n;
    puts("ingrese el numero para sacar el factorial");
    scanf("%d",&n);

    Factorial2(n);
   
}

void Factorial2 (int n){

    int product=1;

for(int i=1;i<=n;i++){


    product=product*i;

    if(i<n){

    printf("%d*",i);

    }
    else if(i==n){
      printf("%d",i);
      printf("=%d",product);

    }
    
      

    

   


}


}
//****************************
void CDigitos (void)
{
    
   int num,count=1;
    printf("Ingrese un numero para desplegar el numero de digitos que tiene :  ");
   scanf("%d",&num); 
   int numo=num;

   while(num/10){

       num=num/100;
       count++;
   }


    printf("el numero %d tiene %d digitos",numo,count);

}

void Fibonacci2(int n){

      int sum=0,sum1=0,sum2=1;


  for(int i =0;i<n;i++){

    if(i==0){
      printf("%d,",i);

    }
    else{



      
      sum=sum1+sum2;

      

      printf("%d,",sum2);
      sum1=sum2;
      sum2=sum;

    }

    
  }


}