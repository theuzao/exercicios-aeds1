// 4. Média de N números
// Leia N números informados pelo usuário e calcule sua média.

#include <stdio.h>

int main() {
		int n; // Tamanho do vetor
		scanf("%d", &n); // Leitura de N

		int vetor[n]; // Declaração do vetor
		int soma = 0; // Variável para soma dos elementos

		for (int i = 0; i < n; i++) {
				scanf("%d", &vetor[i]); // Leitura dos elementos do vetor
				soma += vetor[i]; // Soma os valores
		}

		int media = soma / n; // Calcula a média
		printf("%d\n", media); // Exibe a média

		return 0;
}
