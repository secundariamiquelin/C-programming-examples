#include <stdio.h>
//  int main (){
//   int A,B,soma,subtr,mult,divis;

//   printf("Dígite o primero valor:\n");
//   scanf("%d",&A);
//   printf("Digite o Segundo Valor:\n");
//   scanf("%d",&B);

//   soma = A + B;
//   subtr = A - B;
//   mult = A * B;
//   divis = A / B;

//   printf("Resultado\n");
//   printf("Soma:%d\n",soma);
//   printf("Subtração:%d\n",subtr);
//   printf("Multiplicação:%d\n",mult);
//   printf("Divisão:%d\n",divis);

//  int resultado = soma + subtr + mult + divis;
//  printf("Resultado Total:%d",resultado);
//  }

//ATRIBUIÇÃO ARITMÈTICAS

int main (){
  int dado = 10;
  printf("Dados Antes do incremento: %d\n",dado);

  dado++;
  printf("Dados depois do incremento:%d\n",dado);

  dado--;
  printf("Dados depois do decremento:%d\n", dado);

  dado += 3;
  printf("Dado depois de incrementar em 3 unidades:%d\n",dado);

  dado -= 2;
  printf("Dados de pois de decrementar 2 unidades:%d\n",dado);

  dado *= 10;
  printf("Dados depois de multiplicar por 10: %d\n",dado);
}