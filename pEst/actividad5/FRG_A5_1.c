// Fabiel Ramirez Garcia 368036
// 11-Feb-20222 ----- Due date: 3/8/22, 11:59 PM
/*
- Programa en C que lea 3 calificaciones calcule el promedio del alumno y desplegar:

 Si prom < 30 Repetir

 Si prom >=30 y prom <60 extraordinario

 Si prom >=60 y prom <70 suficiente

 Si prom >=70 y prom <80 Regular

 Si prom >=80 y prom <90 bien

 Si prom >=90 y prom <98 muy bien

 Si prom >=98 y prom <=100 excelente

 Si prom >100 Error en promedio

  (OPTIMIZADO)

*/
// FRG_A5_1.C
// done
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void main()
{
  int primera, segunda ,tercera ; 
  float promedio ; 

  puts("ingresar primera calificacion");
  scanf("%d",&primera);

  puts("ingresar segunda calificacion");
  scanf("%d",&segunda);

  puts("ingresar tercer calificacion");
  scanf("%d",&tercera);

  promedio=(float)(primera+segunda+tercera)/3;

  if (promedio<30)
  {
    puts("repetir");
  }
  else if (promedio<60)
  {
    puts("extraordinario");
  }
  else if(promedio<70)
  {
    puts("suficiente");
  }
  else if (promedio<80)
  {
    puts("regular");
  }
  else if (promedio<90)
  {
    puts("bien");
  }
  else if (promedio<98)
  {
    puts("muy bien");
  }
  else if (promedio<=100)
  {
    puts("excelente");
  }

  else{
    puts("error en el promedio");
  }
  
  
  
  
  

}