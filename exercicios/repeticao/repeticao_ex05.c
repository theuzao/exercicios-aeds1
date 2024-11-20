// 5. Soma dos pares entre 1 e 100
// Calcule e imprima a soma de todos os números pares entre 1 e 100.
#include <stdio.h>

int main() {

	int soma = 0; // Variável para acumular a soma dos números pares
	
	for(int i = 1; i <= 100; i++) { // Laço para iterar de 1 a 100
		if(i % 2 == 0) { // Verifica se o número é par
			soma += i; // Soma o número par à variável soma
		}
	}

	printf("%d\n", soma); // Exibe a soma dos números pares
	return 0;
  
}
