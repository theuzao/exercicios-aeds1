#include <stdio.h>

// Função para calcular a média dos valores do vetor
float calcularMedia(int *vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho; // Retorna a média como um valor float
}

// Procedimento para exibir os elementos abaixo da média
void mostrarAbaixoMedia(int *vetor, int tamanho, float media) {
    printf("Elementos abaixo da média:\n");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < media) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
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

    // Calcula a média dos valores do vetor
    float media = calcularMedia(vetor, n);

    // Exibe a média
    printf("A média dos valores é: %.2f\n", media);

    // Chama o procedimento para mostrar os valores abaixo da média
    mostrarAbaixoMedia(vetor, n, media);

    return 0;
}
