#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //não esquecer de declarar isso aqui em todo codigo
int main (void){

setlocale(LC_ALL,"portuguese");
//Programa para mostrar o maior valor da matriz

int matriz[5][5] = {{4,2,10,12,0},{2,5,3,2,7},{2,0,7,6,9},{10,23,43,54,20},{1,23,77,66,69}};
int i,j, maior = matriz[0][0];

for (i=0;i<5;i++) {
for	(j=0;j<5;j++) {
	
	if (maior < matriz[i][j]) {
	maior = matriz[i][j];
}
	}
	}

printf("O maior valor é o %d\n",maior);

system("pause");
return 0;
}
