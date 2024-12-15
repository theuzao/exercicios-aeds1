#include <stdio.h>

typedef struct Produto {
    int id;
    char nome[30];
    float preco;
} Produto;

int main() {
    Produto vetor[3];
    
    for(int i = 0; i < 3; i++) {
        printf("ID: ");
        scanf("%d", &vetor[i].id);
        getchar();
        printf("Nome: ");
        fgets(vetor[i].nome, 30, stdin);
        printf("Preco: ");
        scanf("%f", &vetor[i].preco);
        printf("\n");
    }
    
    for(int i = 0; i < 3; i++) {
        printf("\nProduto %d:", i+1);
        printf("\nID: %d\n", vetor[i].id);
        printf("Nome: %s", vetor[i].nome);
        printf("Preco: %0.2f", vetor[i].preco);
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
