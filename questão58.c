// 58. Elabore um algoritmo em C que leia um número inteiro não negativo e calcule o seu fatorial(multiplicando os números sucessivamente). Se o usuário digitar um número negativo, o programa deve solicitar novamente uma entrada válida até que um número maior ou igual a zero seja fornecido.

#include <stdio.h>

int main() {
    int numero;
    unsigned long long fatorial = 1; 
    do {
        printf("Digite um número inteiro não negativo: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Número inválido. Por favor, digite um número maior ou igual a zero.\n");
        }
    } while (numero < 0);

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %llu\n", numero, fatorial);

    return 0;
}
