#include <stdio.h>
#include <string.h>

//strlen() => é usada para calcular o comprimento de uma string, ou seja, o número de caracteres presentes em uma sequência de caracteres
#define N 50
int main (){
 
    const char message[] = "Hello, world";
    size_t length = strlen(message);

    printf("O comprimento da string é: %zu\n", length);
    return 0;
}


