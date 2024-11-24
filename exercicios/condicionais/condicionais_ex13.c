// Simulador de Sistema de Pontuação
// Desenvolva um sistema de pontuação para um jogo. Com base nos pontos do jogador, exiba a seguinte mensagem:
// Pontos < 100: Iniciante
// Pontos entre 100 e 500: Intermediário
// Pontos entre 501 e 1000: Avançado
// Pontos > 1000: Mestre
// Entrada: 650
// Saída: Classificação: Avançado

#include <stdio.h>

int main() {
    
    int pontuacao; // Variável para armazenar a pontuação do usuário

    // Lê a pontuação fornecida pelo usuário
    scanf("%d", &pontuacao);

    // Verifica as faixas de pontuação e exibe a classificação correspondente
    if (pontuacao >= 0 && pontuacao < 100) {
        printf("Classificacao: Iniciante");
    } else if (pontuacao >= 100 && pontuacao <= 500) {
        printf("Classificacao: Intermediario");
    } else if (pontuacao > 500 && pontuacao <= 1000) {
        printf("Classificacao: Avancado");
    } else if (pontuacao > 1000) {
        printf("Classificacao: Mestre");
    } else { 
        printf("Pontuacao invalida");
        return 1;
    }

    printf("\n");
    return 0;
}
