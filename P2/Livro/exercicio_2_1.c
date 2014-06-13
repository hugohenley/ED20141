/* Calcular o número de nós de uma lista */
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

int comprimento (Lista* l) {
	Lista* p = l;
	int cont = 0;
	for (p = l; p != NULL; p = p->prox) {
		printf("Conteudo: %d\n", p->info);
		cont++;
	}
	printf("O número total de nós é: %d\n", cont);
	return cont;
}


int main(void) {
	Lista* l = (Lista*) malloc(sizeof(Lista));
	l = lst_cria();
	l = lst_insere(l, 34);
	l = lst_insere(l, 14);
	l = lst_insere(l, 22);
	comprimento(l);
}
