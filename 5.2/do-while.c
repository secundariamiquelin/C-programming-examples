#include <stdio.h>

//DO WHILE
// int main (){
//   int i = 1;
//   do{  
//   printf("Se fudeu");

//  }while (i < 10);

// }



int main() {
    int number;

    do {
        printf("Digite um número positivo: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Número inválido! O número deve ser positivo.\n");
        }
    } while (number <= 0);

    printf("Você digitou o número: %d\n", number);

    return 0;
}
