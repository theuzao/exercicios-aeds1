#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[50], palavra2[50];

    while (1) {
        printf("Digite duas palavras (ou FIM para encerrar): ");
        scanf("%s %s", palavra1, palavra2);

        if (strcmp(palavra1, "FIM") == 0 || strcmp(palavra2, "FIM") == 0) {
            break; // Encerra o programa se uma das palavras for "FIM"
        }

        if (strcmp(palavra1, palavra2) == 0) {
            printf("As palavras são iguais.\n");
        } else {
            printf("As palavras são diferentes.\n");
        }
    }

    return 0;
}
