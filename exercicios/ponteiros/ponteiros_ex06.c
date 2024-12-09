#include <stdio.h>

// Função para calcular a média das idades das mulheres
float mediaIdadeMulheres(int *idades, char *generos, int tamanho) {
    int soma = 0, count = 0;
    for (int i = 0; i < tamanho; i++) {
        if (generos[i] == 'F' || generos[i] == 'f') { // Verifica se o gênero é feminino
            soma += idades[i];
            count++;
        }
    }
    if (count > 0) {
        return (float)soma / count; // Retorna a média
    } else {
        return 0; // Se não houver mulheres, retorna 0
    }
}

// Função para encontrar a menor idade do grupo
int menorIdade(int *idades, int tamanho) {
    int menor = idades[0];
    for (int i = 1; i < tamanho; i++) {
        if (idades[i] < menor) {
            menor = idades[i]; // Atualiza a menor idade, se necessário
        }
    }
    return menor;
}

int main() {
    int idades[4];        // Vetor para armazenar as idades
    char generos[4];      // Vetor para armazenar os gêneros ('M' ou 'F')

    // Lê as idades e os gêneros
    printf("Digite a idade e o gênero (M/F) de 4 pessoas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Gênero (M/F): ");
        scanf(" %c", &generos[i]); // Espaço antes de %c para consumir o '\n'
    }

    // Calcula a média das idades das mulheres
    float mediaMulheres = mediaIdadeMulheres(idades, generos, 4);

    // Encontra a menor idade do grupo
    int menor = menorIdade(idades, 4);

    // Exibe os resultados
    printf("\nA média das idades das mulheres é: %.2f\n", mediaMulheres);
    printf("A menor idade do grupo é: %d\n", menor);

    return 0;
}
