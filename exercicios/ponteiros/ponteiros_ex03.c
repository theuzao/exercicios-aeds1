#include <stdio.h>

// Função que retorna o maior valor de um vetor
int maior(int *vetor, int tamanho) {
    int maior = vetor[0]; // Inicializa o maior como o primeiro elemento
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i]; // Atualiza o maior, se necessário
        }
    }
    return maior;
}

int main() {
    int n;

    // Lê o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n]; // Declaração do vetor com tamanho definido pelo usuário

    // Lê os elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chama a função para encontrar o maior valor
    int max = maior(vetor, n);

    // Exibe o maior valor
    printf("O maior valor no vetor é: %d\n", max);

    return 0;
}
