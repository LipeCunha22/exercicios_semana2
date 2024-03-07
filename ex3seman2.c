//exercicio 3 sobre conversao de celsius para fahr
#include <stdio.h>
#include <stdlib.h>

int main() {
  int celsius;

  printf("temeperatura em celsius: ");
  scanf("%d", &celsius);


  int F;

  F= (1.8 * celsius) + 32;

  printf("Uma temperatura de %d graus celsius equivale a %d graus Fahrenheit ", celsius, F );



  return 0;
}
