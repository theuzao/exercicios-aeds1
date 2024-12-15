#include <stdio.h>

typedef struct Endereco {
    char rua[50];
    int numero;
} Endereco;

typedef struct Pessoa {
    char nome[50];
    int idade;
    Endereco endereco;  // Struct Endereco incluída na struct Pessoa
} Pessoa;

int main() {
    Pessoa A;  // Variável do tipo Pessoa

    // Entrada de dados
    printf("Nome: ");
    fgets(A.nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &A.idade);
    getchar();  // Limpa o buffer após scanf

    printf("Rua: ");
    fgets(A.endereco.rua, 50, stdin);

    printf("Numero: ");
    scanf("%d", &A.endereco.numero);

    // Saída dos dados
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s", A.nome);
    printf("Idade: %d\n", A.idade);
    printf("Endereco: %sNumero: %d\n", A.endereco.rua, A.endereco.numero);

    return 0;  // Finaliza o programa
}
