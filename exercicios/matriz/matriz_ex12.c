#include <stdio.h>

void lematriz(int matriz[4][4]) {
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostramatriz(int matriz[4][4]) {
    printf("\nMatriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somaPorLinha(int matriz[4][4], int soma[4]) {
    for (int i = 0; i < 4; i++) {
        soma[i] = 0;
        for (int j = 0; j < 4; j++) {
            soma[i] += matriz[i][j];
        }
    }
}

int main() {
    int matriz[4][4];
    int soma[4];
    
    lematriz(matriz);
    mostramatriz(matriz);
    
    somaPorLinha(matriz, soma);
    printf("\nSoma dos elementos de cada linha:\n");
    for (int i = 0; i < 4; i++) {
        printf("Linha %d: %d\n", i, soma[i]);
    }
    return 0;
}
