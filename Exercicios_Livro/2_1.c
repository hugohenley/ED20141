#include <stdio.h>
#include <math.h>

int raizes (float a, float b, float c, float* x1, float* x2) {
	float raiz1;
	float raiz2;
	float delta;
	
	delta = b*b - 4*a*c;
		
	*x1 = ((-1*b + sqrt(delta)) / 2*a);
	*x2 = ((-1*b - sqrt(delta)) / 2*a);
	return 0;
}

int main (void) {
	float a, b, c;
	printf("\nEsse programa calcula as raizes de uma equação do segundo grau do tipo ax^2 + bx + c\n");
	printf("Para calcular, entre com os coeficientes\n");

	printf("Coeficiente a:\n");
	scanf("%f", &a);
	
	printf("Coeficiente b:\n");
	scanf("%f", &b);

	printf("Coeficiente c:\n");
	scanf("%f", &c);
	
	float x1, x2;
	
	raizes(a, b, c, &x1, &x2);
	printf("x1: %f     x2: %f\n", x1, x2);
}