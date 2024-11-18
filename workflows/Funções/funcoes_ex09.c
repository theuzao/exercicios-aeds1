// 5. Função para Converter Celsius em Fahrenheit
// Crie uma função que receba uma temperatura em graus Celsius e retorne o equivalente em Fahrenheit.
// Fórmula: F = C × 1.8 + 32
// Exemplo de uso:
// Entrada: 0
// Saída: 32

#include <stdio.h>

// Função que converte Celsius para Fahrenheit
float conversao(float celsius) {
    return (celsius * 1.8) + 32; // Retorna o valor em Fahrenheit
}

int main() {
    float celsius; // Declaração da variável para Celsius

    // Lê o valor de temperatura em Celsius
    scanf("%f", &celsius);

    // Imprime o resultado da conversão com uma casa decimal
    printf("%.1f\n", conversao(celsius));

    return 0;
}
