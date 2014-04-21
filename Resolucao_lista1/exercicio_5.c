/*
Um comerciante deseja aumentar suas vendas fazendo uma promocao. Os produtos que ele trabalha e seus respectivos precos e codigos sao: 
a - anel - R$ 3,00, p - pulseira - R$ 5,00, b - brinco - R$ 5,00 e c - cinto - R$ 10,00. 

As promocoes oferecidas sao:
• comprar 1 unidade de cada produto, ganha-se um desconto de 10% no total da compra.

• comprar mais de 1 unidade de algum produto, ganha-se 5% de desconto no valor total da compra. 

Faca um programa para simular a venda na loja do comerciante, recebendo como dado de entrada o codigo do produto e o codigo da promocao que o fregues quiser. 

Imprimir o valor original da compra e o valor com desconto. Utilize o comando de selecao multipla (switch).

INPUT: codigo_produto, codigo_promocao
OUTPUT: Valor original, Valor com desconto
*/

#include <stdio.h>

int calcular_total_promocao_2 (char codigo_produto, int qtd_unidades)
{
	int total, total_com_desconto;
	int preco_anel = 3;
	int preco_pulseira = 5;
	int preco_brinco = 5;
	int preco_cinto = 10;
	
	char codigo_anel = "a";
	char codigo_pulseira = "p";
	char codigo_brinco = "b";
	char codigo_cinto = "c";
	
	switch (codigo_produto) {
		case codigo_anel:
			total = qtd_unidades * preco_anel;
		break;
		
		case codigo_pulseira:
			total = qtd_unidades * preco_pulseira;
		break;
		
		case codigo_brinco:
			total = qtd_unidades * preco_brinco;		
		break;
		
		case codigo_cinto:
			total = qtd_unidades * preco_cinto;
		break;
		
		total_com_desconto = total - total/20;
	}
}

int main(void) {
	char codigo_produto;
	int codigo_promocao;
	int qtd_unidades;

	char codigo_anel = "a";
	char codigo_pulseira = "p";
	char codigo_brinco = "b";
	char codigo_cinto = "c";
	
	int total, total_com_desconto;
	
	printf("Escolha o codigo do produto a ser comprado:\n");
	scanf("%c", &codigo_produto);
	
	printf("Escolha o codigo da promocao desejada (1 ou 2):\n");
	scanf("%d", &codigo_promocao);
		
	switch (codigo_promocao) {
		case 1:
			total = preco_anel + preco_pulseira + preco_brinco + preco_cinto;
			total_com_desconto -= total / 10;
		break;
		
		case 2:
			printf("Quantas unidades desejada comprar do produto escolhido?\n");
			scanf("%d", &qtd_unidades);
			total_com_desconto = calcular_total_promocao_2(codigo_produto, qtd_unidades);
		break;
			
	} 
	printf("O total com desconto foi de: R$%d,00\n", total_com_desconto);
}





