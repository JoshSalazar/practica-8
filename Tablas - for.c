/*Salazar Anicasio Joshua
Laboratorio práctica 8
tablas de multiplicar(for)*/

#include <stdio.h>
#include <math.h>

int main ()
{
  int N, i, m;
  
  printf("Ingrese un número\n");
  scanf("%d", &N);

  for(i=1; i<=10; i++) 
  {
    m = N*i;
    printf("%d*%d=%d\n", N, i, m);
  }
}
