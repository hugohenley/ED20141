/* Implemente um programa que, infinitamente, leia um número n e um número m, e retorne todas as potências de m, menores que n. 

Por exemplo, se n = 1000 e m = 2, seu programa deve imprimir os seguintes números: 1, 2, 4, 8, 16, 32, 64, 128, 256 e 512. 

O programa para quando o valor lido para m for ou 0 ou 1 ou -1. */

#include <stdio.h>
#include <math.h>

int main (void) {
	int m, n;
	int potencia_atual = 0;
	
	while (1) {
		printf("\nEste programa retorna todas as potências de m que são menores que n\n");
		printf("Entre com valores para m e n\n");
		printf("\nValor para n:\n");
		scanf("%d", &n);
	
		printf("\nValor para m:\n");
		scanf("%d", &m);
		
		if (m == 0 || m == 1 || m == -1) {
			break;
		}
		
		while (pow(m,potencia_atual) < n) {
			printf("%.0lf ", pow(m,potencia_atual));
			potencia_atual += 1;
		}
		
			potencia_atual = 0;
	}
}