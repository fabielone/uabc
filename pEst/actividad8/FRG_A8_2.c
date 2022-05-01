// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/*
 Una compañía de seguros tiene contratados a n vendedores. Cada uno hace tres ventas a la semana. Su política de pagos es que un vendedor recibe un sueldo base, y un 10% extra por comisiones de sus ventas.

El gerente de su compañía desea saber cuánto dinero obtendrá en la semana cada vendedor por concepto de comisiones por las tres ventas realizadas, y cuanto tomando en cuenta su sueldo base y sus comisiones.

El usuario proporcionará los datos de entrada.

*/
// FRG_A8_2.C
// done
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void main()
{
    float sueldobaso, venta, sum_venta;
    int n_vendedores;
    puts("ingrese numero de vendedores:");
    scanf("%d", &n_vendedores);
    puts("ingrese el sueldo base");
    scanf("%f", &sueldobaso);

    for (int i = 0; i < n_vendedores; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (j == 0)
            {
                printf("vendedor # %d\n", i + 1);
            }
            printf("ingrese valor de venta # %d \n", j + 1);
            scanf("%f", &venta);
            sum_venta += venta;
        }
        printf("sueldo base(%.2f) + comissiones(%.2f)=total( %.2f)\n", sueldobaso, sum_venta * .10, sueldobaso + sum_venta * .10);
    }
}