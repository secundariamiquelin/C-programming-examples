#include <stdio.h>
#include <string.h>

int main (){
  // strcmp() ->é usada para comparar duas strings

  char str1[] = "Olá";
    char str2[] = "Mundo";
    char str3[] = "Olá";
    
    int resultado1 = strcmp(str1, str2);
    int resultado2 = strcmp(str1, str3);
    
    printf("Comparando str1 e str2: %d\n", resultado1);
    printf("Comparando str1 e str3: %d\n", resultado2);
    
    return 0;
}