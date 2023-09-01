#include <stdio.h>
#include <math.h>

//Escreva um programa que solicite ao usuário que digite um número inteiro positivo. Em seguida, crie uma função chamada ehPrimo que receberá esse número como parâmetro e retornará um valor booleano indicando se o número é primo ou não.

int ehPrimo(int numero){
  if (numero <= 0){
    return 0;
  }

  int limite = sqrt(numero);//sqrt = raiz quadrada
  for (int i = 2; i <= limite; i++){
     if (numero % i == 0){
      return 0;
     }
  }
  return 1;
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    int resultado = ehPrimo(numero);

    if (resultado == 1) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}
