/* Desenvolva um programa que, infinitamente, leia os três coeficientes, a, b e c, de uma equação de 2o grau ax2 + bx + c = 0, e retorne as raízes desta equação, se elas existirem. 

O programa para quando os valores lidos para os três coeficientes forem iguais a zero. */


#include <stdio.h>
#include <math.h>

int main (void) {
	int a, b, c;
	float raiz1, raiz2;
	float delta;
	
	while (1) {
		
		printf("\nEsse programa calcula as raizes de uma equação do segundo grau do tipo ax^2 + bx + c\n");
		printf("Para calcular, entre com os coeficientes\n");

		printf("Coeficiente a:\n");
		scanf("%d", &a);
		
		printf("Coeficiente b:\n");
		scanf("%d", &b);
	
		printf("Coeficiente c:\n");
		scanf("%d", &c);
		
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		
		delta = b*b - 4*a*c;
			
		raiz1 = ((-1*b + sqrt(delta)) / 2*a);
		raiz2 = ((-1*b - sqrt(delta)) / 2*a);
		
		printf("Raiz 1: %f    Raiz 2: %f", raiz1, raiz2);
	}
	
}
