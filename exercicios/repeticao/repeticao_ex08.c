// 8. Inverter a entrada de 5 números
// Leia 5 números e imprima-os na ordem inversa.

#include <stdio.h>

int main() {

  int vetor[5]; // Vetor para armazenar 5 números

  // Entrada dos números
  for (int i = 0; i < 5; i++) {
    scanf("%d", &vetor[i]); // Lê os números e armazena no vetor
  }

  // Saída dos números em ordem inversa
  for (int i = 4; i >= 0; i--) { // Itera do último índice (4) ao primeiro (0)
    if (i == 0) { // Verifica se é o último número a ser impresso
      printf("%d", vetor[i]); // Imprime sem vírgula
    } else {
      printf("%d, ", vetor[i]); // Imprime com vírgula e espaço
    }
  }

  printf("\n"); 
  return 0;
}
