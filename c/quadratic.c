#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, disc, r1, r2;
    
    //preguntar por valor de a y leerlo
    
    printf("Ingrese coefficiente a: ");
    scanf("%lf", &a);

  //verificar q sea diferente a zero

    if (a==0){

        printf("a tiene que ser diferente a 0 \n");
        return 0;

    }


    //preguntar por los valores de b y c . 

     printf("Ingrese coefficiente b: ");
    scanf("%lf", &b);

     printf("Ingrese coefficiente c: ");
    scanf("%lf", &c);

    
//calcular el discriminante
      disc = b * b - 4 * a * c;

    // si el discriminante es mayor a 0 hay dos raices reales
    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("r1 = %.2lf and r2 = %.2lf", r1, r2);
    }

    // si el discriminante es cero, hay una sola raiz real. 
    else if (disc == 0) {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %.2lf;", r1);
    }

    // de lo contrario las raices son imaginarias. 
    else {
      
        printf("Las raices son imaginarias \n");
    }

    return 0;
} 