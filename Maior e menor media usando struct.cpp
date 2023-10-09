#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´icula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. 
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. 
(d) Encontre o aluno com menor media geral 
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovacao.
*/
struct aluno {

int matricula;
char nome[20];
float nota1,nota2,nota3;
float media;	
	
};

int main(void) {

setlocale(LC_ALL,"portuguese");


printf("PROGRAMA QUE MOSTRA SE O ALUNO FOI APROVADO OU NÃO E MOSTRA A MAIOR E MENOR MÉDIA\n");
struct aluno x[5];
int i,IndiceMaiorMedia = 0,IndiceMenorMedia = 10;
float maiorMedia = 0,menorMedia = 10;

for(i=0;i<5;i++) {

printf("Digite o nome do(a) aluno(a):");
printf("\n");
gets(x[i].nome);

printf("Digite matrícula do(a) aluno(a):");
scanf("%d",&x[i].matricula);
printf("\n");

printf("Digite a primeira,segunda e terceira nota pressionando ENTER após cada nota:\n");
scanf("%f",&x[i].nota1);
scanf("%f",&x[i].nota2);
scanf("%f",&x[i].nota3);

getchar();

float media;
x[i].media = 0;
x[i].media = (x[i].nota1+x[i].nota2+x[i].nota3)/3;
if (x[i].media<6) {

printf("aluno %s com media %.2f está reprovado!\n",x[i].nome,x[i].media);
 
 }else {

printf("aluno %s com media %.2f está aprovado!\n",x[i].nome,x[i].media);
}


if (x[i].media>maiorMedia) {
	maiorMedia = x[i].media;
	IndiceMaiorMedia = i;
}

printf("O aluno com a MAIOR média é: %s com %.2f\n",x[IndiceMaiorMedia].nome,x[IndiceMaiorMedia].media);
if (x[i].media<menorMedia) {
	menorMedia = x[i].media;
	IndiceMenorMedia = i;
}
}
printf("O Aluno com a MENOR média é: %s com %.2f\n",x[IndiceMenorMedia].nome,x[IndiceMenorMedia].media);

printf("FIM DO PROGRAMA!!!!");
	system("pause");
	return 0;
}
