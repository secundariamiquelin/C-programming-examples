#include <stdio.h>
#include <stdlib.h>
// \n
int main(int argc, char *argv[]) {
    int operacao;
    float n1, n2, resultado;

    printf("Digite 1 para somar:\n");
    printf("Digite 2 para subtrair:\n");
    printf("Digite 3 para multiplicar:\n");
    printf("Digite 4 para dividir:\n");
    scanf("%d", &operacao);

    printf("Insira o primeiro número:\n");
    scanf("%f", &n1);

    printf("Insira o segundo número:\n");
    scanf("%f", &n2);

    switch(operacao){
      case 1:
        resultado = n1 + n2;
        printf("Soma: %.2f\n", resultado);
        break;
      case 2:  
        resultado = n1 - n2;
        printf("Subtração: %.2f\n", resultado);
        break;
      case 3: 
         resultado = n1 * n2;
         printf("Multiplicação: %.2f\n", resultado);
         break;
      case 4:
          if (n2 != 0){
          resultado = n1 / n2;
          printf("Divisão: %.2f\n", resultado); 
          }else{
            printf("Divisão por zero não rola ");
          }
          break;
    }
    // if (operacao == 1) {
    //     resultado = n1 + n2;
    //     printf("Soma: %.2f\n", resultado);
    // }

    // if (operacao == 2) {
    //     resultado = n1 - n2;
    //     printf("Subtração: %.2f\n", resultado);
    // }

    // if (operacao == 3) {
    //     resultado = n1 * n2;
    //     printf("Multiplicação: %.2f\n", resultado);
    // }

    // if (operacao == 4) {
    //     if (n2 != 0) {  // Verificar divisão por zero
    //         resultado = n1 / n2;
    //         printf("Divisão: %.2f\n", resultado);
    //     } else {
    //         printf("Erro: Divisão por zero!\n");
    //     }
    // }
    system("pause");
    return 0;
}
