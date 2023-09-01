#include <stdio.h>

#define texto "Entrada e Saída de Dados"

int main (){
 printf("%s\n", texto);

int idade = 0;
float altura = 0.0;
char nome [50] = "";

printf("Dígite sua idade:\n" );
scanf("%d",&idade);

printf("Dígite sua altura:\n");
scanf("%f",&altura);

printf("Dígite seu Nome:\n");
scanf("%s",nome);

printf("Dados Informados:\n");
printf("Idade: %d\n",idade);
printf("Altura %.2f\n",altura);
printf("Nome: %s\n",nome);
}