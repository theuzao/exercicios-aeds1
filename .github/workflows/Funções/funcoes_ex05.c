// 5. Procedimento para Verificar Maioridade
// Escreva um procedimento que receba a idade de uma pessoa e imprima se ela é maior ou menor de idade.
// Exemplo de uso:
// Entrada: 17
// Saída: "Menor de idade"

#include <stdio.h>

// Procedimento que verifica se a pessoa é maior ou menor de idade
void maioridade(int idade) {
    if (idade >= 18) { // Verifica se a idade é maior ou igual a 18
        printf("Maior de idade");
    } else {
        printf("Menor de idade");
    }
}

int main() {
    int idade; // Declaração da variável para armazenar a idade

    scanf("%d", &idade); // Lê a idade fornecida pelo usuário
    maioridade(idade); // Chama o procedimento para verificar a maioridade

    return 0;
}
