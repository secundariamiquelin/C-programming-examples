#include <stdio.h>
// Uma matriz é uma estrutura de dados bidimensional que armazena elementos do mesmo tipo em linhas e colunas.
// int main (){
//   int matriz [3][3];// defini uma matriz de 3x3 (3 linhas por 3 colunas)

// //0 -> represenha a linha e número da frente representa a coluna
//   matriz[0][0] = 1;//linha zero coluna 0
//   matriz[0][1] = 2;//linha zero coluna 1
//   matriz[0][2] = 3;//linha zero coluna 2

//   matriz[1][0] = 4;
//   matriz[1][1] = 5;
//   matriz[1][2] = 6;

//   matriz[2][0] = 7;
//   matriz[2][1] = 8;
//   matriz[2][2] = 9;

//   printf("Imprimindo a primeira linha: \n");
//   printf("%d %d %d \n",matriz[0][0],matriz[0][1],matriz[0][2]);

//   printf("Imprimindo a segunda linha: \n");
//   printf("%d %d %d \n",matriz[1][0],matriz[1][1],matriz[1][2]);
  
//   printf("Imprimindo a terceira linha: \n");
//   printf("%d %d %d \n",matriz[2][0],matriz[2][1],matriz[2][2]);
// }


//SEGUNDA FORMA (BOA PRÀTICA)
int main (){
 int matriz [3][3]= {
               {1,2,3},
               {4,5,6},
               {7,8,9},
  };

  int i,j;

  printf("Imprimindo a segunda linha\n");//(4,5,6)
  for(j = 0;j < 3; j++){
     printf("%d ",matriz[1][j]);
  }

  printf("\n\nImprimindo toda a matriz:\n");
  for(i=0; i < 3;i++){
     for(j=0;j<3;j++){
      printf("%d ",matriz[i][j]);
     }
     printf("\n");
  }
}