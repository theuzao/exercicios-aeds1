// Verificação de elementos repetidos
// Escreva um programa que:
// Receba um vetor de números inteiros e verifique se existem elementos repetidos no vetor.
// Exiba uma mensagem indicando se há ou não repetições.
// Exemplo de entrada 1: [1, 2, 3, 4, 5]
// Saída esperada: "Não há elementos repetidos."
// Exemplo de entrada 2: [1, 2, 3, 2, 5]
// Saída esperada: "Há elementos repetidos."

#include <stdio.h>

int main() {

  int vetor[5]; // Declara um vetor para armazenar 5 inteiros
  int repetido = 0; // Variável para indicar se há elementos repetidos

  // Leitura dos elementos do vetor
  for (int i = 0; i < 5; i++) {
    scanf("%d", &vetor[i]);
  }

  // Verificação de elementos repetidos
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) { // Compara o elemento atual com os próximos
      if (vetor[i] == vetor[j]) { // Se elementos forem iguais
        repetido = 1; // Marca que há repetidos
        break; // Interrompe o loop interno
      }
    }
    if (repetido) { // Se repetidos já foram encontrados
      break; // Interrompe o loop externo
    }
  }

  // Exibe se há ou não elementos repetidos
	if (repetido) {
		printf("Ha elementos repetidos\n");
	} else {
		printf("Nao ha elementos repetidos\n");
	}

	printf("\n");
	return 0;
}
