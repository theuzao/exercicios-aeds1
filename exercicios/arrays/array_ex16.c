// Busca Sequencial
// Leia um vetor de N elementos e um número X. Verifique se X está presente no vetor e informe sua posição (ou -1 se não encontrado).
// Entrada: N = 5, Vetor: [1, 3, 5, 7, 9], X = 7
// Saída: Posição: 3

#include <stdio.h>

int main() {

    int n;

    printf("N = ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int x;

    printf("X = ");
    scanf("%d", &x);

    int posicao = -1; // Inicializa a posição como -1 (não encontrado)

    for (int i = 0; i < n; i++) { 
        if (x == vetor[i]) {
            posicao = i; // Atualiza a posição se encontrado
            break;
        }
    }

    if (posicao != -1) {
        printf("Posição: %d\n", posicao);
    } else {
        printf("Posição: -1\n");
    }

    return 0;
}
