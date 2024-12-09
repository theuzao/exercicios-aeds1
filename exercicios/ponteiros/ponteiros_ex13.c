//Soma dos elementos de um vetor usando ponteiros
#include <stdio.h>

int somaVetor(int *vet, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += *(vet + i); // Soma usando o ponteiro
    }
    return soma;
}

int main() {
    int vetor[5];
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    int soma = somaVetor(vetor, 5);
    printf("\nSoma dos elementos do vetor: %d\n", soma);

    return 0;
}
