#include <stdio.h>

// Função para trocar os valores, se necessário
void trocarSeMaior(int *x, int *y) {
    if (*x > *y) { // Verifica se o valor apontado por x é maior que o valor apontado por y
        int temp = *x; // Variável temporária para realizar a troca
        *x = *y;
        *y = temp;
    }
}

int main() {
    int a, b;

    // Lê os dois valores inteiros
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Chama a função para trocar os valores, se necessário
    trocarSeMaior(&a, &b);

    // Exibe os valores após a verificação/troca
    printf("Após a verificação:\na = %d\nb = %d\n", a, b);

    return 0;
}
