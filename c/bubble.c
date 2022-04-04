#include <stdio.h>

int main()
{
    int array[100], n, c, d, swap;

    printf("Ingrese tamano de arreglo: ");
    scanf("%d", &n);
    printf("Ingrese un numero:\n");

    for (c = 0; c < n; c++)

        scanf(" %i", &array[c]);

    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (array[d] > array[d + 1])
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }

    printf("Lista ordenada \n");

    for (c = 0; c < n; c++)
        printf("%d,", array[c]);

    return 0;
}