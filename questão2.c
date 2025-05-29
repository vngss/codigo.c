Faça um programa que verifique se um número digitado pelo usuário é par ou ímpar.

#include <stdio.h>

int main() {
    int numero;

    // Solicita o número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }

    return 0;
}
