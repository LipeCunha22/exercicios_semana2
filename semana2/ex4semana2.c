#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int cateto1, cateto2;

  printf("valor do cateto 1: ");
  scanf("%d", &cateto1);

  printf("valor do cateto 2: ");
  scanf("%d", &cateto2);


  int hipotenusa;

  hipotenusa= (sqrt(cateto1 * cateto1)+ (cateto2*cateto2));

  printf("Um triangulo com lados %d e %d tem a hipotenusa %d ", cateto1, cateto2, hipotenusa );

  return 0;
}
