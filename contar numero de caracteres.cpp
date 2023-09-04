#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main (void) {
	
setlocale(LC_ALL,"portuguese");	
	
char Letras[20];

	
	printf("Digite uma palavra para ser contado o numero de caracteres!\n");
	scanf("%s",Letras);
	
	int tamanho = strlen(Letras);
	
	printf("O numero de caracteres da palavra '%s' são: %d\n",Letras,tamanho);
	
	
	printf("FIM DO PROGRAMA!!\n");
	system("pause");
	return 0;
}
