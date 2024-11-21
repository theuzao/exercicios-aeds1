// 5. Ordenação de elementos em ordem decrescente
// Escreva um programa que:
// Receba um vetor de números inteiros.
// Ordene os elementos do vetor em ordem decrescente manualmente (sem utilizar funções prontas de ordenação, como sort() ou equivalentes).
// Exiba o vetor ordenado.

#include <stdio.h>

int main() {
		int vetor[5] = {5, 2, 8, 1, 3}; 
		int tamanho = 5; // Tamanho do vetor

		// (Bubble Sort em ordem decrescente)
		for (int i = 0; i < tamanho - 1; i++) {
				for (int j = 0; j < tamanho - i - 1; j++) {
						if (vetor[j] < vetor[j + 1]) {
								// Troca os elementos se estiverem fora de ordem
								int temp = vetor[j];
								vetor[j] = vetor[j + 1];
								vetor[j + 1] = temp;
						}
				}
		}

		// Exibe o vetor ordenado
		printf("Vetor ordenado em ordem decrescente:\n");
		for (int i = 0; i < tamanho; i++) {
				printf("%d ", vetor[i]);
		}
		printf("\n");

		return 0;
}
