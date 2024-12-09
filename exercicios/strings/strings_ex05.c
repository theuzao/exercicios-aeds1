#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char genero; // 'M' para masculino, 'F' para feminino
    char endereco[100];
} Pessoa;

int main() {
    Pessoa pessoas[5];

    // Lê os dados das pessoas
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome: ");
        scanf(" %[^\n]", pessoas[i].nome);
        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Digite o gênero (M/F): ");
        scanf(" %c", &pessoas[i].genero);
        printf("Digite o endereço: ");
        scanf(" %[^\n]", pessoas[i].endereco);
    }

    // Exibe os detalhes solicitados
    printf("\nMulheres:\n");
    for (int i = 0; i < 5; i++) {
        if (pessoas[i].genero == 'F' || pessoas[i].genero == 'f') {
            printf("%s, %d anos\n", pessoas[i].nome, pessoas[i].idade);
        }
    }

    printf("\nHomens:\n");
    for (int i = 0; i < 5; i++) {
        if (pessoas[i].genero == 'M' || pessoas[i].genero == 'm') {
            printf("%s, endereço: %s\n", pessoas[i].nome, pessoas[i].endereco);
        }
    }

    printf("\nPessoas acima de 20 anos:\n");
    for (int i = 0; i < 5; i++) {
        if (pessoas[i].idade > 20) {
            printf("%s\n", pessoas[i].nome);
        }
    }

    return 0;
}
