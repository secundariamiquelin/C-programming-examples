#include <stdio.h>

// // Declaração da função calcularAreaRetangulo
// float calcularAreaRetangulo(float x, float y);

// int main() {
//     // Chamando a função calcularAreaRetangulo e armazenando o resultado na variável 'area'
//     float area = calcularAreaRetangulo(10.0, 20.0);

//     // Imprimindo o resultado
//     printf("Área é: %f", area);

//     return 0;
// }

// // Definição da função calcularAreaRetangulo
// float calcularAreaRetangulo(float base, float altura) {
//     // Cálculo da área do retângulo e armazenamento na variável 'area'
//     float area = base * altura;

//     // Retornando o resultado do cálculo da área
//     return area;
// }


//PASSO A PASSO PARA CRIAR UMA FUNÇÂO

int somarNumeros(int a , int b){
    int resultado = a + b;
    return resultado;
}

int main (){
    int  numero1, numero2, resultado;

   printf("Dígite o primeiro número ");
   scanf("%d",&numero1);

   printf("Dígite o segundo número ");
   scanf("%d",&numero2);

   resultado = somarNumeros(numero1, numero2);

   printf("Resultado final:%d ", resultado);

}

 
// int multiplicarNumeros (int a , int b){
//     int resultado = a * b;
//     return resultado;
// }

// int main (){
//     int number1, number2,result;

//     printf("Dígite o primeiro número ");
//     scanf("%d",&number1);

//     printf("Dígite o segundo número ");
//     scanf("%d", &number2);

//     result = multiplicarNumeros (number1, number2);

//     printf("Result: %d", result);
// }