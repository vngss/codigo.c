Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).
a) Opção: a vista com 10% de desconto;
b) Opção: em duas vezes (preço da etiqueta);
c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras
acima de R$100,00).


#include <stdio.h>

int main() {
    float total, valorFinal, parcela;
    int opcao, vezes;

    printf("Digite o total gasto: R$ ");
    scanf("%f", &total);

    printf("\nEscolha a forma de pagamento:\n");
    printf("1 - À vista com 10%% de desconto\n");
    printf("2 - Em 2 vezes (sem juros)\n");
    printf("3 - De 3 até 10 vezes com 3%% de juros ao mês (para compras acima de R$100)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valorFinal = total * 0.90;
            printf("\nPagamento à vista com 10%% de desconto.\n");
            printf("Valor a pagar: R$ %.2f\n", valorFinal);
            break;

        case 2:
            parcela = total / 2;
            printf("\nPagamento em 2 vezes sem juros.\n");
            printf("2 parcelas de R$ %.2f\n", parcela);
            printf("Total: R$ %.2f\n", total);
            break;

        case 3:
            if (total >= 100) {
                printf("Digite o número de parcelas (3 a 10): ");
                scanf("%d", &vezes);

                if (vezes >= 3 && vezes <= 10) {
                    valorFinal = total * (1 + (0.03 * vezes));
                    parcela = valorFinal / vezes;

                    printf("\nPagamento em %d vezes com 3%% de juros ao mês.\n", vezes);
                    printf("%d parcelas de R$ %.2f\n", vezes, parcela);
                    printf("Total: R$ %.2f\n", valorFinal);
                } else {
                    printf("\nNúmero de parcelas inválido. Escolha entre 3 e 10.\n");
                }
            } else {
                printf("\nPara parcelamento em 3 a 10 vezes, a compra precisa ser acima de R$100.00.\n");
            }
            break;

        default:
            printf("\nOpção inválida.\n");
    }

    return 0;
}
