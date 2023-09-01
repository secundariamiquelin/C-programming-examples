#include <stdio.h>

// float maior (float num1,float num2){
//    if (num1 > num2)//se o bloco de comandos condicionado ao if tiver apenas uma instrução, então você pode omitir as chaves.
//       return num1;
//    else 
//       return num2;   
// }

// int main (){
//    float x, y,  m;

//    printf("Insira Um valor: \n");
//    scanf("%2f", &x);

//    printf("Insira outro valor: \n");
//    scanf("%2f", &y);

//   m = maior(x,y);

//  printf("Maior: %.2f\n",m);

// } 

//Função que ordena os numeros de forma Crescente

void ordemCrescente(int vetor[], int numero);

int main(void) {
    int vetor[10] = {5, 9, 7, 3, 4, 2, 6, 0, 8, 1};
    int i;

    ordemCrescente(vetor, 10); // Não precisa "vetor[]" -> somente o nome

    for (i = 0; i < 10; ++i) {
        printf("%i ", vetor[i]); // Vai percorrer o vetor e ler todos os membros dele
    }

    system("pause");
    return 0;
}

void ordemCrescente(int vetor[], int numero) {
    // Criação do algoritmo de ordenação
    // Lógica do algoritmo: Ele vai pegar o primeiro número do índice 0 e vai comparar com o número do índice 1.
    // Caso ele seja maior, eles vão ser invertidos, e assim por diante.
    int i, j, temporaria;

    for (i = 0; i < numero; ++i) { // variável i representa o primeiro membro do vetor
        for (j = i + 1; j < numero; ++j) { // Variável j representa o segundo membro do vetor
            if (vetor[i] > vetor[j]) { // Caso seja maior, eles serão invertidos
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
    }
}
