// Exercício 4: Classificação de nota
// Escreva um programa que receba uma nota (de 0 a 10) e exiba a classificação correspondente:
// 0 a 4: Reprovado
// 5 a 6: Recuperação
// 7 a 10: Aprovado
// Qualquer outro valor deve exibir "Nota inválida".

#include <stdio.h>

int main() {

    int nota; // Variável para armazenar a nota do aluno

    // Lê a nota do aluno
    scanf("%d", &nota);

    // Avalia a nota e imprime o resultado correspondente
    if (nota >= 0 && nota <= 4) {
        printf("Reprovado"); // Notas entre 0 e 4 resultam em reprovação
    } 
    else if (nota > 4 && nota <= 6) {
        printf("Recuperacao"); // Notas entre 5 e 6 resultam em recuperação
    } 
    else if (nota > 6 && nota <= 10) {
        printf("Aprovado"); // Notas entre 7 e 10 resultam em aprovação
    } 
    else {
        printf("Nota invalida"); // Valores fora do intervalo 0-10 são inválidos
    }

    printf("\n");
    return 0;
}
