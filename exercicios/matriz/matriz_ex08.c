#include <stdio.h>

void multiplicaEscalar(int matriz[][10], int linhas, int colunas, int escalar) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] *= escalar; // Multiplica pelo escalar
        }
    }
}

void mostraMatriz(int matriz[][10], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int M, N, escalar;
    int matriz[10][10];

    // Lê as dimensões da matriz
    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &M, &N);

    // Lê a matriz
    printf("Digite os elementos da matriz (%dx%d):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Lê o escalar
    printf("Digite o valor do escalar: ");
    scanf("%d", &escalar);

    // Mostra matriz original
    printf("\nMatriz original:\n");
    mostraMatriz(matriz, M, N);

    // Multiplica e mostra matriz modificada
    multiplicaEscalar(matriz, M, N, escalar);
    printf("\nMatriz após multiplicação por escalar:\n");
    mostraMatriz(matriz, M, N);

    return 0;
}
