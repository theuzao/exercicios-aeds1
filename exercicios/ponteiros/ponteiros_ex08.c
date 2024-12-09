#include <stdio.h>

// Função para modificar os dois números para serem iguais à soma deles
void modificarParaSoma(int *x, int *y) {
    int soma = *x + *y; // Calcula a soma dos valores apontados por x e y
    *x = soma;          // Modifica o valor de x para a soma
    *y = soma;          // Modifica o valor de y para a soma
}

int main() {
    int a, b;

    // Lê os dois números inteiros
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Chama a função para modificar os valores
    modificarParaSoma(&a, &b);

    // Exibe os valores após a modificação
    printf("Após a soma:\na = %d\nb = %d\n", a, b);

    return 0;
}
