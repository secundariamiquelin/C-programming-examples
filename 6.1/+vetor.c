#include <stdio.h>

int main (){
  //FORMAS DE CRIAR ARRAY

  // int numeros[5];
  // int numeros2[] = {1,2,3,4,5};
  // int numeros3[5] = {5,4,3};//Declarei o vetor com 5 posição, mas só preenchi 3, logo ele automaticamento colocara 0, nas posição faltante 

  //VETOR DE CARCTERES

  char vogais [5] = {'a','e','i','o','u'};
    for(int i = 0; i < 5; i++){
      printf("%c ",vogais[i]);
    }
    printf("\n");

  //Vetor para armazenar notas(numeros com vírgula)
  float nota[5] = {3.1, 6.5, 8.5};

  return 0;
}