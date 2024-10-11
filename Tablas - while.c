/*Salazar Anicasio Joshua
Laboratorio práctica 8
tablas de multiplicar(while)*/

#include <stdio.h>
#include <math.h>

int main ()
{
  int N, i=1, m;
  
  printf("Ingrese un número\n");
  scanf("%d", &N);

  while(i<=10) 
  {
    m = N*i;
    printf("%d*%d=%d\n", N, i, m);
    i=i+1;
  }
}
