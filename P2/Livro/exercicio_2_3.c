/* Função que tenha como valor de retorno o ponteiro para o último nó de uma lista encadeada */
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


Lista* ultimo(Lista* l) {
	Lista* p = l;
	Lista* ant;
	for (p = l; p != NULL; p = p->prox) {
		ant = p;
	}
	printf("O conteudo do ultimo no é: %d\n", ant->info);
	printf("O endereco do ultimo nó é: %p\n", (void *) &ant);
	return ant;
}

int main(void) {
	Lista* l = (Lista*) malloc(sizeof(Lista));
	l = lst_cria();
	l = lst_insere(l, 73);
	l = lst_insere(l, 44);
	l = lst_insere(l, 34);
	l = lst_insere(l, 22);
	l = lst_insere(l, 14);
	l = lst_insere(l, 8);
	l = lst_insere(l, 5);
	
	ultimo(l);
}