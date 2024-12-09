#include <stdio.h>

int main() {
    
    int *ptr; // Declaração de um ponteiro para inteiro
    int a, b; // Declaração de duas variáveis inteiras
    
    // Entrada dos valores
    scanf("%d", &a); // Lê um valor inteiro e armazena em 'a'
    scanf("%d", &b); // Lê um valor inteiro e armazena em 'b'
    
    // Ponteiro apontando para 'a'
    ptr = &a; // 'ptr' recebe o endereço de 'a'
    printf("%d\n", *ptr); // Imprime o valor armazenado no endereço de 'a' (acessado via '*ptr')
    
    // Ponteiro apontando para 'b'
    ptr = &b; // 'ptr' agora recebe o endereço de 'b'
    printf("%d\n", *ptr); // Imprime o valor armazenado no endereço de 'b' (acessado via '*ptr')

    return 0; // Indica que o programa terminou com sucesso
}
