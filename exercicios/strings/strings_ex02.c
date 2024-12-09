#include <stdio.h>
#include <string.h>

int main() {
    char nome[10][50], sobrenome[10][50];

    // Lê os nomes e sobrenomes
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome e sobrenome da pessoa %d: ", i + 1);
        scanf("%s %s", nome[i], sobrenome[i]);
    }

    // Exibe no formato "sobrenome, nome"
    printf("\nNomes no formato 'sobrenome, nome':\n");
    for (int i = 0; i < 10; i++) {
        printf("%s, %s\n", sobrenome[i], nome[i]);
    }

    return 0;
}
