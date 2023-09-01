#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 3 // Define a constante "TAM" com valor 3

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa; // "struct tipo_pessoa" passa a ser somente "tipo_pessoa"

int main() {
    tipo_pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Insira os dados da pessoa %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", lista[i].nome); // Removido o "&" antes de lista[i].nome e adicionado espaço no scanf para evitar problemas com o buffer de entrada
        fflush(stdin); // Limpa o buffer de entrada após a leitura do nome

        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Peso: ");
        scanf("%2f", &lista[i].peso);
        fflush(stdin);
    }

    system("cls"); // Limpa o terminal

    puts("Seus dados: \n");
    for (i = 0; i < TAM; i++) {
        printf("-------------Pessoa %d---------------\n", i + 1); // Corrigido a posição do parêntese que estava após a vírgula
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade); // Corrigido "Nome" para "Idade"
        printf("\tPeso: %2f\n", lista[i].peso); // Removido o "\t" antes de "Peso"
    }

    printf("-----------------------------\n");
    return 0; 
}
