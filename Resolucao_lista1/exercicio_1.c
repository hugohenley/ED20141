#include <stdio.h>
#include <math.h>

/* Escreva um programa, em C, que recebe um valor de angulo em graus e informa os valores do seno, do cosseno e da tangente desse angulo */

int main(void)
{
	float seno, cosseno, tg;
	float angulo;
	float radians;
	printf("Digite o valor do angulo em graus:\n");
	scanf("%f", &angulo);
	radians = (angulo * M_PI)/180;
	seno = sin(radians);
	cosseno = cos(radians);
	tg = tan(radians);
	
	printf("O valor do seno eh %f", seno);
	printf("O valor do cosseno eh %f", cosseno);
	printf("O valor da tangente eh %f", tg);
	printf("\n");
	
}