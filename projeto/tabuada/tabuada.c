#include <stdio.h>

int main() {
    int i, j, resultado;

    for (j = 1; j <= 10; j++) {
        for (i = 1; i <= 10; i++) {
            resultado = j * i;
            printf("%2d x %2d = %2d\n", j, i, resultado);
        }
        printf("\n"); 
    }

    return 0;
}
