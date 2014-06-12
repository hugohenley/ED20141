#include <stdio.h>

struct aluno {
	int matricula;
	float cr;
};

typedef struct aluno Aluno;

int main(void) {
	Aluno al;
	
	printf("Digite a matricula do aluno\n");
	scanf("%d", &al.matricula);

	printf("Digite o CR do aluno\n");
	scanf("%f", &al.cr);
	
	printf("A matricula do aluno eh %d\n", al.matricula);
	
	printf("O CR do aluno eh %f\n", al.cr);
}