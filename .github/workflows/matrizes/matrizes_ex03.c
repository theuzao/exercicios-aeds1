// 3. Transposta da Matriz
// Implemente um programa que leia uma matriz 2×3 e exiba a sua matriz transposta 

#include <stdio.h>
int main() {

	int matriz[2][3];
	int matrizTransposta[3][2];

	// Entrada da matriz original e preenchimento da transposta
	for(int i = 0; i < 2; i++) { // Percorre as linhas da matriz original
		for(int j = 0; j < 3; j++) { // Percorre as colunas da matriz original
			scanf("%d", &matriz[i][j]);
			matrizTransposta[j][i] = matriz[i][j]; // Troca linha por coluna
		}
	}

	// Exibe a matriz transposta
	for(int i = 0; i < 3; i++) { // Percorre as linhas da matriz transposta
		for(int j = 0; j < 2; j++) { // Percorre as colunas da matriz transposta
			printf("%d ", matrizTransposta[i][j]); // Imprime os elementos
		}
		printf("\n"); 
	}

	return 0;
}
