#include <stdio.h>
 //rograma que calcula a media baseada nos seguintes criterios:

// Nota de trabalho, peso 2.
// Nota da avaliacao, peso 3.
// Nota do exame, peso 5.
// De acordo com a media, uma nota eh de A a E eh dada:

// Maior ou igual a 8.0 e menor que 10.0 -> Conceito A
// Maior ou igual a 7.0 e menor que 8.0 -> Conceito B
// Maior ou igual a 6.0 e menor que 7.0 -> Conceito C
// Maior ou igual a 5.0 e menor que 6.0 => Conceito D
// Abaixo de tudo de 5.0 -> Conceito E

int main (int argc,char *argv[]){
float trabalho, avaliacao, exame, media;

printf("Dígite sua nota de trabalho: \n");
scanf("%f", &trabalho);

printf("Dígite sua nota de avaliação: \n");
scanf("%f", &avaliacao);

printf("Dígite sua nota de exame: \n");
scanf("%f", &exame);

//2 3 5 são os pessos 
media = (trabalho*2 + avaliacao*3  + exame*5 ) / 10;
scanf("Méida: %2.f.\n", media);

//REFAZENDO COM IF e ELSE 
if (media >= 0.0 && media <= 10.0){
  if (media >= 8.0){
    printf("Conceito A \n");
  }else if(media >= 7.0){
    printf("Conceito B \n");
  }else if (media >= 6.0){
    printf("Conceito C \n");
  }else if(media >= 5.0){
    printf("Conceito D \n");
  }else {
     printf("Conceito E \n");
  }
}


//FEITO SOMENTE COM IF 
// if(media >= 8.0 && media <=10.0){
//   printf("Conceito A \n");
// }

// if(media >= 7.0 && media < 8.0){
//   printf("Conceito B \n");
// }

// if(media >= 6.0 && media < 7.0){
//   printf("Conceito C \n");
// }

// if(media >= 5.0 && media < 6.0){
//   printf("Conceito D \n");
// }

// if(media < 5){
//   printf("Conceito E \n");
// }

system("pause");
return 0;
}