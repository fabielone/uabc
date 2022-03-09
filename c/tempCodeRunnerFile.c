#include <stdio.h>
#include <stdlib.h>


void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}



int main(void)
{
    gotoxy(1, 1);

    printf("\u2554");

    gotoxy(80, 1);

    printf("\u2557");

    gotoxy(1, 25);

    printf("\u255A");

    gotoxy(80, 25);

    printf("\u255D");

    for (int a = 2; a < 25; a++)
    {
        gotoxy(1, a);
        printf("\u2551");
        gotoxy(80, a);
        printf("\u2551");
    }

    for (int i = 2; i < 80; i++)
    {
        gotoxy(i, 1);
        printf("\u2550");
        gotoxy(i, 25);
        printf("\u2550");
    }

    printf("\n ");

    return 0;
}
