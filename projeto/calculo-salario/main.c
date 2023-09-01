#include <stdio.h>
// \n

// Programa que faz o calculo salarial, utilizando uma funcao, com base na as horas trabalhadas e o salario minimo. Seguindo essas regras:

// A hora trabalhada vale metade do salario minimo;
// O salario bruto equivale ao numero de horas trabalhadas multiplicando pelo valor da hora trabalhada;
// O imposto equivale a 3% do salario bruto;
// O salario a receber equivale ao salario bruto menos o imposto.

float calcSalario(float numero_horas, float salario_minimo){
  float horas_trabalhadas, salario_bruto, imposto, salario_receber;
  horas_trabalhadas = salario_minimo / 2.0;
  salario_bruto = numero_horas * horas_trabalhadas;
  imposto = salario_bruto * 3 / 100;// salario x 3%
  salario_receber = salario_bruto - imposto;
  return salario_receber;
}

int main (int argc, char *argv[]){
  float horas_trabalhadas, salario_minimo, salario_receber;

  printf("Insira o número de horas trabalhadas: \n");
  scanf("%f", &horas_trabalhadas);
  printf("Insira o  salário mínimo: \n");
  scanf("%f", &salario_minimo);

  salario_receber = calcSalario(horas_trabalhadas, salario_minimo);
  printf("Sálario a receber> R$ %.2f.\n",salario_receber);

  return 0;
}