// 1. Função para Calcular o Dobro
// Crie uma função que receba um número inteiro e retorne o dobro desse número.
// Exemplo de uso:
// Entrada: 4
// Saída: 8

#include <stdio.h>

// Função que calcula o dobro de um número
int calculo(int num) {
    int dobro;
    dobro = num * 2; // Calcula o dobro
    return dobro;    // Retorna o resultado
}

int main() {
    int num;

    // Lê o número fornecido pelo usuário
    scanf("%d", &num);

    // Armazena o valor retornado pela função
    int dobro = calculo(num);

    // Exibe o resultado
    printf("O dobro de %d é: %d\n", num, dobro);

    return 0;
}
