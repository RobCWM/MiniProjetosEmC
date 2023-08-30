#include <stdio.h>
#include <stdlib.h>
#define N 2000
#include <locale.h>
int main (void)
{
	//Programa para fazer o calculo de imposto SEM USAR 'IF' se for maior que 2000 tirar 20% e se for menos tirar 10%.
setlocale(LC_ALL, "Portuguese");

	float renda;
	int i;
	
	printf("Calculador de imposto de renda!\n");
	printf("Digite sua renda abaixo:\n");
	scanf("%f",&renda);
	
	for (i=0;renda>N;i++) {
		printf("O valor de imposto aplicado é de 20%% e será descontado %.2f reais!\n",renda*0.2);
		break;
	}	
		for (i=0;renda<=N;i++) {
		printf("O valor de imposto aplicado é de 10%% e será descontado %.2f reais!\n",renda*0.1);
		break;
	}	
		
	printf("FIM DO PROGRAMA!\n");
	system("pause");
	return 0;
}
