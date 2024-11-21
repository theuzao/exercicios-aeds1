// Separar números positivos e negativos
// Faça um programa que:
// Receba um vetor de números inteiros e crie dois novos vetores: um para armazenar os números positivos e outro para os números negativos.
// Exiba os dois vetores separados.
// Exemplo de entrada: [1, -2, 3, -4, 5, -6]
// Saída esperada:
// Positivos: [1, 3, 5]
// Negativos: [-2, -4, -6]

#include <stdio.h>

int main() {

	int vetor[6];
	int vetorNegativos[6] = {0};
	int vetorPositivos[6] = {0};

	// Leitura dos números e separação em positivos e negativos
	for (int i = 0; i < 6; i++) {
		scanf("%d", &vetor[i]);

		if (vetor[i] < 0) {
			vetorNegativos[i] = vetor[i];
		} else {
			vetorPositivos[i] = vetor[i];
		}
	}

	// Imprimindo os números positivos
	printf("Positivos:\n");
	for (int i = 0; i < 6; i++) {
		if (vetorPositivos[i] != 0) {
			printf("%d ", vetorPositivos[i]);
		}
	}
	printf("\n");

	// Imprimindo os números negativos
	printf("Negativos:\n");
	for (int i = 0; i < 6; i++) {
		if (vetorNegativos[i] != 0) {
			printf("%d ", vetorNegativos[i]);
		}
	}
	printf("\n");

	return 0;
}
