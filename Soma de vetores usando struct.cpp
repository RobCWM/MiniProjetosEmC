#include<stdio.h>
#include<stdlib.h> 
#include<locale.h>
#include<string.h>

struct Vetor {
	
float x,y,z;
};

int main (void) {

	/*Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3 ,implemente um programa que calcule a soma de dois
vetores.
	*/
setlocale(LC_ALL,"portuguese");	
	struct Vetor r3;
		printf("Programa que calcula vetores, digite o valor de x, y e z!\n");
		printf("Digite o valor de x: ");
	scanf("%f",&r3.x);
		printf("Digite o valor de y: ");
	scanf("%f",&r3.y);
		printf("Digite o valor de z: ");
	scanf("%f",&r3.z);
	
int dd;
	printf("Para fazer a soma dos vetores escolha uma das opções: \n");
	printf("Digite 1 para X+Y\nDigite 2 para X+Z\nDigite 3 para Y+Z\n");
scanf("%d",&dd);
	
	switch (dd) {
	
		case 1:
	printf("A soma de X + Y é: %.2f\n",r3.x + r3.y);
break;

	case 2:
	printf("A soma de X + Z é: %.2f\n",r3.x + r3.z);
break;

	case 3:
	printf("A soma de Y + Z é: %.2f\n",r3.y + r3.z);
break;

	}
	
	printf("FIM DO PROGRAMA!!!\n");
	
	system("pause");
	return 0;
}
