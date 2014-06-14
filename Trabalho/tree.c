#include <stdlib.h>
#include <stdio.h>
#include "btree.h"

BTree* btree_cria_vazia(void) {
	return NULL;
}

int arv_vazia(BTree* a) {
	return a == NULL;
}

BTree* btree_cria_subarvore(bool b, Btree* sae, Btree* sad) {
	BTree* p = (BTree*) malloc(sizeof(Btree));
	p->info = b;
	p->esq = sae;
	p->dir = sad;
	return p;
}

void btree_limpa_memoria(Btree* tree) {
	if (!arv_vazia(tree)) {
		btree_limpa_memoria(tree->esq);
		btree_limpa_memoria(tree->dir);
		free(tree);
	}
	return NULL;
}

BTree* btree_constroi_subconjuntos(int tamanho, BTree *a) {
	if (tamanho == 0) {
		return;
	} else {
		btree_cria_subarvore(a->info, a->esq, a->dir);
	}
	btree_constroi_subconjuntos(tamanho--, a->esq);
	btree_constroi_subconjuntos(tamanho--, a->dir);
}

void btree_imprime_subconjuntos(BTree* tree, int* conjunto) {
	return NULL;
}

