#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*faca um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionario de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, ´
Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de ate 30 caracteres) e Salario. Os dados devem ser digitados pelo usuario, armazenados 
na estrutura e exibidos na tela.
*/

struct funcionario {
	
	char nome[30],sexo[10],cargo[30],nascimento[50];
	int idade,setor;
	long long int cpf;
	float salario;
	
};

int main (void) {
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Cadastro de dados de funcionário\n");
	struct funcionario a;
	
	printf("Digite seu nome: ");
	scanf(" %[^\n]",&a.nome);
	
	printf("Digite sua idade: ");
	scanf("%d",&a.idade);
	
	printf("Digite seu sexo (Masculino ou Feminino): ");
	scanf(" %[^\n]",&a.sexo);
	
	printf("Digite seu CPF (Sem ponto e traço): ");
	scanf("%11d",&a.cpf);
	
	printf("Digite sua data de nascimento escrevendo por extenso (Exemplo: 3 de março de 1994): ");
	scanf(" %[^\n]",&a.nascimento);
	
	printf("Digite o codigo do setor (0-99) ");
	scanf("%d",&a.setor);
	
	printf("Digite o cargo em que trabalha: ");
	scanf(" %[^\n]",&a.cargo);
	
	printf("Digite seu salário: ");
	scanf("%f",&a.salario);
	
	printf("\n");
	
	
	
	printf("Dados do(a) funcionário(a) %s\n",a.nome);
	printf("Sexo: %s\n",a.sexo);
	printf("Data de Nascimento: %s e possui %d anos de idade\n",a.nascimento,a.idade);
	printf("CPF: %011lld\n",a.cpf);
	printf("Trabalha no setor de código %d no cargo de %s\n",a.setor,a.cargo);
	printf("Salário: %.2f reais\n",a.salario);
	
	printf("FIM DO PROGRAMA!!!!");
	system("pause");
	return 0;
}



