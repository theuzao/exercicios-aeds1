#include <stdio.h>

void lematriz(int matriz[3][3]) {
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int ehIdentidade(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && matriz[i][j] != 1) return 0; // Diagonal principal
            if (i != j && matriz[i][j] != 0) return 0; // Fora da diagonal
        }
    }
    return 1; // É identidade
}

int main() {
    int matriz[3][3];
    lematriz(matriz);

    if (ehIdentidade(matriz)) {
        printf("\nA matriz é uma matriz identidade.\n");
    } else {
        printf("\nA matriz NÃO é uma matriz identidade.\n");
    }
    return 0;
}
