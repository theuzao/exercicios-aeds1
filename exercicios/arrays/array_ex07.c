// 2. Contagem de elementos maiores que a média
// Escreva um programa que:
// Receba um vetor de números reais.
// Calcule a média aritmética dos elementos do vetor.
// Conte quantos elementos são maiores que a média e exiba esse número.
// Exemplo de entrada: [10.0, 20.0, 30.0, 40.0, 50.0]
// Saída esperada: 2 (elementos 40.0 e 50.0 são maiores que a média 30.0)

#include <stdio.h>

int main() {

    double vetor[5]; // Declara um vetor para armazenar 5 números de ponto flutuante
    double soma = 0; // Variável para acumular a soma dos números
    double media = 0; // Variável para armazenar a média dos números
    int maiores = 0; // Variável para contar quantos números são maiores que a média

    // Loop para ler os 5 números e calcular a soma
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetor[i]); // Lê um número de ponto flutuante e armazena no vetor
        soma += vetor[i]; // Soma o número lido à variável soma
    }

    // Calcula a média dos números
    media = soma / 5;

    // Exibe a média com duas casas decimais
    printf("Media: %0.2lf\n", media);

    // Loop para contar quantos números são maiores que a média
    for (int i = 0; i < 5; i++) {
        if (vetor[i] > media) { // Verifica se o número atual é maior que a média
            maiores++; // Incrementa o contador se a condição for verdadeira
        }
    }

    printf("Quantidade de numeros maiores que a media: %d\n", maiores);
    return 0; 
}
