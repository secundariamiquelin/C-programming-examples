#include <stdio.h>

// Escreva um programa em C que solicite ao usuário que digite um número inteiro positivo e, em seguida, imprima todos os números pares de 0 até o número digitado.
#include <stdio.h>

// int main() {
//     int num;
//     printf("Digite um número inteiro positivo: \n");
//     scanf("%d", &num);

//     int i = 0;

//     while (i <= num) {
//         printf("%d ", i);
//         i += 2;
//     }
// }

// i++  -> i = i + 1


// Faça um programa que leia uma sequência de números inteiros positivos do usuário e exiba o menor número digitado. O programa deve parar quando o usuário digitar zero utilizando o loop while.

int main (){
  int numero, menor;

printf("Digite uma sequencia de numeros inteiros positivos:\n");
scanf("%d", &numero);

menor = numero;

while (numero != 0){
    if (numero < menor){
        menor = numero;
    }
   scanf("%d",&numero);
}
 printf("O menor numero digitado foi: %d\n", menor);
}