// 3. Procedimento para Calcular Tabuada
// Escreva um procedimento que receba um número inteiro e imprima a tabuada desse número de 1 a 10.

#include <stdio.h>

// Procedimento que imprime a tabuada de um número
void tabuada(int num) {
    for (int i = 1; i <= 10; i++) { // Itera de 1 a 10
        int calculo = num * i; // Calcula o produto
        printf("%d * %d = %d\n", num, i, calculo); // Imprime o resultado
    }
}

int main() {
    int num; // Declara o número para a tabuada

    scanf("%d", &num); // Lê o número fornecido pelo usuário
    tabuada(num); // Chama o procedimento para imprimir a tabuada

    return 0;
}
