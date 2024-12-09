#include <stdio.h>

// Função que soma o incremento ao valor recebido como ponteiro
void incrementarValor(int *valor, int incremento) {
    *valor += incremento; // Adiciona o incremento ao valor apontado pelo ponteiro
}

int main() {
    int valor, incremento;

    // Lê o valor inicial e o incremento
    printf("Digite o valor inicial: ");
    scanf("%d", &valor);
    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    // Chama a função para somar o incremento ao valor
    incrementarValor(&valor, incremento);

    // Exibe o valor atualizado
    printf("O valor após o incremento é: %d\n", valor);

    return 0;
}
