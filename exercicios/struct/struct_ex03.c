#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    Produto produtos[5];

    // Lê os dados dos produtos
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", produtos[i].nome);
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);
    }

    // Exibe os produtos que estão com estoque baixo (quantidade < 10)
    printf("\nProdutos com estoque baixo:\n");
    for (int i = 0; i < 5; i++) {
        if (produtos[i].quantidade < 10) {
            printf("Nome: %s, Quantidade: %d, Preço: %.2f\n", produtos[i].nome, produtos[i].quantidade, produtos[i].preco);
        }
    }

    return 0;
}
