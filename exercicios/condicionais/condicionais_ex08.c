// Categoria por Idade
// Crie um programa que leia a idade de uma pessoa e classifique-a em uma das seguintes categorias:
// Infantil (0-12 anos)
// Adolescente (13-17 anos)
// Adulto (18-59 anos)
//Idoso (60 anos ou mais)
// Entrada: 25
// Saída: Categoria: Adulto

#include <stdio.h>

int main() {
    
    int idade; 

    // Lê a idade fornecida pelo usuário
    scanf("%d", &idade);

    // Verifica a faixa etária com base na idade
    if (idade >= 0 && idade <= 12) {
        printf("Infantil"); // Idade entre 0 e 12 anos é considerada "Infantil"
    } else if (idade >= 13 && idade <= 17) {
        printf("Adolescente"); // Idade entre 13 e 17 anos é considerada "Adolescente"
    } else if (idade >= 18 && idade <= 59) {
        printf("Adulto"); // Idade entre 18 e 59 anos é considerada "Adulto"
    } else if (idade >= 60) {
        printf("Idoso"); // Idade a partir de 60 anos é considerada "Idoso"
    }

    printf("\n"); 
    return 0;
}
