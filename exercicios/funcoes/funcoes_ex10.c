// Crie uma função chamada soma que recebe dois números inteiros como parâmetros e retorna a soma deles.

#include <stdio.h> 

int soma(int a, int b){
  return a + b;
}

int main() {
  int a, b;

  printf("Digite o primeiro número: ");
  scanf("%d", &a);

  printf("Digite o segundo número: ");
  scanf("%d", &b);

  printf("A soma dos números é: %d\n", soma(a, b));
  return 0;
  
}
