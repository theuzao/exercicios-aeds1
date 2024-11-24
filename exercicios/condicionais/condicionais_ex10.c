// Sistema de Descontos
// Desenvolva um programa que calcula o desconto em um produto baseado na faixa de preço:
// Preço < R$50: Desconto de 5%
// Preço entre R$50 e R$100: Desconto de 10%
// Preço > R$100: Desconto de 15%
// Exiba o preço final após o desconto.
// Entrada: Preço: R$120
// Saída: Preço final: R$102

#include <stdio.h>

int main() {

	float preco;
	float desconto;

	scanf("%f", &preco);

	if (preco >= 0 && preco < 50) {
		desconto = (5.00/100) * preco;
	} else if (preco >= 50 && preco < 100) {
		desconto = (10.00/ 100) * preco;
	} else if (preco >= 100) {
		desconto = (15.00/100) * preco;
	} else {
	    printf("Operacao invalida");
	    return 1;
	}

	printf("Preco final: %0.2f\n", preco-desconto);
	return 0;
  
}
