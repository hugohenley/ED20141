#include <stdio.h>

/* TODO: Implementar condicionais e calculo de meses de trabalho! :) */


int main (void) {
	int mes_corrente, ano_corrente, i, matricula_atual;
		
	float salario_atual;
	
	int mes_ingresso, ano_ingresso;
	int qtd_funcionarios;
	
	printf("Digite o mês corrente\n");
	scanf("%d", &mes_corrente);
	
	printf("Digite o ano corrente\n");
	scanf("%d", &ano_corrente);
	
	printf("Digite a quantidade de funcionários\n");
	scanf("%d", &qtd_funcionarios);
	
	for (i = 1, i <= qtd_funcionarios, i++) {
		printf("Digite a matricula do funcionario\n");
		scanf("%d", &matricula_atual);
		
		printf("Digite o salário atual do funcionário\n");
		scanf("%f", &salario_atual);
		
		printf("Digite o mês de ingresso do funcionário\n");
		scanf("%d", &mes_ingresso);
		
		printf("Digite o ano de ingresso do funcionário\n");
		scanf("%d", &ano_ingresso);
		
	}
	
}