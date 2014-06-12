#include <stdio.h>
#include <stdlib.h>

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

/* Outra opcao, com ponteiro de ponteiro
Lista* lst_insere(Lista** l, int i) {
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = *l;
	*l = novo;
}

Lista* l = lst_cria();
lst_insere(&l, 23);
*/

void lst_imprime(Lista *l) {
	Lista* p;
	for (p = l; p != NULL; p = p->prox) {
		printf("info = %d\n", p->info);
	}
}

int lst_vazia(Lista* l) {
	if (l == NULL) {
		return 1;
	} else {
		return 0;
	}
}


Lista* lst_busca(Lista* l, int v) {
	Lista* p;
	for (p = l; p != NULL; p = p->prox) {
		if (p->info == v)
			return p;
	}
	return NULL;
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

void lst_libera(Lista* l) {
	Lista* p = l;
	while (p != NULL) {
		Lista* t = p->prox; /*guarda referencia para o proximo elemento*/
		free(p); /*libera a memoria apontada por p*/
		p = t; /*faz p apontar para o proximo*/
	}
}


int main(void) {
	Lista* l;
	l = lst_cria();
	l = lst_insere(l, 23);
	l = lst_insere(l, 45);
	lst_imprime(l);
	
	Lista* l2;
	l2 = lst_cria();
	if (lst_vazia(l2)) {
		printf("Lista L2 está vazia!\n");
	};
	
	printf("\n\n\n");
	printf("O elemento 23 está na lista 1?\n");
	if (lst_busca(l, 23) != NULL) {
		printf("O elemento está na lista! :)\n");
	} else {
		printf("O elemento não está na lista! :(\n");
	}

	printf("\n\n\n");	
	printf("O elemento 38 está na lista 1?\n");
	printf("\n");
	if (lst_busca(l, 38) != NULL) {
		printf("O elemento está na lista! :)\n");
	} else {
		printf("O elemento não está na lista! :(\n");
	}
	
	printf("\n\n\n");
	printf("Adicionando o elemento 38...\n");
	l = lst_insere(l, 38);
	printf("\n");
	if (lst_busca(l, 38) != NULL) {
		printf("O elemento está na lista! :)\n");
	} else {
		printf("O elemento não está na lista! :(\n");
	}
	
	return 0;
}