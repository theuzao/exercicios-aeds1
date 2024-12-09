#include <stdio.h>

typedef struct {
    char modelo[50];
    int ano;
    float preco;
} Veiculo;

int main() {
    Veiculo veiculos[3];
    float precoLimite;

    // Lê os dados dos veículos
    for (int i = 0; i < 3; i++) {
        printf("Digite o modelo do veículo %d: ", i + 1);
        scanf(" %[^\n]", veiculos[i].modelo);
        printf("Digite o ano do veículo %d: ", i + 1);
        scanf("%d", &veiculos[i].ano);
        printf("Digite o preço do veículo %d: ", i + 1);
        scanf("%f", &veiculos[i].preco);
    }

    // Define o preço limite
    printf("\nDigite o preço limite: ");
    scanf("%f", &precoLimite);

    // Exibe os veículos acima do preço limite
    printf("\nVeículos acima do preço limite:\n");
    for (int i = 0; i < 3; i++) {
        if (veiculos[i].preco > precoLimite) {
            printf("Modelo: %s, Ano: %d, Preço: %.2f\n", veiculos[i].modelo, veiculos[i].ano, veiculos[i].preco);
        }
    }

    return 0;
}
