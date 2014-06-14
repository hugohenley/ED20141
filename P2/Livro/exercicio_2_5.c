/* Recebe uma lista encadeada e um valor inteiro n e retira da lista todas as ocorrencias de n e retorna a lista resultante*/


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

Lista* lst_retira(Lista* l, int v) {
	Lista* ant = NULL; /*Ponteiro para o elemento anterior*/
	Lista* p = l; /*Ponteiro para percorrer a lista*/
	
	while (p != NULL && p->info != v) {
		ant = p;
		p = p->prox;
	}
	
	if (p == NULL) {
		return l; /*Não achou o elemento*/
	}
	
	if (ant == NULL) {
		l = p->prox;   /*Retira elemento do inicio*/
	} else {
		ant->prox = p->prox; /*Retira elemento do meio da lista*/
	}
	
	free(p);
	return l;
}

Lista* retira_n(Lista* l, int n) {
	Lista* p = l;
	Lista* aux = p->prox	;
	Lista* ant = NULL;
	
	while (p != NULL) {
		ant = p;
		if (p->info == n) {
			
		}
		p = p->prox;
	}

	Lista* p2 = l;	
	for (p2 = l; p2 != NULL; p2 = p2->prox) {
		printf("Conteudo: %d\n", p2->info);
	}
	
	return l;
}



int main(void) {
	Lista* l = (Lista*) malloc(sizeof(Lista));
	l = lst_cria();
	l = lst_insere(l, 73);
	l = lst_insere(l, 44);
	l = lst_insere(l, 73);
	l = lst_insere(l, 73);
	l = lst_insere(l, 34);
	retira_n(l, 73);
}