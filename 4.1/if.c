#include <stdio.h>

int main (){
  float nota;

  printf("Insira a nota %.1f\n", nota);
  scanf("%f",&nota);// & -> precisa usar quando utliza o "scanf"

  if (nota >= 7.0){
    printf("Aluno Aprovado(a)!\n");
  }else if (nota >= 4.0 && nota < 7.0){
    printf("Aluno Tém direito a recuperação!\n");
  }else {
    printf("Aluno Reprovado(a)!\n");
  }
}