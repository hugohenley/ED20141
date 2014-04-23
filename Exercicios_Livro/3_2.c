#include <stdio.h>

int pares (int n, float* vet) {
	int i;
	int qtd_pares = 0;

	for (i = 0; i <= n - 1, i++) {
		if (vet[i] % 2 == 0) {
			qtd_pares++;
		}
	}
	
	return qtd_pares;
}