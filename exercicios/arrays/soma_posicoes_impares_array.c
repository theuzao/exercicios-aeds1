// 5. Soma de Elementos em Posições Ímpares
//Escreva um programa que leia 6 números inteiros para um array e calcule a soma dos elementos que estão em posições ímpares (considerando a primeira posição como índice 0).

// Exemplo de entrada: {10, 20, 30, 40, 50, 60}
// Saída esperada: 120 (soma dos elementos em posições 1, 3 e 5)

#include <stdio.h>

int main() {

    int vetor[6]; // Array com 6 números
    int var = 0;  // Soma dos elementos em posições ímpares

     // Verifica se a posição atual (índice i) é ímpar
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]); // Lê os números

        if (i % 2 != 0) {
            var += vetor[i]; // Soma valores nas posições ímpares
        }
    }

    printf("%d", var); // Imprime a soma
    return 0;
}
