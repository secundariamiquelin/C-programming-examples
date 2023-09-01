#include <stdio.h>

//Você foi contratado para desenvolver um programa que calcule o custo total de um pedido de produtos online. Cada produto tem um preço unitário e uma quantidade selecionada pelo cliente. Seu programa deve receber essas informações para vários produtos e calcular o custo total do pedido, incluindo o custo de envio.

// Considere as seguintes informações:

// O preço de envio padrão é R$ 10,00.
// O preço de cada produto é fornecido pelo usuário.
// A quantidade de cada produto também é fornecida pelo usuário.
// Seu objetivo é criar uma função chamada calcularCustoPedido que recebe o preço e a quantidade de produtos como parâmetros e retorna o custo total dos produtos. Além disso, crie outra função chamada calcularCustoTotal que recebe o custo dos produtos e retorna o custo total do pedido, incluindo o envio.

#include <stdio.h>

float calcularCustoPedido(float preco, int quantidade) {
    float custoPedido = preco * quantidade;
    return custoPedido;
}

float calcularCustoTotal(float custoProdutos) {
    float custoEnvio = 10.0; // Preço de envio padrão
    float custoTotal = custoProdutos + custoEnvio;
    return custoTotal;
}

int main() {
    float preco;
    int quantidade;
   
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &quantidade);

    // Calcula o custo dos produtos usando a função calcularCustoPedido
    float custoProdutos = calcularCustoPedido(preco, quantidade);

    // Calcula o custo total usando a função calcularCustoTotal
    float custoTotal = calcularCustoTotal(custoProdutos);

    printf("O valor total do seu pedido é: R$ %.2f\n", custoTotal);

    return 0;
}
