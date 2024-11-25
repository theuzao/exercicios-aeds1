// Leia uma string do usuário e imprima-a.
// Entrada: Olá, mundo!
// Saída: Você digitou: Olá, mundo!

#include <stdio.h>

int main() {
    char str[50];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string com espaços

    // Imprime a string com o '\n'
    printf("Você digitou: %s", str);

    return 0;
}
