#include <stdio.h>
 //Faça um programa que carrega um vetor de nove elementos numericos inteiros, calcule e mostre os números primos e suas respectivas posições;

#include <stdio.h>

int main(int argc, char *argv[]) {
   int vet[9], i, j, count;

   // Preenchendo o array com 9 números inteiros
   for (i = 0; i < 9; i++) {
      printf("insira um número inteiro:\n");
      scanf("%d", &vet[i]);
   }

   // Verificando se cada número no array é primo
   for (i = 0; i < 9; i++) { // Itera pelos elementos do array
      count = 0; // Inicializa a contagem de divisores

      // Loop para verificar divisores do número atual (vet[i])
      for (j = 1; j <= vet[i]; j++) {
         if (vet[i] % j == 0) {
            count++; // Incrementa a contagem de divisores
         }
      }

      // Se o número tem exatamente 2 divisores (1 e ele mesmo), é primo
      if (count == 2) {
         printf("%d é primo, posição: %d.\n", vet[i], i);
      }
   }

   return 0; 
}
