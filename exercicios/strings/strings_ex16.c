// 2) Receber um nome e imprimir as letras na posicaoo impar----------------9
#include <stdio.h>
#include <string.h>

int main() {
	char nome[50];

	printf("Digite um nome: ");
	scanf("%s", nome);

	size_t tamanho = strlen(nome);

	for(int i = 0; i < tamanho; i++) {
		if(i % 2 != 0) {
			printf("%c", nome[i]);
		}
	}

		printf("\n");
		return 0;
	}
