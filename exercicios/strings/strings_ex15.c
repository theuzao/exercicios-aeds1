// 1) Receber um nome e imprimir as 4 primeiras letras do nome

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    
    printf("Digite um nome: ");
    scanf("%s", nome);
    
    size_t tamanho = strlen(nome);
    
    printf("O nome tem %zu letras\n", tamanho);
    
    // Imprime até 4 caracteres, mas não ultrapassa o tamanho real do nome
    for(int i = 0; i < 4 && i < tamanho; i++) {
        printf("%c", nome[i]);
    }
    
    printf("\n");
    return 0;
}
