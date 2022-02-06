#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Ingrese coefficiente a: ");
    scanf("%lf", &a);

  

    if (a==0){

        printf("a tiene que ser diferente a 0 \n");
        return 0;

    }

     printf("Ingrese coefficiente b: ");
    scanf("%lf", &b);

     printf("Ingrese coefficiente c: ");
    scanf("%lf", &c);

    

      discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
      
        printf("Las raices son imaginarias");
    }

    return 0;
} 