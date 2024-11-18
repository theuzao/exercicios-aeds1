//1. Soma dos Elementos
//Escreva um programa que declare um array de 5 números inteiros e calcule a soma de todos os elementos do array.
//Exemplo de entrada: {1, 2, 3, 4, 5}
//Saída esperada: 15

#include <stdio.h>

int main() {

	int vetor[5];
	int soma = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}

	printf("%d", soma);
	return 0;
}
