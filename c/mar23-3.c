#include <stdio.h>

void CuboPorValor(int *);

int main()
{

    int Numero = 5; 
    printf("El valor original de Numero es %d\n",Numero);
  CuboPorValor(&Numero);
    printf("El nuevo valor de Numero es %d",Numero);
    return 0;






}

void  CuboPorValor(int *nPtr)
{

    *nPtr= *nPtr* *nPtr* *nPtr;

}