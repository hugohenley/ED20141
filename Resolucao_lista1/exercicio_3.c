#include <stdio.h>

int main(void) {
	double i;
	double total = 0.0f;
	double numerador = 1;
	for (i=1; i < 51; i++) {
		total += (numerador/i);
		printf("numerador: %lf   denominador: %lf \n", numerador, i);
		printf("Total parcial: %lf\n", total);
		numerador += 2;
	}
	printf("O resultado da soma eh: %lf \n", total);
}