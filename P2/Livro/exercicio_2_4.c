/* A Função recebe duas listas encadeadas de valores reais e retorna a lista resultante da concatenacao das duas. 
O ultimo elemento da primeira lista deve apontar para o primeiro elemento da segunda lista */

#include <stdlib.h>
#include <stdio.h>

struct lista {
	int info;
	struct lista* prox;
};

typedef struct lista Lista;

Lista* lst_cria(void) {
	return NULL;
}

Lista* lst_insere(Lista* l, int i) {
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

Lista* concatena(Lista* l1, Lista* l2) {
	Lista* p = l1;
	Lista* ant;
	for (p = l1; p != NULL; p = p->prox) {
		ant = p;
	}
	ant->prox = l2;
	free(l2);
	for (p = l1; p != NULL; p = p->prox) {
		printf("Conteudo: %d\n", p->info);
	}
	return l1;
}

int main(void) {
	Lista* l = (Lista*) malloc(sizeof(Lista));
	l = lst_cria();
	l = lst_insere(l, 73);
	l = lst_insere(l, 44);
	l = lst_insere(l, 34);
	
	Lista* l2 = (Lista*) malloc(sizeof(Lista));
	l2 = lst_cria();
	l2 = lst_insere(l2, 22);
	l2 = lst_insere(l2, 14);
	l2 = lst_insere(l2, 8);
	l2 = lst_insere(l2, 5);
	
	concatena(l, l2);
}