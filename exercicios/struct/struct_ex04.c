#include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
} Livro;

int main() {
    Livro livros[4];

    // Lê os dados dos livros
    for (int i = 0; i < 4; i++) {
        printf("Digite o título do livro %d: ", i + 1);
        scanf(" %[^\n]", livros[i].titulo);
        printf("Digite o autor do livro %d: ", i + 1);
        scanf(" %[^\n]", livros[i].autor);
        printf("Digite o ano de publicação do livro %d: ", i + 1);
        scanf("%d", &livros[i].anoPublicacao);
    }

    // Exibe os livros publicados antes de 2000
    printf("\nLivros publicados antes de 2000:\n");
    for (int i = 0; i < 4; i++) {
        if (livros[i].anoPublicacao < 2000) {
            printf("Título: %s, Autor: %s, Ano: %d\n", livros[i].titulo, livros[i].autor, livros[i].anoPublicacao);
        }
    }

    return 0;
}
