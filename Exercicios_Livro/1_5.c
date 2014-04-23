#include <stdio.h>
#include <math.h>

double pi (int n) {
	double total = 0;
	int i;
	double numerador, denominador;
	
	for (i = 0; i <= n; i++) {
		numerador = pow(-1, i);
		denominador = (2*i + 1);
		printf("%f\n", numerador);
		printf("%f\n", denominador);
		total += numerador/denominador;
	}
	return total * 4;
}

int main (void) {
	int n;
	printf("Digite o numero de termos para uma aproximacao do valor de PI\n");
	scanf("%d", &n);
		
	printf("Valor de pi para %d termos: %lf\n", n, pi(n));
}