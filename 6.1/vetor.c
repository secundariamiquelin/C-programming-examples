#include <stdio.h>

// int main () {

// //  int vetor [5];
// //  float media;

// //  vetor[0] = 50;
// //  vetor[1] = 40;
// //  vetor[2] = 30;
// //  vetor[3] = 20;
// //  vetor[4] = 10;
 
// //  media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4]) / 5;

// //  printf("Média : %.2f\n",media);


// Segunda FORMA DE FAZER, DE UM JEITO MAIS PRÁTICO

//     int vetor[5] = {10, 20, 30, 40, 50};
//     int i;
//     float media = 0;

//     for (i = 0; i < 5; i++) {
//         media += vetor[i];
//     }

//     printf("Média : %.2f\n", media / 5); 

// }

//TUTURIAL PERCORRER ARRY

// int main (){

//   int meuArray [5] = {10,20,30,40,50};
//   int tamanhoDoArray = sizeof(meuArray) / sizeof(meuArray[0]); // Calcula o tamanho do array

//   for (int i = 0; i < tamanhoDoArray; i++){
//       printf("Elemento %d: %d\n",i,meuArray[i]);
//   }
// }  


//PEDINDO PARA O USUARIO PREENCHER O VETOR 

int main (){
   int vetor [5];
   int i;

  for (i=0;i<5;i++){
    printf("Insira um dado\n");
    scanf("%d",&vetor[i]);
  };
    printf("Dados inseridos: \n");
    for(i=0;i<5;i++){
      printf("%d",vetor[i]);
    }
  
}