#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba 2 numeros inteiros e mostre o maio entre eles, caso seja iguais deve aparecer a mensagem "Os números são iguais"

//\n

int main (int argc, char *argv[]){
int num1, num2 ;

printf("Inisra um número\n");
scanf("%d",&num1);

printf("Insira outro número\n");
scanf("%d",&num2);

if(num1 > num2){
   printf("O primeiro numero inserido é maior",num1);
}else if(num2 > num1){
  printf("O segundo numero inserido é maior",num2);
}else{
  printf("Os números são iguais");
}

return 0;
}