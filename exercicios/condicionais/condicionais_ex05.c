// Exercício 5: Calculadora simples
// Implemente um programa que receba dois números e uma operação (soma, subtração, multiplicação ou divisão). 
// Realize a operação e exiba o resultado. Use um switch para lidar com as operações.

#include <stdio.h>

int main() {
    char operador;
    int a, b;

    // Solicita o operador e os operandos
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    // Avalia o operador usando switch
    switch (operador) {
        case '+': 
            printf("Resultado: %d\n", a + b);
            break;
        case '-': 
            printf("Resultado: %d\n", a - b);
            break;
        case '*': 
            printf("Resultado: %d\n", a * b);
            break;
        case '/': 
            if (b != 0) {
                printf("Resultado: %d\n", a / b);
            } else {
                printf("Erro: divisao por zero\n");
            }
            break;
        default: 
            printf("Operador invalido\n");
            break;
    }

    return 0;
}
