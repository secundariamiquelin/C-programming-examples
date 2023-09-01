#include <stdio.h>

// Programa que calcula o custo de energia, utilizando uma funcao. Sabe-se que o quilowatt de energia custa um milesimo do salario minimo, com isso o programa recebe o valor do salario minimo e quantidade de quilowatts consumida. O procedimento retorna o seguintes parametros:

// O valor, em reais, de cada quilowatt;
// O valor, em reais, a ser pago pelo consumo;
// O valor, em reais, a ser pago com desconto de 15%.
//* -> saida e entrada
float calcKW(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc) {
  (*v_kw) = v_sal / 1000;
  (*v_rs) = (*v_kw) * q_kw;
  (*v_dsc) = (*v_rs) * 0.85;
}


int main (int argc, char *argv[]){

  float val_sal, qtde_kw, val_kw, val_reais,val_desc;

  printf("Insira o salário mínimo:\n");
  scanf("%f", &val_sal);
  printf("Insira a quantidade de KW gastos:\n");
  scanf("%f", &qtde_kw);

  calcKW(val_sal, qtde_kw,&val_kw,&val_reais,&val_desc);

  //Procedimento
   
   printf("Valor de 1 KW (em R$):%.2f.\n",val_kw);
   printf("Valor a ser pago pela residência (em R$): %.2f.\n",val_reais);
   printf("Valor com desconto (em R$): %.2f.\n",val_desc);
  return 0;
}