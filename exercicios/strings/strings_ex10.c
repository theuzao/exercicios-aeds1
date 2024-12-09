//Copiando parte de uma string
#include <stdio.h>
#include <string.h>

int main() {
    char original[50], copia[6];

    printf("Digite uma palavra: ");
    scanf("%s", original);

    strncpy(copia, original, 5); // Copia os 5 primeiros caracteres
    copia[5] = '\0'; // Adiciona o caractere nulo no final da string

    printf("Primeiros 5 caracteres: %s\n", copia);

    return 0;
}
