//Desenvolvaum agoritmo que receba o tempo de um cronometro em segundos, e  diga quantas horas,minutos e segundos se passaram a partir do tempo cronometrado

// 1 hora = 3600seg
// 1 minuto = 60seg

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
  int seg, min , hr;

  printf("Insira o tempo em segundos:\n");
  scanf("%d",&seg);

  hr = seg / 3600;
  seg = seg % 3600;//Módulo (%) mostra o restante de segundos restantes

  min = seg / 60;
  seg = seg % 60;

  printf("Horas: %d\n",hr);
  printf("Minutos: %d\n",min);
  printf("Segundos: %d\n",seg);
  return 0;
}