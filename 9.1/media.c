#include <stdio.h>

int calcularMedia(int a,int b,int c){
  int media  = (a + b + c) / 3;
  return media;
}

int main (){

   int num1,num2,num3;
   printf("Dígite o primerio número ");
   scanf("%d", &num1);
   printf("Dígite o segundo número ");
   scanf("%d", &num2);
   printf("Dígite o terceiro número ");
   scanf("%d", &num3);

   int mediaFinal = calcularMedia(num1,num2,num3);

    printf("A media dos numeros e: %d\n", mediaFinal);
}