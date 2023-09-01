#include <stdio.h>

// Função que recebe uma matriz e seu tamanho como parâmetros
void imprimirMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int minhaMatriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    imprimirMatriz(minhaMatriz, 3, 3);

    return 0;
}
