//5. Substituir números negativos por zero
// Escreva um programa que:
// Receba um vetor de números inteiros.
// Substitua todos os números negativos do vetor por zero.
// Exiba o vetor resultante.
// Exemplo de entrada: [-3, 5, -1, 8, 0, -2]
// Saída esperada: [0, 5, 0, 8, 0, 0]

#include <stdio.h>

int main() {

	int vetor[6]; // Declara um vetor de 6 inteiros.

	// Lê 6 números inteiros do usuário.
	for(int i = 0; i < 6; i ++) {
		scanf("%d", &vetor[i]); // Lê o valor para a posição 'i' do vetor.

		// Substitui números negativos por zero.
		if(vetor[i] < 0) {
			vetor[i] = 0; // Atribui zero às posições com valores negativos.
		}
	}

	// Imprime o vetor com números negativos substituídos por zero.
	for(int i = 0; i < 6; i++) {
	    printf("%d ", vetor[i]); // Exibe os valores do vetor.
	}
	
	printf("\n");
	return 0; 
}
