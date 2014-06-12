void lcric_imprime(Lista* l) {
	Lista* p = l;
	if (p) do {
		printf("%d\n", p->info);
		p = p->prox;
	} while (p != l);
}