//Registro de Funcionários
#include <stdio.h>
#include <string.h>

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Funcionario {
    char nome[30];
    float salario;
    int idade;
    Data admissao;
} Funcionario;

void leFuncionarios(Funcionario funcs[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nCadastro do funcionário %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", funcs[i].nome);
        printf("Salário: ");
        scanf("%f", &funcs[i].salario);
        printf("Idade: ");
        scanf("%d", &funcs[i].idade);
        printf("Data de admissão (dd mm aaaa): ");
        scanf("%d %d %d", &funcs[i].admissao.dia, &funcs[i].admissao.mes, &funcs[i].admissao.ano);
    }
}

void mostraFuncionariosIdade(Funcionario funcs[], int n) {
    printf("\nFuncionários com idade acima de 40:\n");
    for (int i = 0; i < n; i++) {
        if (funcs[i].idade > 40) {
            printf("Nome: %s, Salário: %.2f\n", funcs[i].nome, funcs[i].salario);
        }
    }
}

void mostraFuncionariosSalario(Funcionario funcs[], int n) {
    printf("\nFuncionários com salário maior que 5000:\n");
    for (int i = 0; i < n; i++) {
        if (funcs[i].salario > 5000) {
            printf("Nome: %s, Salário: %.2f, Idade: %d, Admissão: %d/%d/%d\n",
                   funcs[i].nome, funcs[i].salario, funcs[i].idade,
                   funcs[i].admissao.dia, funcs[i].admissao.mes, funcs[i].admissao.ano);
        }
    }
}

int main() {
    Funcionario funcs[3];
    leFuncionarios(funcs, 3);
    mostraFuncionariosIdade(funcs, 3);
    mostraFuncionariosSalario(funcs, 3);
    return 0;
}
