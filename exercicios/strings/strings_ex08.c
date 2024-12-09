//Concatenação de strings
#include <stdio.h>
#include <string.h>

int main() {
    char nome1[30], nome2[20];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    strcat(nome1, " ");  // Adiciona um espaço entre os nomes
    strcat(nome1, nome2); // Concatena o segundo nome

    printf("Nome completo: %s\n", nome1);

    return 0;
}
