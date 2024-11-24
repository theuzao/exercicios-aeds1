// Soma dos Quadrados
// Leia um número N e calcule a soma dos quadrados dos números de 1 a N.
// Entrada: N = 3
// Saída: Soma dos quadrados: 14 
// Explicação 1²+2²+3² = 14

#include <stdio.h>

int main() {
    
    int n; // Declara uma variável para armazenar o número
    int operacao = 0; // Variável para acumular a soma dos quadrados dos números
    
    scanf("%d", &n); // Lê o valor de 'n' 
    
    // Loop para calcular a soma dos quadrados de 0 até n
    for (int i = 0; i <= n; i++) { 
        operacao += i * i; // Adiciona a soma do quadrado de i à variável 'operacao'
    }
    
    printf("%d\n", operacao); // Imprime o resultado final da soma dos quadrados
    return 0; 
}


