// Exercício 3: Verificar se uma pessoa pode votar
// Desenvolva um programa que receba a idade de uma pessoa e verifique se ela pode votar. Considere que a idade mínima para votar é 18 anos.

#include <stdio.h>

int main() {
    
    int idade; // Variável para armazenar a idade

    // Lê a idade do usuário
    scanf("%d", &idade);

    // Verifica se a idade é suficiente para votar
    if (idade >= 18) {
        printf("Pode votar");
    } else {
        printf("Nao pode votar");
    }

    printf("\n");
    return 0;
}
