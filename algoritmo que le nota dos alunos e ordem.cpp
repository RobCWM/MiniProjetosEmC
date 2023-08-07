#include <stdio.h>
#include <stdlib.h>

int main () {

char nome1[100],nome2[100],nome3[100],nome4[100],nome5[100];
float nota1,nota2,nota3,nota4,nota5;		
	
	printf ("Digite nome do primeiro aluno:\n");
	scanf ("%s",&nome1);
	
		printf("Digite a nota do primeiro aluno:\n");
	scanf ("%f",&nota1);
	
	printf ("Digite nome do segundo aluno:\n");
	scanf ("%s",&nome2);
	
		printf("Digite a nota do segundo aluno:\n");
	scanf ("%f",&nota2);
	
	printf ("Digite nome do terceiro aluno:\n");
	scanf ("%s",&nome3);
	
		printf("Digite a nota do terceiro aluno:\n");
	scanf ("%f",&nota3);
	
	printf ("Digite nome do quarto aluno:\n");
	scanf ("%s",&nome4);
	
		printf("Digite a nota do quarto aluno:\n");
	scanf ("%f",&nota4);
	
			printf ("Digite nome do quinto aluno:\n");
	scanf ("%s",&nome5);
	
		printf("Digite a nota do quinto aluno:\n");
	scanf ("%f",&nota5);
	
	printf("O status dos alunos e:\n");
	printf("O nome e nota do aluno e: %s %.2f\n",nome1,nota1);
	printf("O nome e nota do aluno e: %s %.2f\n",nome2,nota2);
	printf("O nome e nota do aluno e: %s %.2f\n",nome3,nota3);
	printf("O nome e nota do aluno e: %s %.2f\n",nome4,nota4);
	printf("O nome e nota do aluno e: %s %.2f\n",nome5,nota5);
	
	printf("O resultado se foram aprovados ou nao:\n");
	
		if (nota1>=7) {
	printf ("Aluno %s aprovado\n",nome1);
	} else {
	 printf ("Aluno %s reprovado\n",nome1); }

	 	if (nota2>=7){
	printf ("Aluno %s aprovado\n",nome2);
	} else {
	 printf ("Aluno %s reprovado\n",nome2); }
	 
	 	if (nota3>=7){
	printf ("Aluno %s aprovado\n",nome3);
	} else {
	 printf ("Aluno %s reprovado\n",nome3); }
	 
	 	if (nota4>=7){
	printf ("Aluno %s aprovado\n",nome4);
	} else {
	 printf ("Aluno %s reprovado\n",nome4); }
	 
	 	if (nota5>=7){
	printf ("Aluno %s aprovado\n",nome5);
	} else {
	 printf ("Aluno %s reprovado\n",nome5); }	
	
	system ("pause");
	return 0;
}
