// Contagem de Divisores
// Crie um programa que leia um número N e exiba todos os seus divisores.
// Entrada: N = 12
// Saída: Divisores: 1, 2, 3, 4, 6, 12

#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);
    printf("Divisores: ");

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { // Verifica se i é divisor de n
            if (i == n) {
                printf("%d", i); // Não imprime vírgula após o último divisor
            } else {
                printf("%d, ", i); // Imprime o divisor seguido de uma vírgula
            }
        }
    }

    printf("\n");
    return 0;
}
