#include <stdio.h>

void leMatriz(int matriz[3][2]) {
    printf("Digite os elementos da matriz (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void transposta(int original[3][2], int transposta[2][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transposta[j][i] = original[i][j];
        }
    }
}

void mostraMatriz3x2(int matriz[3][2]) {
    printf("\nMatriz 3x2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void mostraMatriz2x3(int matriz[2][3]) {
    printf("\nMatriz transposta 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][2], matrizTransposta[2][3];

    // Lê a matriz original
    leMatriz(matriz);

    // Mostra a matriz original
    mostraMatriz3x2(matriz);

    // Gera a matriz transposta
    transposta(matriz, matrizTransposta);

    // Mostra a matriz transposta
    mostraMatriz2x3(matrizTransposta);

    return 0;
}
