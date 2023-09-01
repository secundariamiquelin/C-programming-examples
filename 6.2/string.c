#include <stdio.h>
#include <string.h>


int main (){

  char s [10];
  // printf("Dígite algo: (scanf convencional)\n");
  //   scanf("%s", s);
  //   fflush(stdin);
  // printf("Resultado: %s\n\n",s);

  // printf("Dígite algo: (scanf aprimorado)\n");
  //   scanf("%9[^\n]s",s);//O scan vai ler somente 9 caracteres do que for digitado
  //   fflush(stdin);
  // printf("Resultado: %s\n\n",s);
  
 //fgets() -> controla limite de tamanho de vetor(no caso foi definido o limite de 10(dez))
 //Sintaxe: fgets(<string>,<tamanho>,stdin)  
  printf("Dígite algo (leitura pelo fgets): \n");
  fgets(s,10,stdin);//Foi limitado em 10 carcteres, o C não deixa passar disso usando o "fgets()"
  fflush(stdin);
 //Sintaxe: puts(<string>)
 puts("Resultado:");
 puts(s);
}

