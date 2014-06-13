#include <stdio.h>

void inverte (int n, int* vet) {
	int i;
	int tamanho = n - 1;
	int* vet_aux = (int*) malloc(tamanho*sizeof(int));
	for (i = 0; i <= n - 1; i++) {
		vet_aux[tamanho] = vet[i];
		tamanho--;
	}
	
	for (i=0; i <= n - 1; i++) {
		vet[i] = vet_aux[i];
	}
	
	/* Liberar cada elemento do vet_aux e depois o vet_aux */
	
}