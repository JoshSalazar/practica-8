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

  do
  {
    m = N*i;
    printf("%d*%d=%d\n", N, i, m);
    i=i+1;
  }
  while(i<=10);
}
