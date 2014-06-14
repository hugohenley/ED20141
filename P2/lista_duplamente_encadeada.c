#include <stdlib.h>

struct lista2 {
	int info;
	struct lista2* ant;
	struct lista2* prox;
};

typedef struct lista2 Lista2;

Lista2* lst2_insere(Lista2* l, int v) {
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	
	if (l != NULL) {
		l->ant = novo;
	}
	return novo;
}

Lista2* lst2_busca(Lista2* l, int v) {
	Lista2* p;
	for (p = l; p != NULL; p = p->prox) {
		if (p->info == v) {
			return p;
		}
	}
	return NULL;
}


int main(void) {
	
}