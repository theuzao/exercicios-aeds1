// Positivo, Negativo ou Zero
// Escreva um programa que leia um número inteiro e informe se ele é positivo, negativo ou zero.
// Entrada: -7
// Saída: Número negativo

#include <stdio.h>

int main() {
    
    int n; 

    scanf("%d", &n); 
    
    // Verifica o valor do número e classifica como Zero, Negativo ou Positivo
    if (n == 0) {
        printf("Zero"); // O número é igual a zero
    } else if (n < 0) {
        printf("Negativo"); // O número é menor que zero
    } else {
        printf("Positivo"); // O número é maior que zero
    }
    
    printf("\n"); 
    return 0;
}
