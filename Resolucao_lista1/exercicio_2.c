#include <stdio.h>

int main(void) {
	float celcius, fahrenheit;
	printf("Esse programa tem como objetivo converter uma temperatura em fahrenheit para celcius\n");
	printf("Digite a temperatura em fahrenheit para converter\n");
	scanf("%f", &fahrenheit);
	
	celcius = (5*(fahrenheit-32))/9;
		
	printf("A temperatura em celcius eh %f graus\n", celcius);	
	return 0;
}