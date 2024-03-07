//exercicio 2 sobre IMC
#include <stdio.h>
#include <stdlib.h>

float main() {
  float peso, altura;

  printf("peso do individuo: ");
  scanf("%f", &peso);

  printf("altura do individuo: ");
  scanf("%f", &altura);

  float IMC;

  IMC= peso/(altura*altura);

  printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a: %.2f ", peso, altura, IMC );
  

  
  return 0;
}


