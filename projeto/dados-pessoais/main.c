#include <stdio.h>
//Faça um programa para armazenar os dados de 3 pessoas:nome,idade,peso e altura; Ao final o algortimo deve mostrar na tela, o nome e a idade da primeira pessoa e o pessoa e altura da ultima pessoa  
// \n

struct tipo_pessoa {
  char nome[100]; // até 100 caracteres
  int idade;
  float peso;
  float altura;
};

int main(int argc, char *argv[]) {
  struct tipo_pessoa lista[3];
  int i;

  for (i = 0; i < 3; i++) {
    printf("Insira o nome da pessoa da posição %d:\n", i);
    scanf("%99s", lista[i].nome);

    printf("Insira a idade da pessoa da posição %d:\n", i);
    scanf("%d", &lista[i].idade);

    printf("Insira o peso da pessoa da posição %d:\n", i);
    scanf("%f", &lista[i].peso);

    printf("Insira a altura da pessoa da posição %d:\n", i);
    scanf("%f", &lista[i].altura);

    // Clear the newline character from the input buffer
    getchar();
  }

  printf("Nome da primeira pessoa: %s.\n", lista[0].nome);
  printf("Idade da primeira pessoa: %d.\n", lista[0].idade);
  printf("Peso da última pessoa: %.2f.\n", lista[2].peso);
  printf("Altura da última pessoa: %.2f.\n", lista[2].altura);

  return 0;
}