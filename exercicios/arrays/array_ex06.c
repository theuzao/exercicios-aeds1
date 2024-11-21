// 1. Soma dos números pares em um vetor
// Crie um programa que receba um vetor de números inteiros. O programa deve:
// Percorrer o vetor utilizando uma estrutura de repetição.
// Somar apenas os números pares contidos no vetor.
// Exibir o resultado da soma.
// Exemplo de entrada: [1, 2, 3, 4, 5, 6]
// Saída esperada: 12 (soma de 2 + 4 + 6)

#include <stdio.h>

int main() {

    int vetor[6]; // Declara um vetor de 6 inteiros
    int soma = 0; // Inicializa a variável soma com 0
	
    // Loop para ler os valores do vetor
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]); // Lê um número inteiro e armazena no vetor na posição i

        // Verifica se o número é par
        if(vetor[i] % 2 == 0) {
            soma += vetor[i]; // Soma o valor ao total se for par
        }
    }

    // Exibe a soma dos números pares lidos
    printf("%d\n", soma);
    return 0;
}
