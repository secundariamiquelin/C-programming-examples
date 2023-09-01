#include <stdio.h>

int main (int argc,char *argv[]){

int soma , i;
soma = 0;
i = 0;

  while (i <= 10){
  soma = soma + i;
  i++;
  }


printf("Soma: %d\n",soma);
system("pause");

return 0;
}