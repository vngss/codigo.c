Crie um programa que encontre o maior número em uma lista de três números digitados pelo usuário.

#include <stdio.h>

int main() {
    int num1, num2, num3, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    maior = num1; // assume que o primeiro é maior

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    printf("O maior numero e: %d\n", maior);

    return 0;
}
