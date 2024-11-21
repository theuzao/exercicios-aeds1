//4. Encontrar o menor número no vetor
// Escreva um programa que:
// Receba um vetor de números inteiros.
// Encontre e exiba o menor número presente no vetor.
// Exemplo de entrada: [3, 7, 2, 9, 5]
// Saída esperada: 2

#include <stdio.h>

int main() {

	int vetor[5]; // Declara um vetor de 5 inteiros.
	int temp;     // Variável para armazenar o menor valor encontrado.

	// Lê 5 números inteiros do usuário e os armazena no vetor.
	for(int i = 0; i < 5; i++) {
		scanf("%d", &vetor[i]);
	}
	
	temp = vetor[0]; // Inicializa a variável 'temp' com o valor do primeiro elemento do vetor.

	// Percorre o vetor para encontrar o menor valor.
	for(int i = 0; i < 5; i++) {
		if(vetor[i] < temp) { // Se o elemento atual for menor que 'temp', atualiza 'temp'.
			temp = vetor[i];
		}
	}

    printf("%d\n", temp); 
    return 0;             
}
