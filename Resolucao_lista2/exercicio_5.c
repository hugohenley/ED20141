/* Desenvolva um programa que, infinitamente, leia um número n e informe as seguintes operações matemáticas: 

a) os divisores deste número, informando se o número é primo ou não; 
b) o seu fatorial e 
c) o valor de sua raiz quadrada. 

Por exemplo, se n = 4, então o programa deve responder na console:
Calculos para o valor de n = 4:
1
2
4 (NAO E PRIMO)
24 2.0

E se n = 3, o programa deve responder: Calculos para o valor de n = 3: 
1
3 (PRIMO)

6 1.732051

*/

#include <stdio.h>
#include <math.h>

float fatorial(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n*fatorial(n-1);
	}
}

int main (void) {
	int numero, i;
	int contagem = 0;
	
	while (1) {
		printf("Entre com o número desejado:\n");
		scanf("%d", &numero);
		printf("\n");
		
		for (i = 1; i < numero; i++) {
			if (numero % i == 0) {
				printf("%d\n", i);
				contagem++;
			}
		}
	
		if (contagem == 1) {
			printf("%d (PRIMO)\n", numero);
		}	else {
			printf("%d (NAO E PRIMO)\n", numero);
		}
		
		contagem = 0;
	
	  printf("O fatorial do numero %d é %0.f\n", numero, fatorial(numero));
		
		printf("O valor da raiz quadrada de %d é %f\n", numero, sqrt(numero));
	}
	
}