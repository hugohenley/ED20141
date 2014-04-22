/*

Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou nao de um novo produto lancado no mercado. Para isso, obteve, para cada pessoa entrevistada, informacoes a respeito do sexo do entrevistado e sua resposta (S = Sim ou N = Nao). Sabe-se que foram entrevistados 2000 pessoas, fazer um programa que calcule e escreva:
• O numero de pessoas que responderam sim
• O numero de pessoas que responderam nao
• A porcentagem de pessoas do sexo feminino que responderam sim 
• A porcentagem de pessoas do sexo masculino que responderam nao

*/

#include <stdio.h>

int main(void) {
	int numero_pessoas, i;
	
	int fem_sim = 0;
	int fem_nao = 0;
	int masc_sim = 0;
	int masc_nao = 0;
	
	char sexo_pessoa_atual, resposta_atual;
	
	printf("Com quantas pessoas você quer fazer a pesquisa de mercado?\n");
	scanf("%d", &numero_pessoas);
	
	for (i = 1; i <= numero_pessoas; i++ ) {

		printf("Qual o seu sexo? (Responda F ou M)\n");
		scanf(" %c", &sexo_pessoa_atual);
		
		

		printf("Você ficou satisfeito com o novo produto? (Responda S ou N)\n");
		scanf(" %c", &resposta_atual);
		

		
		if ((sexo_pessoa_atual == 'M') && (resposta_atual == 'S')) {
			masc_sim++;
		} 
		else if ((sexo_pessoa_atual == 'M') && (resposta_atual == 'N')) {
			masc_nao++;
		}
		else if ((sexo_pessoa_atual == 'F') && (resposta_atual == 'S')) {
			fem_sim++;
		}
		else if ((sexo_pessoa_atual == 'F') && (resposta_atual == 'N')) {
			fem_nao++;
		}
	}
	
	printf("O número de pessoas que respondeu sim foi: %d\n", (masc_sim + fem_sim));
	printf("O número de pessoas que respondeu nao foi: %d\n", (masc_nao + fem_nao));
	
	if (fem_sim + fem_nao != 0) {
		printf("A porcentagem de pessoas do sexo feminino que respondeu sim foi: %d porcento\n", (fem_sim * 100/(fem_sim + fem_nao)));		
	} else {
		printf("Nenhuma mulher respondeu a pesquisa\n");		
	}

	if (masc_sim + masc_nao != 0) {
		printf("A porcentagem de pessoas do sexo masculino que respondeu nao foi: %d porcento\n", (masc_nao * 100/(masc_sim + masc_nao)));		
	} else {
		printf("Nenhum homem respondeu a pesquisa\n");		
	}

	return 0;
}

