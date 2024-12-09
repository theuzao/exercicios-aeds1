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

void mostramatriz(int matriz[3][3]) {
    printf("\nMatriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int menorElemento(int matriz[3][3]) {
    int menor = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

int main() {
    int matriz[3][3];
    lematriz(matriz);
    mostramatriz(matriz);
    int menor = menorElemento(matriz);
    printf("\nO menor elemento da matriz é: %d\n", menor);
    return 0;
}
