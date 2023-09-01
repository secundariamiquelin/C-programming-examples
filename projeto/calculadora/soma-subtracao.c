#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

int num1,num2,op;

printf("Dígite 1 para somar ou 2 para subtrar: \n");
scanf("%d" ,&op);

printf("Dígite o primeiro numero\n");
scanf("%d",&num1);
  
printf("Dígite o segundo numero\n");
scanf("%d",&num2);

if(op == 1){
  num1 = num1 + num2;
  printf("O resultado da soma é: %d",num1);
}else{
  num1 = num1 - num2;
  printf("O resultado da subtração é: %d",num1);
}

return 0;

}