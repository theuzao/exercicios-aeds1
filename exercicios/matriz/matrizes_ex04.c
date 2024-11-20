// 3. Soma dos Elementos de Cada Linha
// Crie um programa que leia uma matriz  3×3 e calcule a soma dos elementos de cada linha.

#include <stdio.h>

int main() {
    int matriz[3][3]; // Declaração da matriz 3x3
    int soma; // Variável para armazenar a soma de cada linha

    // Entrada da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]); // Lê os valores da matriz
        }
    }

    // Calcula e exibe a soma dos elementos de cada linha
    for (int i = 0; i < 3; i++) {
        soma = 0; // Zera a soma para cada linha
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j]; // Soma os elementos da linha
        }
        printf("Linha %d: %d\n", i + 1, soma); // Exibe a soma da linha
    }

    return 0;
}

