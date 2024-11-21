// 3. Contagem de números pares
// Escreva um programa que:
// Receba um vetor de números inteiros.
// Conte quantos números pares existem no vetor.
// Exiba a quantidade de números pares.
// Exemplo de entrada: [1, 2, 3, 4, 5, 6]
// Saída esperada: 3 (os números pares são 2, 4, 6)

#include <stdio.h>

int main() {

	int vetor[6]; // Declara um vetor de 6 inteiros.
	int pares = 0; // Inicializa a variável que conta números pares.

	// Lê 6 números inteiros do usuário e os armazena no vetor.
	for(int i = 0; i < 6; i ++) {
		scanf("%d", &vetor[i]);

		// Verifica se o número é par e incrementa o contador.
		if(vetor[i] % 2 == 0) {
			pares++;
		}
	}

	// Exibe a quantidade total de números pares.
	printf("%d\n", pares);

	// Percorre o vetor e exibe apenas os números pares.
	for(int i = 0; i < 6; i++) {
		if(vetor[i] % 2 == 0) {
			printf("%d ", vetor[i]);
		}
	}
	
	printf("\n");
	return 0;
}
