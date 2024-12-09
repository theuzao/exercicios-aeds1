#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    while (1) {
        printf("Digite uma string (ou FIM para encerrar): ");
        fgets(string, 100, stdin);
        string[strcspn(string, "\n")] = '\0'; // Remove o '\n' do final

        if (strcmp(string, "FIM") == 0) {
            break; // Encerra o loop se a string for "FIM"
        }

        printf("Número de caracteres: %ld\n", strlen(string));
    }

    return 0;
}
