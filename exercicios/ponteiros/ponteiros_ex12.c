//Ponteiros para ponteiros
#include <stdio.h>

int main() {
    int num;
    int *ptr, **pptr;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    ptr = &num;
    pptr = &ptr;

    printf("\nValor original: %d\n", num);
    printf("Atualizando o valor usando ponteiro para ponteiro...\n");

    **pptr += 5; // Incrementa o valor usando ponteiro para ponteiro

    printf("\nNovo valor: %d\n", num);

    return 0;
}
