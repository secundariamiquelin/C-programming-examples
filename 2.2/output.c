#include <stdio.h>

int main (){
  int idade = 0;
  float peso = 0.0;
  // printf("Idade inicial = %d \n", idade);

  printf("Qua sua idade?\n");
  scanf("%d", &idade);

  printf("Qual seu peso?\n");
  scanf("%f", &peso);

  printf("Sua idade é: %d \n", idade);
  printf("Seu peso é: %.2f \n", peso);
}