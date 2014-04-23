#include <stdio.h>

int fibonacci (int n) {
	int i;
	int primeiro = 1;
	int segundo = 1;
	int ultimo;
	
	for (i = 1; i <= n - 2; i++) {
		ultimo = primeiro + segundo;
		primeiro = segundo;
		segundo = ultimo;
	}
	
	printf("O %d termo da sequencia é %d\n", n, ultimo);
	return 0;
}

int main(void) {
	int n;
	printf("Entre com o termo desejado da sequencia de Fibonacci\n");
	scanf("%d",&n);
	
	fibonacci(n);
	return 0;
}