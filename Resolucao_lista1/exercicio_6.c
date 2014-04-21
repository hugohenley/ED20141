#include <stdio.h>

int main (void) {
	float i;
	float celcius;
	for (i=50; i < 151; i++) {
		celcius = (5*(i-32))/9;
		
		printf("Celcius: %f   | Fahrenheit: %f   \n", celcius, i);
	}
}