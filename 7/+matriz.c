#include <stdio.h>

int main (){ 

  // Declarando e inicializando a matriz
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

//MOSTRANDO A MATRIZ

printf("Matriz:\n");
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
     printf("%d ", matriz[i][j]);
  }
  printf("\n");
}

return 0;
}