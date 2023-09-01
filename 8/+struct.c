#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
    struct ficha_aluno
    {
      char nome[30];
      int numero;
      float nota;
    };
    
    struct ficha_aluno aluno;

    printf("\n---------Cadastro Aluno-------------\n");

    printf("Nome do aluno......");
    fgets(aluno.nome,30,stdin);

    printf("Dígite o numero do aluno ");
    scanf("%d",&aluno.numero);

    printf("Informe a nota do aluno ");
    scanf("%f",&aluno.nota);

    printf("\n\n------------Lendo os dados da Struct---------------\n");
    printf("Nome..........%s",aluno.nome);
    printf("Número........%d\n",aluno.numero);
    printf("Nota..........%.2f\n",aluno.nota);
    
   return 0;
}