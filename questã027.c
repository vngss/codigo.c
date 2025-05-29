Fazer um programa que lê o preço de um produto e inflaciona esse preço em
10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

#include <stdio.h>

int main() {
    float preco, novoPreco;

    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    if (preco < 100) {
        novoPreco = preco * 1.10; 
    } else {
        novoPreco = preco * 1.20;
    }

    printf("O novo preço do produto é: R$ %.2f\n", novoPreco);

    return 0;
}
