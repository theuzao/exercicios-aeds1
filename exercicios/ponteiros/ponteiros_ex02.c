#include <stdio.h>

// Função para trocar os valores de duas variáveis usando ponteiros
void trocar(int *x, int *y) {
    int temp;      // Variável temporária para armazenar um dos valores
    temp = *x;     // Guarda o valor apontado por x
    *x = *y;       // Atribui o valor apontado por y ao local apontado por x
    *y = temp;     // Atribui o valor temporário (antigo valor de x) ao local apontado por y
}

int main() {
    int a, b;       // Declaração das variáveis inteiras

    // Lê os valores das variáveis
    scanf("%d", &a); // Lê o valor de 'a'
    scanf("%d", &b); // Lê o valor de 'b'

    // Troca os valores usando a função trocar
    trocar(&a, &b);

    // Imprime os valores após a troca
    printf("a: %d\nb:%d", a, b);

    return 0;        // Indica que o programa terminou com sucesso
}
