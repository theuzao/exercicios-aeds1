#include <stdio.h>

int main() {
    
    int a, b;      // Declara variáveis para armazenar dois números
    int maior;     // Variável para armazenar o maior número

    // Lê os dois números inseridos pelo usuário
    scanf("%d", &a);
    scanf("%d", &b);
    
    // Verifica qual número é maior e armazena na variável 'maior'
    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }
    
    // Exibe o maior número
    printf("%d\n", maior);
    return 0;
}
