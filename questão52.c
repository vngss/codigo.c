52. Desenvolva um algoritmo em C que leia uma série de notas de alunos até que o usuário digite um valor negativo (por exemplo, -1). Ao final, o programa deve calcular e exibir a média aritmética das notas válidas inseridas.

#include <stdio.h>

int main() {
    float nota, soma = 0;
    int contador = 0;

    printf("Digite as notas dos alunos (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Nota %d: ", contador + 1);
        scanf("%f", &nota);

        if (nota < 0) {
            break;
        }

        soma += nota;
        contador++;
    }

    if (contador == 0) {
        printf("Erro.\n");
    } else {
        float media = soma / contador;
        printf("A média aritmética das notas é: %.2f\n", media);
    }

    return 0;
}
  















  
