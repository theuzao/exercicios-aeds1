//Cadastro de Livros
#include <stdio.h>
#include <string.h>

typedef struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
    float preco;
} Livro;

void leLivros(Livro livros[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nCadastro do livro %d:\n", i + 1);
        printf("Título: ");
        scanf(" %[^\n]", livros[i].titulo);
        printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor);
        printf("Ano de publicação: ");
        scanf("%d", &livros[i].ano);
        printf("Preço: ");
        scanf("%f", &livros[i].preco);
    }
}

float calculaMediaPreco(Livro livros[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += livros[i].preco;
    }
    return soma / n;
}

Livro livroMaisCaro(Livro livros[], int n) {
    Livro maisCaro = livros[0];
    for (int i = 1; i < n; i++) {
        if (livros[i].preco > maisCaro.preco) {
            maisCaro = livros[i];
        }
    }
    return maisCaro;
}

int main() {
    Livro livros[5];
    leLivros(livros, 5);

    printf("\nLivros cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Título: %s, Autor: %s\n", livros[i].titulo, livros[i].autor);
    }

    Livro caro = livroMaisCaro(livros, 5);
    printf("\nLivro mais caro:\nTítulo: %s, Preço: %.2f\n", caro.titulo, caro.preco);

    printf("\nMédia de preços dos livros: %.2f\n", calculaMediaPreco(livros, 5));
    return 0;
}
