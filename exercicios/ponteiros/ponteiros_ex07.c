#include <stdio.h>

// Função para dobrar o valor de uma variável usando ponteiro
void dobrarValor(int *var) {
    *var = *var * 2; // Dobra o valor armazenado no endereço apontado por var
}

int main() {
    int valor;

    // Lê o valor da variável
    printf("Digite o valor da variável: ");
    scanf("%d", &valor);

    // Chama a função para dobrar o valor
    dobrarValor(&valor);

    // Exibe o valor após dobrar
    printf("O valor após dobrar é: %d\n", valor);

    return 0;
}
