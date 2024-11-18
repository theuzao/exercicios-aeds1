// Diagonal Principal
// Crie um programa que leia uma matriz 3×3 e exiba os elementos da diagonal principal (índices [i][i]).

#include <stdio.h>
int main() {

  int matriz[3][3];

  // Entrada da matriz
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  // Exibição da diagonal principal
  for (int i = 0; i < 3; i++) {
    printf("%d", matriz[i][i]);
    if (i < 2) { 
      printf(", ");
    }
  }
  printf("\n"); // Quebra de linha após a saída

  return 0;
}
