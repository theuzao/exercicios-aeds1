// 2. Função para Verificar Número Par
// Escreva uma função que receba um número inteiro e retorne true se o número for par e false se for ímpar.
// Exemplo de uso:
// Entrada: 5
// Saída: false

#include <stdio.h>

// Função que verifica se o número é par e exibe "True" ou "False"
void verificarPar(int num) {
    if (num % 2 == 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}

int main() {
    int num; // Declara a variável para armazenar o número

    scanf("%d", &num); // Lê o número fornecido pelo usuário

    verificarPar(num); // Chama a função para verificar se o número é par

    return 0;
}
