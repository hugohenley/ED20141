#include <stdio.h>

int primo (int n) {
	int i, contador;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			contador++;
		}
	}
	if (contador == 2) {
		return 1;
	} else {
		return 0;
	}
	
}

int main (void) {
	int numero;
	printf("Digite o numero que deseja verificar se é primo:\n");
	scanf("%d", &numero);
		
		if (primo(numero) == 1) {
			printf("O número é primo\n");
		} else {
			printf("O número não é primo\n");
		}
}