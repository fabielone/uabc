#include <stdio.h>

int CuboPorValor(int);

int main()
{

    int Numero = 5; 
    printf("El valor original de Numero es %d\n",Numero);
    Numero = CuboPorValor(Numero);
    printf("El nuevo valor de Numero es %d",Numero);
    return 0;






}

int CuboPorValor(int n)
{

    return n*n*n;

}