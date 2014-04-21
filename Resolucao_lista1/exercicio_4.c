#include <stdio.h>
/* S = (37x38/1) - (36x37/2) + (35x36/3) - ... + (1x2/37) */

int main(void) {
	double i;
	double produto1 = 37;
	double produto2 = 38;
	double soma;
	
	for (i = 1; i < 38; i++) {
		if ((int) i % (int) 2 == 0) {
			soma -= (produto1 * produto2)/i;
				printf("- (%lf * %lf) / %lf\n", produto1, produto2, i);
		}
		else {
			soma += (produto1 * produto2)/i;
				printf("+ (%lf * %lf) / %lf\n", produto1, produto2, i);
		}
		produto1 -= 1;
		produto2 -= 1;
	}
	
	printf("O resultado da soma eh: %lf\n", soma);
	return 0;
}