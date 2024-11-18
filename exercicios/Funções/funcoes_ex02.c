// 2. Procedimento para Imprimir Números de 1 a N
// Crie um procedimento que receba um número inteiro N e imprima todos os números de 1 até N.
// Exemplo de uso:
// Entrada: 5
// Saída: 1 2 3 4 5

#include <stdio.h>

// Procedimento que imprime números de 1 até num
void numero(int num) {
    for (int i = 1; i <= num; i++) { // Laço de 1 até num
        printf("%d", i); // Imprime cada número
    }
}

int main() {
    int num; // Declaração da variável para armazenar o número

    scanf("%d", &num); // Lê o número fornecido pelo usuário
    numero(num); // Chama o procedimento para imprimir os números

    return 0; 
}
