//Conversão de maiúsculas e minúsculas
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Maiúsculas: %s\n", strupr(palavra));
    printf("Minúsculas: %s\n", strlwr(palavra));

    return 0;
}
