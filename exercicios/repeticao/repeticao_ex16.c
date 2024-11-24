// Sequência Collatz
// Implemente o cálculo da sequência de Collatz para um número N dado. A sequência segue as regras:
// Se N for par:  N = N / 2
// Se N for ímpar:  N = 3 ∗ N + 1
// O programa deve terminar quando N = 1.
// Entrada: N = 6
// Saída: 6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
  
#include <stdio.h>

int main() {
    
    int n;

    // Lê o valor inicial
    scanf("%d", &n);

    // Imprime a sequência de Collatz
    while (n != 1) {
        printf("%d -> ", n); // Imprime o valor atual de n
        if (n % 2 == 0) {
            n = n / 2; // Para números pares, divide por 2
        } else {
            n = 3 * n + 1; // Para números ímpares, aplica 3n + 1
        }
    }
    
    // Imprime o valor final 1
    printf("1\n");

    return 0;
}
