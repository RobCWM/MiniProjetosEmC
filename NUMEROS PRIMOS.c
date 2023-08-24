#include <stdio.h>
#include <stdlib.h>

int main()
{ //Programa pra saber se o numero é primo ou não
 int valor,i,contador = 0; 
 
    printf("Programa para saber se o número é primo!\n");
    printf("Digite um valor inteiro\n");
    scanf("%d",&valor);
    
    for (i=1;i<= valor;i++) {
        if (valor % i==0) {
            contador++;
        }
    }
if (contador ==2) {
    printf("O numero digitado é primo\n");}
    else {
    printf("O numero digitado nao é primo\n");
}
printf("FIM DO PROGRAMA!\n");
    
    system("pause");
    return 0;
}
