//Comparação parcial de strings
#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[20], palavra2[20];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (strncmp(palavra1, palavra2, 3) == 0) {
        printf("Os primeiros 3 caracteres são iguais.\n");
    } else {
        printf("Os primeiros 3 caracteres são diferentes.\n");
    }

    return 0;
}
