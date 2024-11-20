//3. Reverso do Array
//Escreva um programa que armazene 5 números inteiros em um array e imprima os números na ordem inversa.
//Exemplo de entrada: {1, 2, 3, 4, 5}
//Saída esperada: {5, 4, 3, 2, 1}

#include <stdio.h>

int main () {

    int vetor[5]; // Declara um array de 5 números inteiros

    // Preenche o array com 5 números fornecidos pelo usuário
    for(int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]); // Lê cada número e armazena no array
    }

    // Imprime os números do array na ordem inversa
    for(int i = 4; i >= 0; i--) { // Percorre do último índice até o primeiro 
        printf("%d", vetor[i]); // Exibe o número no índice atual
    }

    return 0; 
}
