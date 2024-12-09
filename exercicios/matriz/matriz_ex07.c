#include <stdio.h>

int main() {
    int M, N;

    // Lê o número de linhas (M) e colunas (N)
    printf("Digite o número de linhas (M): ");
    scanf("%d", &M);
    printf("Digite o número de colunas (N): ");
    scanf("%d", &N);

    int matriz[M][N];

    // Lê os valores da matriz
    printf("Digite os elementos da matriz (%dx%d):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibe a matriz original
    printf("\nMatriz original:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Aplica a fórmula +2ij
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] += 2 * i * j;
        }
    }

    // Exibe a matriz modificada
    printf("\nMatriz após a modificação (+2ij):\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
