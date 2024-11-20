// 6. Fatorial de um número
// Peça um número ao usuário e calcule seu fatorial.

#include <stdio.h>

int main() {

	int n; // Variável para armazenar o número
	int fatorial = 1; // Inicializa o fatorial com 1 (elemento neutro da multiplicação)

	scanf("%d", &n); // Lê o número do usuário

	for(int i = 1; i <= n; i++) { // Laço que multiplica os números de 1 até n
		fatorial *= i; // Atualiza o fatorial com o produto atual
	}

	printf("%d\n", fatorial); // Exibe o resultado do fatorial

	return 0;
}
