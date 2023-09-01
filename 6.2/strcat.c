#include <stdio.h>
#include <string.h>


#define N 50 

int main (){
  // strcat() -> concatenar strings

  char s1[N] = {"Lógica de "};
  char s2[N] = {"Programação"};

  strcat(s1,s2);
  printf("%s",s1);
}