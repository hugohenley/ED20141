#include <stdlib.h>
#include <stdio.h>
#include "btree.h"


int main(void) {
	int qtd_numeros;
	int *conjunto;
	int i = 0;
	printf("Quantos números inteiros compõem o conjunto de entrada?\n");
	scanf("%d", &qtd_numeros);
	conjunto = (int*) malloc(qtd_numeros*sizeof(int));

	printf("Quais números inteiros compõem este conjunto?\n");
	for(i = 0; i <= qtd_numeros - 1; i++) {
		scanf("%d", &conjunto[i]);
		printf("\n");
	}
	
	BTree* btree = (BTree*) malloc(sizeof(BTree));
	
	/*
	
	btree = btree_cria_vazia();
	
	btree_cria_subarvore(boolean b, Btree* sae, Btree* sad);

	btree_imprime_subconjuntos(btree, conjunto);

	btree_limpa_memoria(btree);

	*/

	
}