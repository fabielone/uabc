#include <math.h>
#include <stdio.h>

float eqn(float num);

int main()
{
    float a, b, fa, fb, xra, xran, epc, epm;
    int i;

    // pedir al usuario que ingrese los valores del intervalo
    printf("Ingrese el valor minimo del intervalo:");
    scanf("%f", &a);

    printf("Ingrese el valor maximo del intervalo:");
    scanf("%f", &b);

    printf("Ingrese el error maximo deseado");
    scanf("%f", &epm);

    fa = eqn(a);
    fb = eqn(b);

    printf("Ite |  a      |   Xr    |   b     | F(a)   | F(xr)   | F(b)  |  Ea  \n");

    if (fa * fb < 0)
    {
        xra = (a + b) / 2;

        if (fa * xra == 0)
        {

            printf("%i| %.3f  | %.3f  | %.3f  | %.3f | %.3f | %.3f | 0 ", i, a, xra, b, fa, eqn(xra), fb);
            return 0;
        }

        else
        {

            xran = 0;
            xra = (a + b) / 2;
            epc = fabs((xra - xran) / xra) * 100;

            i = 1;

            printf("%i   | %.3f  | %.3f  | %.3f  | %.3f | %.3f | %.3f | %.3f \n", i, a, xra, b, fa, eqn(xra), fb, epc);

            do
            {

                if (fa * eqn(xra) < 0)
                {
                    b = xra;
                    fb = eqn(b);
                }

                else
                {

                    a = xra;
                    fa = eqn(a);
                }

                xran = xra;
                xra = (a + b) / 2;
                epc = fabs((xra - xran) / xra) * 100;
                i++;
                printf("%i   | %.3f  | %.3f  | %.3f  | %.3f | %.3f | %.3f | %.3f  \n", i, a, xra, b, fa, eqn(xra), fb, epc);
            }

            while (epc > epm);
        }
    }
    else
    {

        if (eqn(xra) == 0)
        {
            printf("%i| %.3f  | %.3f  | %.3f  | %.3f | %.3f | %.3f | 0 \n ", i, a, xra, b, fa, eqn(xra), fb);
            return 0;
        }
        else
        {
            printf("No hay raiz en ese intervalo");
            return 0;
        }
    }
};

float eqn(float num)
{

    return 2 * num * cosf(2 * num) - (num + 1) * (num + 1);
};
