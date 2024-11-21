// 2. Multiplicação de todos os elementos por 2
// Escreva um programa que:
// Receba um vetor de números inteiros.
// Multiplique cada elemento do vetor por 2.
// Exiba o vetor resultante.
// Exemplo de entrada: [1, 2, 3, 4]
// Saída esperada: [2, 4, 6, 8]

#include <stdio.h>

int main() {

	int vetor[4]; // Declara um vetor de 4 inteiros.

	// Lê 4 números inteiros do usuário e os armazena no vetor.
	for(int i = 0; i < 4; i ++) {
		scanf("%d", &vetor[i]); // Lê o valor para a posição 'i' do vetor.
	}

	// Percorre o vetor e exibe o dobro de cada elemento.
	for(int i = 0; i < 4; i ++) {
		printf("%d", vetor[i]*2); // Calcula e imprime o dobro do valor armazenado.
	}
	
	printf("\n"); 
	return 0; /

}
