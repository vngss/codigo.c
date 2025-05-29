Crie um programa que calcule a média seis números inteiros digitados pelo usuário.

#include <stdio.h>

int main() {
    int numeros[6]; // Vetor para armazenar os 6 números
    int soma = 0;
    float media;

    printf("Digite 6 numeros inteiros:\n");

    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 6.0; // Divide por 6.0 para garantir resultado com ponto flutuante

    printf("A media dos numeros digitados eh: %.2f\n", media);

    return 0;
}

