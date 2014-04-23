#include <stdio.h>

int isPrime(int n) {
	int cont = 0;
	int i;
	
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			cont++;
		}
	}
	
	if (cont == 2) {
		return 1;
	} else {
		return 0;
	}
}

void imprimir_n_primos(int n) {
	int numero_atual = 2;
	int primeiros_primos = n;
	
	while (primeiros_primos > 0) {
		if (isPrime(numero_atual) == 1) {
			printf("%d ", numero_atual);
			primeiros_primos = primeiros_primos - 1;
		}
			numero_atual++;
	}
}

int main (void) {
	int qtd_primos;
	
	while (1) {
		printf("\nQuantos números primos deseja imprimir?\n");
		scanf("%d", &qtd_primos);
		
		if (qtd_primos <= 0) {
			break;
		}
		
		imprimir_n_primos(qtd_primos);		
	}
	return 0;
}

