// 4. Soma dos Elementos de Cada Coluna
// Escreva um programa que leia uma matriz  3×3 e calcule a soma dos elementos de cada coluna.#include <stdio.h>

int main() {
    int matriz[3][3]; // Declaração da matriz 3x3
    int soma; // Variável para armazenar a soma de cada coluna

    // Entrada dos elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula e exibe a soma de cada coluna
    for (int j = 0; j < 3; j++) { // Percorre as colunas
        soma = 0; // Zera a soma para cada coluna
        for (int i = 0; i < 3; i++) { // Percorre as linhas
            soma += matriz[i][j]; // Soma os elementos da coluna
        }
        printf("Coluna %d: %d\n", j + 1, soma); // Exibe a soma da coluna
    }

    return 0;
}
