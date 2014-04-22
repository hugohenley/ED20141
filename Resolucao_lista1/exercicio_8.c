/* Suponha que a populacao de um paıs A seja de 9.000 habitantes com uma taxa anual de crescimento de 3% e que a populacao de um paıs B seja,
 aproximadamente, de 20.000 de habitantes com uma taxa anual de crescimento de 1,5%, fazer um programa que calcule e escreva o nu ́mero de anos necessarios 
para que a populacao de paıs A ultrapasse ou se iguale a populacao do paıs B, mantidas estas taxas de crescimento. */


#include <stdio.h>

int main (void) {
	float habitantes_a = 9000;
	float habitantes_b = 20000;
	int anos = 0;
	
	while (habitantes_b > habitantes_a) {
		habitantes_a = habitantes_a * 1.03;
		habitantes_b = habitantes_b * 1.015;
		
		anos++;
	}
	printf("O número de anos necessários para que Habitantes A > Habitantes B é: %d\n", anos);

	return 0;
}