#include <stdio.h>
#include "./../libraries/getch.h"
#include <string.h>
#include <stdlib.h>
#include "./../libraries/ventanas.h"

void funcion();
void RecuadroE(short c1, short r1, short c2, short r2, short tipo);
void main()
{

    funcion();
}

void funcion()

{

    system("clear");
    ColorTexto(32);
    for(short col=0;col<8;col++){

        for(short row=0;row<5;row++)
     Recuadro(1+20*col, 1+row*3, 20+20*col, 3+row*3, 32);

    }
   
    //Recuadro(3, 1, 5, 2, 32);

    //Recuadro(1, 2, 3, 4, 32);
    //Recuadro(4, 3, 6, 4, 32);
    gotoxy(5, 5);
    int i = 0, tecla, a, b = 0, c;
    // system("clear");
    // printf("Ingrese maximo de caracteres: ");
    int x = 0, y = 0;
    do
    {
        tecla = getch();

        // printf(" ,%c = %d ", tecla, tecla);
        // i++;

        if (tecla == 100 && x < 7)
        {
            x++;
            RecuadroE(1 + 20 * x, 1 + 3 * y, 20 + 20 * x, 3 + 3 * y, 33);
            RecuadroE(1 + 20 * (x - 1), 1 + 3 * y, 20 + 20 * (x - 1), 3 + 3 * y, 32);
            gotoxy(5,5);
        }
        if (tecla == 97 && x > 0)
        {

            x--;

            RecuadroE(1 + 20 * x, 1 + 3 * y, 20 + 20 * x, 3 + 3 * y, 33);
            RecuadroE(1 + 20 * (x + 1), 1 + 3 * y, 20 + 20 * (x + 1), 3 + 3 * y, 32);
            gotoxy(5,5);
        }
        if (tecla == 115 && y < 4)
        {

            y++;
            RecuadroE(1 + 20 * x, 1 + 3 * (y - 1), 20 + 20 * x, 3 + 3 * (y - 1), 32);
            RecuadroE(1 + 20 * x, 1 + 3 * y, 20 + 20 * x, 3 + 3 * y, 33);
           gotoxy(5,5);
        }

        if (tecla == 119 && y > 0)
        {

            y--;
            RecuadroE(1 + 20 * x, 1 + 3 * (y + 1), 20 + 20 * x, 3 + 3 * (y + 1), 32);
            RecuadroE(1 + 20 * x, 1 + 3 * y, 20 + 20 * x, 3 + 3 * y, 33);
            gotoxy(5,5);
        }

    } while (tecla != 27);
}

void RecuadroE(short c1, short r1, short c2, short r2, short tipo)
{
  short c, r, ctwo = c2, rtwo = r2;
  ColorTexto(tipo);

  gotoxy(c1, r1);
  printf("\u2554");

  gotoxy(c2, r1);
  printf("\u2557");

  gotoxy(c1, r2);
  printf("\u255A");

  gotoxy(c2, r2);
  printf("\u255D");

  for (c = c1 + 1; c < c2; c++)
  {
    gotoxy(c, r1);

    printf("\u2550\n");
    gotoxy(ctwo-- - 1, r2);

    printf("\u2550\n");
    
  }

  for (r = r1 + 1; r < r2; r++)
  {
    gotoxy(c1, r);

    printf("\u2551\n");
    gotoxy(c2, rtwo-- - 1);

    printf("\u2551\n");
    
  }
}
