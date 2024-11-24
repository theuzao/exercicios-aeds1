// Contagem Decrescente
// Escreva um programa que imprima os números de N até 1, onde N é informado pelo usuário.
// Entrada: N = 5
// Saída: 5 4 3 2 1

#include <stdio.h>

int main() {
    
    int n; 
    
    scanf("%d", &n); // Lê o valor de 'n' inserido pelo usuário
    
    // Loop para gerar a sequência decrescente de 'n' até '1'
    for (int i = 0; i < n; i++) { 
        printf("%d ", n - i); // Calcula e imprime o valor atual da sequência
    }
    
    printf("\n");
    return 0; 
}
