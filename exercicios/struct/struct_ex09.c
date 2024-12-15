#include <stdio.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    int altura;
} Pessoa;

int main() {
    Pessoa A; //declarar variável do tipo Pessoa
    
    printf("Nome: ");
    fgets(A.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &A.idade);
    printf("Altura: ");
    scanf("%d", &A.altura);
    
    printf("\nDados Armazenados: \n");
    printf("Nome: %s", A.nome);
    printf("Idade: %d\n", A.idade);
    printf("Altura: %dcm", A.altura);
    
    return 0;
}
