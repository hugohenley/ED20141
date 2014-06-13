/* Funcao que retorna o numero de nós de uma lista encadeada que possuem o campo info com valores maiores do que n*/
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


int maiores(Lista* l, int n) {
	Lista* p = l;
	int total = 0;
	for (p = l; p != NULL; p=p->prox) {
		if (p->info > n) {
			total++;
		}
	}
	return total;
}

int main(void) {
	Lista* l = (Lista*) malloc(sizeof(Lista));
	l = lst_insere(l, 73);
	l = lst_insere(l, 44);
	l = lst_insere(l, 34);
	l = lst_insere(l, 14);
	l = lst_insere(l, 22);
	l = lst_insere(l, 8);
	l = lst_insere(l, 5);
	
	int n;
	
	printf("Digite o numero N para o qual sera retornado os elementos da lista com valores maiores\n");
	scanf("%d", &n);
	
	printf("%d\n", maiores(l, n));
}