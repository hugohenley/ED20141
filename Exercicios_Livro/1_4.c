/* soma dos n primeiros numeros naturias */

#include <stdio.h>

int soma_impares (int n) {
	int soma = 0;
	int qtd_atual = 0;
	int numero = 1;
	int limite = n;
	while (qtd_atual < limite) {
		if (numero % 2 != 0) {
			soma += numero;
			qtd_atual +=1;
		}
		numero += 1;
	}
		return soma;	
}

int main (void) {
	int n;
	printf("Entre com n:\n");
	scanf("%d", &n);
		
	printf("A soma é: %d \n", soma_impares(n));
}