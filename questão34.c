Fazer um programa que pergunta o nome, o endereço, o telefone e a idade de uma pessoa e monta um string com a seguinte frase:
&quot;Seu nome é ..., você tem ... anos, mora na rua ... e seu telefone é ... .&quot;

#include <stdio.h>

int main() {
    char nome[50], endereco[50], telefone[20];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu endereço: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite seu telefone: ");
    fgets(telefone, sizeof(telefone), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nSeu nome é %sVocê tem %d anos, mora na rua %se seu telefone é %s", 
           nome, idade, endereco, telefone);

    return 0;
}
