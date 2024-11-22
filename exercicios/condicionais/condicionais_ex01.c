// Exercício 1: Verificar número par ou ímpar
// Crie um programa que receba um número inteiro do usuário e determine se ele é par ou ímpar.

#include <stdio.h>

int main() {
    
    int n; // Declara uma variável para armazenar o número

    scanf("%d", &n); // Lê um número inteiro inserido pelo usuário

    if (n % 2 == 0) { // Verifica se o número é divisível por 2 (par)
        printf("Par");
    } else { 
        printf("Impar"); 
    }
    
    printf("\n");
    return 0;
}
