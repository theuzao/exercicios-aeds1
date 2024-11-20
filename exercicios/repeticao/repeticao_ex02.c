// 2. Soma dos números de 1 a N
// Leia um número N e calcule a soma de todos os números de 1 a  N

#include <stdio.h>

int main() {

  int n; // Declaração da variável que armazenará o número inteiro
  int soma = 0; // Inicialização da variável para armazenar a soma
  
  scanf("%d", &n); // Entrada do valor de n

  for(int i = 1; i <= n; i++) { // Laço para somar os números de 1 até n
    soma += i; // Adiciona o valor de i à soma
  }

  printf("%d\n", soma); // Exibe o resultado da soma
  return 0;
  
}
