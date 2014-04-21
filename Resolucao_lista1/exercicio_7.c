#include <stdio.h>

int main (void) {
	int qtd_numeros, numero_atual, i;
	printf("Quantos numeros serão lidos?\n");
	scanf("%d", &qtd_numeros);
		
		for (i = 1; i <= qtd_numeros; i++) {
			printf("Digite o numero:\n");
			scanf("%d", &numero_atual);
			if  (numero_atual % 2 == 0) {
				printf("O número é par!\n");
			} else {
				printf("O número é ímpar!\n");
			}
		}
		
}