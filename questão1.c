 Crie um programa que calcule a soma de dois números digitados pelo usuário.
  
#include <stdio.h>

int main() {
    float numero1, numero2, soma;

    // Solicita os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    // Realiza a soma
    soma = numero1 + numero2;

    // Exibe o resultado
    printf("A soma de %.2f + %.2f é = %.2f\n", numero1, numero2, soma);

    return 0;
}

