#include <stdio.h>

// screva um programa em C que solicite ao usuário um número inteiro e verifique se ele é um múltiplo de 3 ou de 5. Se o número for múltiplo de 3, exiba a mensagem "O número é múltiplo de 3." Se o número for múltiplo de 5, exiba a mensagem "O número é múltiplo de 5." Caso contrário, exiba a mensagem "O número não é múltiplo de 3 nem de 5." Utilize a estrutura de controle "if" e "else" para implementar a lógica necessária.

// int main (){
//   int number;
//   printf("Dígite um número: ");
//   scanf("%d",&number);

// if(number % 3 == 0 ){
//   printf("O número é múltiplo de 3\n",number);
// }else if(number % 5 == 0){
//   printf("O número é múltiplo de 5\n",number);
// }else{
//   printf("O número não é múltiplo de 3 nem de 5");
// };
// }


// Escreva um programa em C que solicite ao usuário um caractere e verifique se é uma vogal (letra 'a', 'e', 'i', 'o', 'u') ou uma consoante. O programa deve exibir uma mensagem indicando se o caractere é uma vogal ou uma consoante. Utilize a estrutura de controle "if" e "else" para implementar a lógica necessária.

int main() {
  char caractere;

  printf("Digite um caractere: ");
  scanf(" %c", &caractere);

  if (caractere == 'a' || caractere == 'e' || caractere == 'i' ||         caractere == 'o' || caractere == 'u' ||
      caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
    printf("O caractere '%c' é uma vogal.\n", caractere);
  } else {
    printf("O caractere '%c' é uma consoante.\n", caractere);
  }

  return 0;
}
