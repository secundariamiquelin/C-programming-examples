#include <stdio.h>
// Desenvolva um algoritmo que preencha uma matriz numerica de dimensões 3x3.Após preencher toda a matriz, o usuário deve inserir uma chave de busca X.Caso exista algum numero igual a X, dentro da matriz, o algoritmo deve mostrar na tela, os indices da linha e da coluna da posição no qual X foi encontrado pela primeira vez.Caso o contrário, o algoritmo deve se encerrar com uma única mensagem,dizenho "Chave não encontrada"
int main (int argc, char *argv[]){

 int matriz[3][3];//criação de uma matriz 3 por 3
 //nas linhas da matriz será usado a variável "i" e nas colunas a "j"
 int i, j,x, linha, coluna,achou = 0;

 for(i = 0; i < 3;i ++){
    for (j = 0; j < 3; j++){
        printf("Insira o elemento %d, coluna %d:\n", i, j);
        scanf("%d", &matriz[i][j]);
    }
 }
    printf("Insira a chave de busca\n");
    scanf("%d", &x);
   
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         if(matriz[i][j] == x){
            //encontrou a chave de busca
            achou = 1;
            linha = i;
            coluna = j;
            break;//interrompe o laço
         }
      }
      if(achou == 1){
        break;
      }
    }
    if(achou == 1){
      printf("O elemento %d foi encontrado na linha %d, coluna %d.\n",x,i,j);
    }else{
      printf("Chave não encontrada");
    }
    
  return 0;
}