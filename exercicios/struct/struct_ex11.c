#include <stdio.h>

float media(float a, float b) {
    return (a + b) / 2;
}

typedef struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
} Aluno;

int main() {
    Aluno A;
    float mediaNotas;
    
    printf("Nome: ");
    fgets(A.nome, 50, stdin);
    printf("Nota 1: ");
    scanf("%f", &A.nota1);
    printf("Nota 2: ");
    scanf("%f", &A.nota2);
    
    mediaNotas = media(A.nota1, A.nota2);
    
    printf("\nNome: %s", A.nome);
    printf("Media do Aluno: %.2f\n", mediaNotas);
    
    return 0;
}
