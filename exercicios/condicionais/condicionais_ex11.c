// Simulação de Menu de Restaurante
// Crie um programa com um menu interativo usando switch-case. 
// O usuário escolhe um prato pelo número, e o programa exibe o preço correspondente.
// Menu:
// 1. Pizza - R$20  
// 2. Hambúrguer - R$15  
// 3. Salada - R$12  
// 4. Sair  
// Entrada: 1
// Saída: Você escolheu Pizza. Preço: R$20

#include <stdio.h>

int main() {

    char pedido;

    printf("1. Pizza\n2. Hamburguer\n3. Salada\n4. Sair\n");
    scanf(" %c", &pedido); // Espaço antes de %c para ignorar o \n

    switch (pedido) {
        case '1':
            printf("Voce escolheu Pizza. Preco: R$20");
            break;
        case '2':
            printf("Voce escolheu Hamburguer. Preco: R$15");
            break;
        case '3':
            printf("Voce escolheu Salada. Preco: R$12");
            break;
        case '4':
            printf("Saindo do sistema.");
            return 0; // Encerra o programa
        default:
            printf("Operacao invalida");
            return 1; 
    }

    printf("\n");
    return 0; 
}
