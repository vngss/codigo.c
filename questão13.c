Crie um programa que calcule a média ponderada de uma lista de notas os pesos devem ser atribuídos pelo usuário, bem como as notas.

#include <stdio.h>

int main() {
    int quantidade;
    float nota, peso, somaNotasPonderadas = 0, somaPesos = 0, mediaPonderada;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite a %dª nota: ", i);
        scanf("%f", &nota);

        printf("Digite o peso da %dª nota: ", i);
        scanf("%f", &peso);

        somaNotasPonderadas += nota * peso;
        somaPesos += peso;
    }

    if (somaPesos != 0) {
        mediaPonderada = somaNotasPonderadas / somaPesos;
        printf("\nA média ponderada é: %.2f\n", mediaPonderada);
    } else {
        printf("\nA soma dos pesos não pode ser zero.\n");
    }

    return 0;
}
