#include <stdio.h>
#include "./../libraries/getch.h"
#include <string.h>
#include <stdlib.h>
#include "./../libraries/ventanas.h"

void funcion();

void main()
{

    funcion();
}

void funcion()

{

    system("clear");
    ColorTexto(34);
    Recuadro(1, 1, 3, 2, 34);
    Recuadro(4, 1, 6, 2, 32);

    Recuadro(1, 3, 3, 4, 32);
    Recuadro(4, 3, 6, 4, 32);
    gotoxy(2, 1);
    int i = 0, tecla, a, b = 0, c;
    // system("clear");
    // printf("Ingrese maximo de caracteres: ");
    int x = 0, y = 0;
    do
    {
        tecla = getch();

        // printf(" ,%c = %d ", tecla, tecla);
        // i++;

        if (tecla == 100 && x < 1)
        {

            x++;
            Recuadro(1 + 3 * x, 1 + 2 * y, 3 + 3 * x, 2 + 2 * y, 32 + (2 * x));
            Recuadro(1 + 3 * (x - 1), 1 + 2 * y, 3 + 3 * (x - 1), 2 + 2 * y, 32 + 2 * (x - 1));
            gotoxy(2 + x * 3, 1 + y * 2);
        }
        if (tecla == 97 && x > 0)
        {

            x--;

            Recuadro(1 + 3 * x, 1 + 2 * y, 3 + 3 * x, 2 + 2 * y, 32 + (2 * (x + 1)));
            Recuadro(1 + 3 * (x + 1), 1 + 2 * y, 3 + 3 * (x + 1), 2 + 2 * y, 32 + 2 * (x));
            gotoxy(2 + x * 3, 1 + y * 2);
        }
        if (tecla == 115 && y < 1)
        {

            y++;
            Recuadro(1 + 3 * x, 1 + 2 * (y - 1), 3 + 3 * x, 2 + 2 * (y - 1), 32 + (2 * (y - 1)));
            Recuadro(1 + 3 * x, 1 + 2 * y, 3 + 3 * x, 2 + 2 * y, 32 + 2 * (y));
            gotoxy(2 + x * 3, 1 + 2 * y);
        }

        if (tecla == 119 && y > 0)
        {

            y--;
            Recuadro(1 + 3 * x, 1 + 2 * (y + 1), 3 + 3 * x, 2 + 2 * (y + 1), 32 + (2 * (y)));
            Recuadro(1 + 3 * x, 1 + 2 * y, 3 + 3 * x, 2 + 2 * y, 32 + 2 * (y + 1));
            gotoxy(2 + x * 3, 1 + 2 * y);
        }

    } while (tecla != 27);
}