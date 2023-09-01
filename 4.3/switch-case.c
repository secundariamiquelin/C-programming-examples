#include <stdio.h>

// int main (){

//   int valor;

//    printf("Dígite um valor de 1 a 7: ");
//    scanf("%d", &valor); 

//    switch (valor){
//      case 1:
//      printf("Domingo\n");
//      break;

//      case 2: 
//      printf("Segunda\n");
//      break;

//      case 3:
//      printf("Terça\n");
//      break;

//      case 4: 
//      printf("Quarta\n");
//      break;

//      case 5:
//      printf("Quinta\n");
//      break;

//      case 6:
//      printf("Sexta\n");
//      break;

//      case 7:
//      printf("Sábado\n");
//      break;

//      default:
//      printf("Valor Inválido!\n");
//    }
   
// }


//Escreva um programa em C que solicite ao usuário um número de 1 a 5 e exiba uma mensagem correspondente a cada número utilizando um switch case. Por exemplo, se o usuário digitar 1, o programa deve exibir "Você escolheu a opção 1".

// int main (){

//   int number; 
//   printf("Dígite um numero de 1 a 5:\n ");
//   scanf("%d", &number);
//    switch (number)
//    {
//    case 1:
//      printf("Você digito 1\n");
//     break;
   
//    default:
//    printf("Você digitou outro número além de 1");
//     break;
//    }
// }

// Escreva um programa em C que solicite ao usuário um caractere e verifique se é uma vogal maiúscula, vogal minúscula ou uma consoante. Utilize um switch case para implementar a lógica.

int main (){
   char letra;

   printf("Dígite uma letra para vereficar se é vogal ou não\n");
   scanf("%c", &letra);

 switch (letra) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("É uma vogal maiúscula.\n");
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("É uma vogal minúscula.\n");
            break;
        default:
            printf("É uma consoante.\n");
            break;
    }
 
}