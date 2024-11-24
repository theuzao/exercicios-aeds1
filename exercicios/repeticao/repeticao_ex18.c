// Simulação de Dígitos Binários
// Leia um número decimal N e converta-o para sua representação binária usando divisões sucessivas.
// Entrada: N = 10
// Saída: Binário: 1010

#include <stdio.h>

int main() {
    int n;
    int binario[32]; // Vetor para armazenar os restos 
    int i = 0; // Índice para o vetor

    // Lê o número decimal
    scanf("%d", &n);

    // Calcula os restos sucessivos enquanto n for maior que 0
    while (n > 0) {
        binario[i] = n % 2; // Armazena o resto da divisão por 2
        n = n / 2; // Atualiza n dividindo-o por 2
        i++; // Incrementa o índice
    }

    // Imprime o número binário na ordem inversa
    printf("Binário: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]); // Imprime os bits na ordem correta
    }
    printf("\n");

    return 0;
}
