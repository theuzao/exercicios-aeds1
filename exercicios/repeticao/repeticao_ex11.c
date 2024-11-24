// Padrão de Asteriscos Alternados
// Implemente um programa que desenha um padrão alternado de asteriscos e traços em uma linha para N colunas.
// Entrada: N = 6
// Saída: *-*-*-

#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n); // Lê o número de colunas
    
    char vetor[n]; // Declara o vetor de tamanho n
    
    // Preenche o vetor com o padrão alternado
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Índice par: '*'
            vetor[i] = '*';
        } else { // Índice ímpar: '-'
            vetor[i] = '-';
        }
    }
    
    // Imprime o padrão armazenado no vetor
    for (int i = 0; i < n; i++) {
        printf("%c", vetor[i]); // Imprime cada caractere
    }
    
    printf("\n"); 
    return 0;
}
