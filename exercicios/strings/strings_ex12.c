//Leitura de strings com espaços
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin); // Lê a frase com espaços

    // Remove o caractere '\n' adicionado pelo fgets
    frase[strcspn(frase, "\n")] = '\0';

    printf("Você digitou: %s\n", frase);

    return 0;
}
