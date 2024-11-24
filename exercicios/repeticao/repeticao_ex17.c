// Triângulo Invertido de Números
// Escreva um programa que imprima um triângulo invertido de números para um número N informado pelo usuário.
// Entrada: N = 4
// Saída: 1234  
//        123  
//        12  
//        1

#include <stdio.h>

int main() {
    
    int n; // Declara a variável para armazenar o número de linhas
    scanf("%d", &n); // Lê o valor de n fornecido pelo usuário
    
    // Loop externo controla o número de linhas da saída
    for (int i = n; i >= 1; i--) { 
        // O loop começa com 'i = n' (linha mais longa) e decrementa até 1

        // Loop interno imprime os números em cada linha
        for (int j = 1; j <= i; j++) {
            // `j` percorre de 1 até o valor atual de 'i', imprimindo números em sequência
            printf("%d", j); // Imprime o número atual
        }

        printf("\n");a
    }
    
    return 0; 
}
