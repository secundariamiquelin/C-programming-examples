#include <stdio.h>
#include <string.h>
// #include<locale.h>//Bibilioteca para os acentos nas string funcionar no compilador 

int main (){
  // setlocale(LC_ALL,"Portuguese"); //para os acentos das string funcionar na hora de compilar 

  #define N 20
//strcpy()//altera conteúdo de string 
// Em linguagem C não posso simplesmente atribuir um valor de uma variavel para outra.Ex var1 = var2, ISSO NÂO EXISTEM em Linguagem C!!!
 char origem[N]= {"Olá Mundo!"};
 char destino[N];

 printf("Antes do strcpy:\n");
 puts(origem);
 puts(destino);//Vai imprimir lixo de momória(letras,números...)

 strcpy(destino,origem);

 printf("Depois do strcpy:\n");
 puts(origem);
 puts(destino);

}
