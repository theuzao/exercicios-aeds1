//Troca de valores entre variáveis

#include <stdio.h>

void troca(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &a, &b);

    printf("\nAntes da troca: a = %d, b = %d\n", a, b);
    troca(&a, &b);
    printf("Após a troca: a = %d, b = %d\n", a, b);

    return 0;
}
