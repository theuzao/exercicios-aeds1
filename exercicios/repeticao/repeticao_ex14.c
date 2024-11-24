// Número Perfeito
// Leia um número N e determine se ele é perfeito. Um número perfeito é aquele cuja soma dos divisores próprios (excluindo ele mesmo) é igual ao próprio número.
// Entrada:
// N = 6
// Saída: 6 é um número perfeito
// (Explicação:  1 + 2 + 3 = 6)

#include <stdio.h>

int main() {
    
    int n; // Variável para armazenar o número fornecido pelo usuário
    int somaDivisores = 0; // Variável para armazenar a soma dos divisores próprios

    // Lê o número fornecido pelo usuário
    scanf("%d", &n);
    // printf("Valores: ");

    // Loop para encontrar os divisores próprios de n
    for (int i = 1; i < n; i++) {
        if (n % i == 0) { // Verifica se i é divisor de n
            // printf("%d ", i); // Imprime o divisor
            somaDivisores += i; // Soma o divisor à soma total
        }
    }

    // Verifica se a soma dos divisores é igual ao número fornecido
    if (somaDivisores == n) {
        printf("\n%d e um numero perfeito.\n", n); // Número perfeito
    } else {
        printf("\n%d nao e perfeito", n); // Não é número perfeito
    }

    printf("\n");
    return 0; 
}
