 Construa um programa que lê 10 valores e imprime o maior e o menor valores lidos.

#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite o 1º número: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("\nO maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
