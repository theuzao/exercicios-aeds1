//2. Maior Elemento
//Crie um programa que leia 10 números inteiros para um array e encontre o maior número entre eles.
//Exemplo de entrada: {3, 7, 2, 10, 6, 1, 4, 9, 8, 5}
//Saída esperada: 10
//#include <stdio.h>

int main() {
    int vetor[10]; // Array para armazenar 10 números
    int var = 0;   // Inicializa a variável que armazenará o maior número

    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]); // Lê os números do usuário
        if(var < vetor[i]) {
            var = vetor[i]; // Atualiza 'var' se o número atual for maior
        }
    }

    printf("%d", var); // Imprime o maior número
    return 0;
}
