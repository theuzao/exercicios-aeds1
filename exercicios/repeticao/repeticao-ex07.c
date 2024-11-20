// 7. Contar números pares e ímpares
// Peça 10 números ao usuário e conte quantos são pares e quantos são ímpares.

#include <stdio.h>

int main() {
	int vetor[10]; // Vetor para armazenar 10 números inteiros
	int parContador = 0, imparContador = 0; // Contadores para números pares e ímpares

	// Laço para leitura dos números e contagem
	for(int i = 0; i < 10; i++) {
		scanf("%d", &vetor[i]); // Lê o número do usuário

		if(vetor[i] % 2 == 0) { // Verifica se o número é par
			parContador++; // Incrementa o contador de pares
		} else { // Caso contrário, é ímpar
			imparContador++; // Incrementa o contador de ímpares
		}
	}

	// Exibe o resultado
	printf("Pares: %d, Impares: %d\n", parContador, imparContador);

	return 0;
}
