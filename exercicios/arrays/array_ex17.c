// Maior e Menor Elemento
// Leia um vetor de N números inteiros e encontre o maior e o menor valor.
// Entrada: N = 4, Vetor: [12, 7, 15, 3]
// Saída: Maior: 15, Menor: 3

#include <stdio.h>

int main() {

    int n;
    int maior, menor;
  
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);

        // Inicializa o maior e menor com o primeiro elemento na primeira iteração
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        }

        // Atualiza o maior valor
        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        // Atualiza o menor valor
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
