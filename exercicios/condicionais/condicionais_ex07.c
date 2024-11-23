// Ano Bissexto
// Desenvolva um programa que verifique se um ano informado pelo usuário é bissexto.
// Entrada: 2024
// Saída: Ano bissexto

#include <stdio.h>

int main() {
    
    int ano; 

    // Lê o ano digitado pelo usuário
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Ano bissexto\n"); 
    } else {
        printf("Nao e bissexto\n"); 
    }

    printf("\n"); 
    return 0;
}
