// 4. Contar Números Pares
// Crie um programa que leia um array de 8 números inteiros e conte quantos deles são pares.
// Exemplo de entrada: {2, 3, 4, 7, 8, 10, 11, 14}
// Saída esperada: 5

#include <stdio.h>

int main() {

    int vetor[8]; // Array para 8 números
    int par = 0;  // Contador de pares

    // Lê os números e conta os pares
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            par++;
        }
    }

    // Exibe o total de números pares
    printf("%d", par);

    return 0;
}

