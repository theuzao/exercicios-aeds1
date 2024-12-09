#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Estudante;

int main() {
    Estudante estudantes[3];

    // Lê os dados dos estudantes
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do estudante %d: ", i + 1);
        scanf(" %[^\n]", estudantes[i].nome);
        printf("Digite a idade do estudante %d: ", i + 1);
        scanf("%d", &estudantes[i].idade);
        printf("Digite a nota do estudante %d: ", i + 1);
        scanf("%f", &estudantes[i].nota);
    }

    // Exibe os dados dos estudantes
    printf("\nDados dos estudantes:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s, Idade: %d, Nota: %.2f\n", estudantes[i].nome, estudantes[i].idade, estudantes[i].nota);
    }

    return 0;
}
