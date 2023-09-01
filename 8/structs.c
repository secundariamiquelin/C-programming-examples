#include <stdio.h>
#include <string.h>

#define TAM 50//DEFINIMOS UM CONSTANTE "TAM"

 struct tipo_pessoa {
     int idade;
     float peso;
     char nome[TAM];
  };

   typedef struct tipo_pessoa tipo_pessoa;//struct tipo_pessoa passa a ser somente "tipo_pessoa"
   
  // typedef //permite eu renomear a palavra reservada de alguma variavél
  //Exemplo: typedef char letras Agora se eu quiser chamar uma variavel, posso usar a palvra "letras"

int main (){
//Criando e inicializando
tipo_pessoa pes = {0,0.0,"Teste"};//-> nessa ordem: idade, peso e nome

printf("Inicio:\n");
printf("pes.idade: %d\n",pes.idade);
printf("pes.peso:%.2f\n",pes.peso);
printf("pes.nome:%s\n",pes.nome);

//Atribuindo valores
  pes.idade =18;
  pes.peso = 74.4;
  strcpy(pes.nome, "Gabriel");

printf("\nAlterando os campos viacódigo\n");
printf("pes.idade: %d\n",pes.idade);
printf("pes.peso:%.1f\n",pes.peso);
printf("pes.nome:%s\n",pes.nome);


//PEDINDO PARA O USUARIO DIGITA AS INFORMAÇÕES
 printf("\nInsira um número inteiro:\n");
 scanf("%d",&pes.idade);
 printf("Insira um número real:\n");
 scanf("%d",&pes.peso);
 fflush(stdin);
 printf("Insira seu Nome\n");
 scanf("%s",&pes.nome);

printf("\nAlterando com os dados do usuário");
printf("pes.idade: %d\n",pes.idade);
printf("pes.peso:%.1f\n",pes.peso);
printf("pes.nome:%s\n",pes.nome);
}