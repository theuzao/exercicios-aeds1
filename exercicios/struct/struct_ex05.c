#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasTrabalhadas;
} Funcionario;

int main() {
    Funcionario funcionarios[3];
    float salarioTotal = 0;

    // Lê os dados dos funcionários
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do funcionário %d: ", i + 1);
        scanf(" %[^\n]", funcionarios[i].nome);
        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%f", &funcionarios[i].salario);
        printf("Digite as horas trabalhadas pelo funcionário %d: ", i + 1);
        scanf("%d", &funcionarios[i].horasTrabalhadas);
    }

    // Calcula o salário total
    for (int i = 0; i < 3; i++) {
        salarioTotal += funcionarios[i].salario;
    }

    // Exibe o salário total e os dados dos funcionários
    printf("\nSalário total: %.2f\n", salarioTotal);
    printf("\nDados dos funcionários:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s, Salário: %.2f, Horas Trabalhadas: %d\n", funcionarios[i].nome, funcionarios[i].salario, funcionarios[i].horasTrabalhadas);
    }

    return 0;
}
