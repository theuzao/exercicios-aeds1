// Classificação de Notas
// Escreva um programa que receba uma nota de 0 a 100 e classifique:
// Nota >= 90: A
// Nota >= 80: B
// Nota >= 70: C
// Nota >= 60: D
// Nota < 60: F
// Entrada: 85
// Saída: Nota: B

  #include <stdio.h>

int main() {
    
    int nota; // Variável para armazenar a nota

    // Lê a nota fornecida pelo usuário
    scanf("%d", &nota);

    // Verifica a faixa da nota e exibe a classificação correspondente
    if (nota >= 0 && nota < 60) {
        printf("F"); // Notas de 0 a 59 recebem "F"
    } else if (nota >= 60 && nota < 70) {
        printf("D"); // Notas de 60 a 69 recebem "D"
    } else if (nota >= 70 && nota < 80) {
        printf("C"); // Notas de 70 a 79 recebem "C"
    } else if (nota >= 80 && nota < 90) {
        printf("B"); // Notas de 80 a 89 recebem "B"
    } else if (nota >= 90 && nota <= 100) {
        printf("A"); // Notas de 90 a 100 recebem "A"
    }

    printf("\n");
    return 0;
}
