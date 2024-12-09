//Verificação de substring
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], palavra[20];

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("Digite a palavra a ser buscada: ");
    scanf("%s", palavra);

    if (strstr(frase, palavra) != NULL) {
        printf("A palavra '%s' foi encontrada na frase.\n", palavra);
    } else {
        printf("A palavra '%s' NÃO foi encontrada na frase.\n", palavra);
    }

    return 0;
}
