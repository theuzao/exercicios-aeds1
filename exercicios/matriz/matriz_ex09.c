#include <stdio.h>

void leMatriz(int matriz[2][3], char nome) {
    printf("Digite os elementos da matriz %c (2x3):\n", nome);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somaMatrizes(int A[2][3], int B[2][3], int C[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int maiorElemento(int matriz[2][3]) {
    int maior = matriz[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

void mostraMatriz(int matriz[2][3], char nome) {
    printf("\nMatriz %c:\n", nome);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[2][3], B[2][3], C[2][3];

    // Lê as matrizes A e B
    leMatriz(A, 'A');
    leMatriz(B, 'B');

    // Soma as matrizes
    somaMatrizes(A, B, C);

    // Mostra matrizes
    mostraMatriz(A, 'A');
    mostraMatriz(B, 'B');
    mostraMatriz(C, 'C');

    // Encontra e exibe o maior elemento da matriz soma
    int maior = maiorElemento(C);
    printf("\nMaior elemento da matriz soma: %d\n", maior);

    return 0;
}
