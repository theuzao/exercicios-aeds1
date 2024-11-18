// 4. Procedimento para Exibir Valores de um Array
// Crie um procedimento que receba um array de inteiros e imprima todos os seus elementos.
// Exemplo de uso:
// Entrada: {1, 2, 3, 4, 5}
// Saída: 1 2 3 4 5

#include <stdio.h>

// Função que exibe os valores do vetor
void exibirValores(int vetor[]) {
	for (int i = 0; i < 5; i++) { // Percorre os 5 elementos do vetor
		printf("%d", vetor[i]); // Imprime cada elemento do vetor
	}
}

int main() {
	int vetor[5]; // Declaração do vetor com 5 posições

	// Leitura dos valores para o vetor
	for (int i = 0; i < 5; i++) {
		scanf("%d", &vetor[i]); // Lê cada valor e armazena no vetor
	}

	exibirValores(vetor); // Passa o vetor inteiro para a função exibirValores
	return 0;
}
