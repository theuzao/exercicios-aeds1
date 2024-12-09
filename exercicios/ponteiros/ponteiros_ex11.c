//Operações com ponteiros
#include <stdio.h>

void trocaValores(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void aumentaValor(int *z) {
    *z += 10;
}

int main() {
    int a, b;
    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &a, &b);

    printf("\nAntes da troca: a = %d, b = %d\n", a, b);
    trocaValores(&a, &b);
    printf("Após a troca: a = %d, b = %d\n", a, b);

    aumentaValor(&a);
    printf("\nApós aumentar 10 ao valor de 'a': a = %d\n", a);

    return 0;
}
