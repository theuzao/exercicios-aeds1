// 1. Soma de Todos os Elementos
// Crie um programa que leia uma matriz  2×2 de inteiros e calcule a soma de todos os elementos.
// Exemplo de entrada:
// 1 2
// 3 4
// Saída esperada: 10

#include <stdio.h>

int main() {
    int matriz[2][2]; // Declaração da matriz 2x2
    int soma = 0; // Variável para armazenar a soma dos elementos

    // Entrada dos valores da matriz
    for (int i = 0; i < 2; i++) { // Laço para as linhas
        for (int j = 0; j < 2; j++) { // Laço para as colunas
            scanf("%d", &matriz[i][j]); // Lê os valores e preenche a matriz
            soma += matriz[i][j]; // Soma o valor lido
        }
    }

    // Exibe a soma total dos elementos da matriz
    printf("%d\n", soma);

    return 0; 
}
