//Verificação de palavras iguais
#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[20], palavra2[20];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (strcmp(palavra1, palavra2) == 0) {
        printf("As palavras são iguais.\n");
    } else {
        printf("As palavras são diferentes.\n");
    }

    return 0;
}
