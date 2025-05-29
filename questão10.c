Escreva um programa que receba as medidas dos três lados de um triângulo e determine se ele é isósceles, escaleno ou equilátero.

#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o primeiro lado do triângulo: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado do triângulo: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    // Verificar se forma um triângulo
    if ((lado1 < lado2 + lado3) &&
        (lado2 < lado1 + lado3) &&
        (lado3 < lado1 + lado2)) {

        // Verificar tipo do triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("É um triângulo EQUILÁTERO.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("É um triângulo ISÓSCELES.\n");
        } else {
            printf("É um triângulo ESCALENO.\n");
        }

    } else {
        printf("Os valores digitados NÃO formam um triângulo.\n");
    }

    return 0;
}

