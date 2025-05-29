 Escreva um programa que determine se um número digitado pelo usuário é uma potência de 2.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
        return 0;
    }
 
    if ((numero & (numero - 1)) == 0) {
        printf("%d é uma potência de 2.\n", numero);
    } else {
        printf("%d NÃO é uma potência de 2.\n", numero);
    }

    return 0;
}
