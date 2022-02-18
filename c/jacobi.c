#include <math.h>
#include <stdio.h>

int main()
{
    float epm;
    int n;

    printf("Ingrese n: ");
    scanf("%d", &n);

    printf("Ingrese el error maximo deseado: ");
    scanf("%f", &epm);

    //
    printf("%d", n);
    float xij[n][n + 1];

    // ingresar valores de la matriz

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (j == n)
            {
                printf("Ingrese b%d : ", i + 1);
                scanf("%f", &xij[i][j]);
            }
            else
            {
                printf("Ingrese x %d %d : ", i + 1, j + 1);
                scanf("%f", &xij[i][j]);
            }
        }
    }
};
