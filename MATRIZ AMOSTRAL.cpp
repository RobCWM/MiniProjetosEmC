#include <stdio.h>
#include <stdlib.h>
#define F 5
#define C 3
int main () {
	
//criar uma matriz e imprimir no final	

int i,j;
int valor[F][C];

for (i=0;i<F;i++) {
for (j=0;j<C;j++) {
	
	printf("Digite o valor de [%d] e [%d] \n",i+1,j+1);
	scanf("%d",&valor[i][j]);
	
}	
}	
printf("Valores na matriz:\n");

for (i=0;i<F;i++) {
for (j=0;j<C;j++) {
printf("%d ",valor[i][j]);
}
printf("\n");
}
printf("FIM DO PROGRAMA!!!!\n");
system ("pause");	
	return 0;
}
