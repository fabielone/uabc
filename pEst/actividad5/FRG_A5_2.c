// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 -----
/* 
Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora,  (usar condición anidada) 
*/
// FRG_A5_1.C
//done

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main()
{
    int seleccion,compu ; 
    puts("Ingrese el numero de la opcion: 1. Piedra 2.Papel 3.Tijera");
    scanf("%d",&seleccion);

    srand(time(0));

    compu=rand()%3;
   
    if(seleccion==1){

        if(compu==0){

            puts("comput seleciono piedra");

            puts("empate");

        }
        else if(compu==1){
             puts("comput seleciono papel");

            puts("perdistes");

        }
        else {

            puts("comput seleciono tijera");

            puts("ganastes");

        }

    }
    else if(seleccion==2){
                if(compu==0){

            puts("comput seleciono piedra");

            puts("ganastes");

        }
        else if(compu==1){
             puts("comput seleciono papel");

            puts("empate");

        }
        else {

            puts("comput seleciono tijera");

            puts("perdistes");

        }

    }
    else if(seleccion==3){

        if(compu==0){

            puts("comput seleciono piedra");

            puts("perdistes");

        }
        else if(compu==1){
             puts("comput seleciono papel");

            puts("ganastes");

        }
        else {

            puts("comput seleciono tijera");

            puts("empate");

        }
    }

}