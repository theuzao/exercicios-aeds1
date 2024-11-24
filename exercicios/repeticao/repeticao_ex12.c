// Soma dos Dígitos até Número Único
// Leia um número inteiro e some seus dígitos repetidamente até que o resultado seja um único dígito.
// Entrada: N = 9875
// Saída: Soma dos dígitos: 2

#include <stdio.h>

// Função que soma os dígitos de um número
int somarDigitos(int n) {
    int acumuladora = 0;  // 1, 0 + 5 + 7 + 8 = 29 // 2. 0 + 9 + 2 = 11 // 3. 0 + 1 + 1 = 2
    
    while (n > 0) { // Continua enquanto houver dígitos em `n`
        acumuladora += n % 10; // Soma o último dígito de `n`
        n /= 10; // Remove o último dígito de `n`
    }
    
    return acumuladora; // Retorna a soma acumulada
} 

int main() {
    
    int n;
    
    scanf("%d", &n); // Lê o número fornecido pelo usuário
    
    // Repete a soma dos dígitos até que `n` tenha apenas um dígito
    while (n >= 10) {
        n = somarDigitos(n); // Atualiza `n` com a soma dos dígitos 
    }   //9875, 29, 11, 2
    
    printf("%d\n", n);

    return 0; 
}
