struct btree {
	char info;
	struct arvore* esq;
	struct arvore* dir;
};

typedef struct btree BTree;
typedef enum { false, true } bool;

BTree* btree_cria_vazia(void);

BTree* btree_cria_subarvore(bool b, BTree* sae, BTree* sad);

void btree_limpa_memoria(BTree* tree);

BTree* btree_constroi_subconjuntos(int tamanho);

void btree_imprime_subconjuntos(BTree* tree, int* conjunto);