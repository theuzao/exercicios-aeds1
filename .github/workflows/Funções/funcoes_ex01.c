// 1. Procedimento de Saudação
// Crie um procedimento que receba um nome como parâmetro e imprima uma saudação personalizada.
// Exemplo de uso:
// Entrada: "Maria"
// Saída: "Olá, Maria!"

#include <stdio.h>

// Procedimento que imprime o nnome
void nomeProcedimento(char nomeUsuario[]) {
	printf("Olá, %s\n", nomeUsuario); // Imprime a mensagem com o nome recebido
}

int main() {
	
	char nomeUsuario[15]; // Declara um array para armazenar o nome do usuário
	scanf("%s", nomeUsuario); // Lê o nome 

	nomeProcedimento(nomeUsuario); // Chama o procedimento para exibir a mensagem
}
