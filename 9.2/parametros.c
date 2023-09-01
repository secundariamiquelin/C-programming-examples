
// argc (contagem de argumentos) indica quantos argumentos foram passados, incluindo o nome do programa.
// argv (vetor de argumentos) é um array de ponteiros para strings que apontam para os argumentos passados, sendo argv[0] o nome do programa e os outros elementos os argumentos adicionais.

#include <stdio.h>

// TUTURIAL PARA RODAR ESSE CÓDIGO NO CMD 
//Colo esse caminho: \Users\gabri\OneDrive\GABRIEL\NOVO GITHUB (secundariamiquelin)\Cursos\YouTube\Prof-Pietro\Lang-C-Do-Zero\9.2\output>

//Passo como parametro o nome do e coloco o que eu quero que aparece na frente Ex:"parametros.exe" Gabriel Miquelim 

//No cmd vai aparecer:
// Foram inseridos 2 argumentos:
// Gabriel
// Miquelin
int main(int argc, char *argv[]) {
    int i;

    if (argc > 1) {
        printf("Foram inseridos %d argumentos:\n", argc - 1);
        for (i = 0; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    } else {
        printf("Não foram inseridos argumentos no programa.\n");
    }

    return 0;
}
