// Produto Escalar
// Crie um programa que leia dois vetores de tamanho N e calcule o produto escalar entre eles.
// Entrada: Vetores: [1, 2, 3] e [4, 5, 6]
// Saída: Produto escalar: 32
//(Explicação: 1∗4+2∗5+3∗6=32)

#include <stdio.h>

int main() {
    
    int prod1[3]; // Vetor 1
    int prod2[3]; // Vetor 2
    int soma = 0; // Variável para acumular o produto escalar

    // Lê os elementos de prod1
    for (int i = 0; i < 3; i++) {
        scanf("%d", &prod1[i]); 
    }

    // Lê os elementos de prod2
    for (int j = 0; j < 3; j++) {
        scanf("%d", &prod2[j]);
    }

    // Calcula o produto escalar
    for (int i = 0; i < 3; i++) {
        soma += prod1[i] * prod2[i]; // Multiplica os elementos correspondentes e acumula
    }

    // Imprime o resultado do produto escalar
    printf("Produto escalar %d\n", soma);
    return 0;
}
