//Registro de Alunos com Notas
#include <stdio.h>
#include <string.h>

typedef struct Aluno {
    char nome[30];
    int matricula;
    float notas[3];
    float media;
} Aluno;

void leAlunos(Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nCadastro do aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Notas das 3 provas: ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &alunos[i].notas[j]);
        }
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;
    }
}

void mostraAprovados(Aluno alunos[], int n) {
    printf("\nAlunos com média maior que 7:\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].media > 7) {
            printf("Nome: %s, Matrícula: %d, Média: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }
}

int main() {
    Aluno alunos[5];
    leAlunos(alunos, 5);
    mostraAprovados(alunos, 5);
    return 0;
}
