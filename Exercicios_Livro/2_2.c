#include <stdio.h>
#include <math.h>

void calc_esfera (float r, float* area, float* volume) {
	*area = 4*3.14*r*r;
	*volume = (4*3.14*r*r*r)/3;
}

int main (void) {
	float raio;
	float area = 0, volume = 0;
	printf("Entre com o raio da esfera em cm:\n");
	scanf("%f", &raio);
	calc_esfera(raio, &area, &volume);
	printf("Area: %f cm2   Volume: %f cm3\n", area, volume);
}