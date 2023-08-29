#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 100
#include <string.h>

int main (void) {
  
  setlocale(LC_ALL, "Portuguese_Brasil");	//Linha que serve para ler os caracteres especiais 

char email[N][20], nome[N][20];
int i;
char telefone[N][15];             //abrindo uma string, o N para mostrar quantos loopings vao ser o segundo é para limitar o numero de caracteres
	
printf("Cadastro de informações!\n");

for (i=0;i<N;i++) {  //Fazendo o looping

printf("Digite o nome ou digite 'SAIR' para encerrar o looping\n");
scanf("%s",nome[i]);

if (strcmp(nome[i],"SAIR" )== 0) {   //comando para encerrar o looping caso o usuario digite "SAIR"
	break;
}

printf("Digite o email\n");
scanf("%s",email[i]);

printf("Digite o numero de telefone sem utilizar caracteres especiais '()' e '-''\n");
scanf("%s", &telefone[i]);

printf("Nome: %s\nEmail: %s\nTelefone: %s\n",nome[i],email[i],telefone[i]); //Mostrando as informaçoes digitadas

}
		
printf("FIM DO PROGRAMA!!\n");	
	
	system ("pause");
	return 0;	
}
