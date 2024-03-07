//exercicio 5 sobre area do raio
//LUIS FELIPE CUNHA - 32373627
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int raio;

  printf("valor do raio: ");
  scanf("%d", &raio);




  int area;
  area= 3.14 * (raio * raio);


  printf("Um circulo com raio %d tem a area: %d",raio, area );

  return 0;
}
