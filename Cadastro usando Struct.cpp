#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct pessoa {
	int idade;
	char nome[50], rua[50];
};
int main (void) {
	setlocale(LC_ALL,"portuguese");
	//Criar um struct para nome,rua,idade.
	
	struct pessoa p1,p2,p3; 
	
	printf("Digite seu nome,idade e endereço:\n");

	scanf("%s",&p1.nome);
	scanf("%d",&p1.idade);
	scanf("%s",&p1.rua);
	
		printf("Digite seu nome,idade e endereço:\n");

	scanf("%s",&p2.nome);
	scanf("%d",&p2.idade);
	scanf("%s",&p2.rua);
	
		printf("Digite seu nome,idade e endereço:\n");

	scanf("%s",&p3.nome);
	scanf("%d",&p3.idade);
	scanf("%s",&p3.rua);
	
	printf("Os dados da primeira pessoa são: %s, %d e %s",p1.nome,p1.idade,p1.rua);
	printf("\n");
	printf("Os dados da segunda pessoa são: %s, %d e %s",p2.nome,p2.idade,p2.rua);
	printf("\n");
	printf("Os dados da terceira pessoa são: %s, %d e %s",p3.nome,p3.idade,p3.rua);
	printf("\n");

	system ("pause");
	return 0;
}