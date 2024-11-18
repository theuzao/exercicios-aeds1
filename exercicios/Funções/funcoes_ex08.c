// 4. Função para Calcular a Média de Dois Números
// Escreva uma função que receba dois números reais e retorne a média aritmética entre eles.
// Exemplo de uso:
// Entrada: 6 e 8
// Saída: 7

#include <stdio.h>

// Função que calcula a média aritmética de dois números
float mediaAritmetica(float n1, float n2) {
    return (n1 + n2) / 2; // Retorna a média
}

int main() {
    float n1, n2; // Declaração das notas

    // Lê duas notas fornecidas pelo usuário
    scanf("%f %f", &n1, &n2);

    // Imprime a média com uma casa decimal
    printf("%.1f\n", mediaAritmetica(n1, n2));

    return 0;
}
