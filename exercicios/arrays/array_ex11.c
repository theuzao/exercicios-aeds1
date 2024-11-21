// 1. Imprimir apenas os números positivos
// Escreva um programa que:
// Receba um vetor de números inteiros.
// Verifique quais números são positivos (maiores que zero).
// Exiba apenas os números positivos.
// Exemplo de entrada: [-5, 3, -1, 2, 0, 6]
// Saída esperada: 3, 2, 6
  
#include <stdio.h>

int main() {

	int vetor[6]; // Declara um vetor de 6 inteiros.

	// Lê 6 números inteiros do usuário e os armazena no vetor.
	for(int i = 0; i < 6; i++) {
		scanf("%d", &vetor[i]);
	}

	// Percorre o vetor e imprime apenas os números positivos.
	for(int i = 0; i < 6; i++) {
		if(vetor[i] > 0) { // Verifica se o número é positivo.
			printf("%d ", vetor[i]); // Imprime o número positivo.
		}
	}
	
	printf("\n");
	return 0; 
  
}
