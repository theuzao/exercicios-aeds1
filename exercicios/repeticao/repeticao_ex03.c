// 3. Tabuada de um número
// Peça um número ao usuário e imprima sua tabuada (1 a 10).

#include <stdio.h>

int main() {

  int n; // Declaração da variável para armazenar o número
  int soma; // Variável para armazenar o resultado da multiplicação
  
  scanf("%d", &n); // Receber o valor de n

  for(int i = 1; i <= 10; i++) { // Laço para calcular a tabuada de 1 a 10
    soma = n * i; // Calcula o produto de n e i
    printf("%d * %d = %d\n", n, i, soma); // Exibe a multiplicação no formato tabuada
  }

  return 0;
}
