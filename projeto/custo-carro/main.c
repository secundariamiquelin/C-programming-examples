#include <stdio.h>
#include <stdlib.h>

// O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Crie funções  que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre :
//a) o valor correspondente ao lucro do distribuidor;
//b) o valor correspondente aos impostos;
//c) o preço final do veículo 
// \n

//DECLARANDO AS FUNÇÕES
float calcLucroDistribuidor(float preco_fabrica, float porce_distribuidor){
  //quantos porcentos o distribuidor tem que lucrar encima do preço de fábrica
  //Cálculo do lucro do distribuidor
  return preco_fabrica * porce_distribuidor /100;
}

float calcImpostos(float preco_fabrica, float porce_impostos){
   return preco_fabrica * porce_impostos /100;
}

float calcPrecoFinal(float preco_fabrica, float valor_distribuidor, float valor_imposto){
    return preco_fabrica + valor_distribuidor + valor_imposto;
}

int main (int argc, char *argv[]){
  
   float preco_fabrica, porce_distribuidor, porce_impostos,lucro_distribuidor,imposto,valor_final;

  printf("Insira o preco de fábrica: \n");
  scanf("%f", &preco_fabrica);
  printf("Insira o percentual de lucro do distribuidor: \n");
  scanf("%f", &porce_distribuidor);
  printf("Insira o percentual de impostos: \n");
  scanf("%f", &porce_impostos);

 lucro_distribuidor = calcLucroDistribuidor(preco_fabrica,porce_distribuidor);
 imposto = calcImpostos(preco_fabrica, porce_impostos);
 valor_final = calcPrecoFinal(preco_fabrica, lucro_distribuidor,imposto);

 printf("Lucro do distribuidor: R$ %.2f.\n",lucro_distribuidor);
 printf("Impostos: R$ %.2f.\n",imposto);
 printf("Valor Final: R$ %.2f.\n",valor_final);
  return 0;
}