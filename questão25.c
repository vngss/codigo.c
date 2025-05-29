Elabore um programa que pergunte um valor em graus Fahrenheit e imprima no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.

  
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversão de Fahrenheit para Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fahrenheit, celsius);

    return 0;
}
