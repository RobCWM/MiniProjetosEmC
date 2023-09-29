#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*Construa uma estrutura aluno com nome, numero de matricula e curso. Leia do usuario
a informacao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/
struct aluno {
	char nome[20],curso[20];
	int mat;
};

int main(void) {
	setlocale(LC_ALL,"portuguese");
	
	struct aluno sof[5];
	int i;
	for (i=0;i<5;i++) {
		printf ("Digite o nome do aluno: ");
		gets(sof[i].nome);
	
	    printf ("Digite o nome do curso: ");	
	
		gets(sof[i].curso);
		

     	printf ("Digite a matrícula: ");
	
		scanf("%d",&sof[i].mat);
	getchar();
		
		printf("Nome: %s\n",sof[i].nome);
			printf("Curso: %s\n",sof[i].curso);
				printf("Matrícula: %d\n",sof[i].mat);
	}
	
	system("pause");
	return 0;
}
