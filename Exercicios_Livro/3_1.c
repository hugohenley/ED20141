#include <stdio.h>

int negativos (int n, float* vet) {
	int i;
	int qtd_negativos = 0;

	for (i = 0; i <= n - 1, i++) {
		if (vet[i] < 0) {
			qtd_negativos++;
		}
	}
	
	return qtd_negativos;
}