#include <stdio.h>
// Faça um programa que receba quatro numero inteiros, calcule e mostre a soma desses números.

int main (int argc,char *argv[]){
  int num1,num2,num3,num4;

  printf("Dígite o primeiro numero \n");
  scanf("%d", &num1);

 printf("Dígite o segundo numero \n");
 scanf("%d", &num2);

 printf("Dígite o terceiro numero \n");
 scanf("%d", &num3);

 printf("Dígite o quarto numero \n");
 scanf("%d", &num4);

int soma = num1 + num2+ num3 + num4;
 printf("Resultado da soma: %d\n", soma);

 int media = soma / 4;
 printf("Média %d", media);

 return 0;
}