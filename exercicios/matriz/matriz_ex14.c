#include <stdio.h>

void lematriz(int matriz[2][2], char nome) {
    printf("Digite os elementos da matriz %c (2x2):\n", nome);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somaMatrizes(int A[2][2], int B[2][2], int C[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void mostramatriz(int matriz[2][2], char nome) {
    printf("\nMatriz %c:\n", nome);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[2][2], B[2][2], C[2][2];
    lematriz(A, 'A');
    lematriz(B, 'B');
    somaMatrizes(A, B, C);
    mostramatriz(A, 'A');
    mostramatriz(B, 'B');
    mostramatriz(C, 'C');
    return 0;
}
