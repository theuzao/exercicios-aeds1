#include <stdio.h>

// Função que retorna o menor valor de um vetor
int menor(int *vetor, int tamanho) {
    int menor = vetor[0]; // Inicializa o menor como o primeiro elemento
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i]; // Atualiza o menor, se necessário
        }
    }
    return menor;
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

    // Chama a função para encontrar o menor valor
    int min = menor(vetor, n);

    // Exibe o menor valor
    printf("O menor valor no vetor é: %d\n", min);

    return 0;
}
