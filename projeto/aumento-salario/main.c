#include <stdio.h>
//Faça um programa que receba o sálario de um funcionário e o perceuntual de aumento, calcule e mostre o valor do aumento e o novo salário

int main (int argc,char *argv[]){
float salario, percentual,aumento,novo_salario;

printf("Digite seu salario\n");
scanf("%f", &salario);

printf("Digite o percentual de aumento\n");
scanf("%f", &percentual);

aumento = salario * percentual/100;

novo_salario = salario + aumento;

printf("Valor do aumento: %.2f\n", aumento);
printf("valor do novo salário: %.2f", novo_salario);

return 0;
}