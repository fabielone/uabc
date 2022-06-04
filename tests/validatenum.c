#include <stdio.h>
#include <stdlib.h>


int validateInt();

void main(){

int vnum;

vnum = validateInt();

printf("%d",vnum);

}

int validateInt(){



int num;
char term;
if(scanf("%d%c", &num, &term) != 2 || term != '\n')
    return -1;
else
   return num;



}