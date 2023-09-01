#include <stdio.h>

int main (int argc,char *argv[]){

int i, ant1,ant2,atual;

ant1 = 1;
ant2 = 0;

printf("Série de Fibonacci(8 primeiros:)\n");
printf("%d ", ant2);
printf("%d ", ant1);

for (i = 3; i <= 8; i++){
  atual = ant1 + ant2;
  printf("%d ", atual);
  ant2 = ant1;
  ant1 = atual;
}

printf("\n");
return 0;
}