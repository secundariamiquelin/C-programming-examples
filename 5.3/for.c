#include <stdio.h>

// int main (){
//   int count = 10;
//    for (int i = 0; i <= count; i++);
//    {
//      printf("Chama");
//    }
   
// }

int main (){
   int N,i,num;
   double soma = 0.0;

    printf("Digite a quantidade de números: ");
    scanf("%d", &N);

    for (i = 1;i<= N; i++){
      printf("Digite o %d numero: ",i);
      scanf("%d", &num);
      soma += num;
    }

    double media = soma / N;
    printf("A média dos %d números é: %.2lf\n", N, media);

}