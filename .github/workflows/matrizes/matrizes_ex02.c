// 2. Maior Elemento da Matriz
// Escreva um programa que leia uma matriz 3×3 e encontre o maior número entre os elementos.
// Exemplo de entrada:
// 3 5 1
// 4 8 2
// 7 6 9
// Saída esperada: 9

#include <stdio.h>

int main() {
    int matriz[3][3]; // Declaração da matriz 3x3
    int var = 0; // Variável para armazenar o maior valor encontrado

    // Entrada e busca pelo maior valor
    for (int i = 0; i < 3; i++) { // Percorre as linhas
        for (int j = 0; j < 3; j++) { // Percorre as colunas
            scanf("%d", &matriz[i][j]); // Lê os valores da matriz
            if (var < matriz[i][j]) { // Verifica se o valor atual é maior que o maior valor armazenado
                var = matriz[i][j]; // Atualiza o maior valor
            }
        }
    }

    // Exibe o maior valor encontrado
    printf("%d\n", var);

    return 0; // 
}
