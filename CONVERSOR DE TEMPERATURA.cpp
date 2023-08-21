  #include <stdio.h>
  #include <stdlib.h>
  
  
  int main () {
      
//Conversor de Temperatura: Faça um programa que converta uma temperatura de Celsius para Fahrenheit ou vice-versa, de acordo com a escolha do usuário.      
      int tipo,temperatura,Celsius,Fahrenheit;
      
      printf("CONVERSOR DE TEMPERATURA!\n");
      printf("Escolha o tipo de temperatura\nDigite 1 para Fahrenheit ou Digite 2 para o Celsius\n");
      scanf("%d",&tipo);
      printf("Digite o valor da temperatura para que seja convertido:\n");
      scanf("%d",&temperatura);
      
     Fahrenheit = temperatura*1.8 + 32;
     Celsius = temperatura/1.8 - 32;
     
      switch (tipo) {
      case 1:
      printf("%d graus celsius convertido para Fahrenheit é: %d\n",temperatura,Fahrenheit);
      break;
      
      case 2:
      printf("%d graus Fahrenheit convertido para Celsius é: %d\n",temperatura,Celsius);
      break;
      default:
      printf("ERRO! DIGITE UM VALOR VALIDO E TENTE NOVAMENTE\n");
      }
  printf("FIM DO PROGRAMA!\n");
      system ("pause");
      return 0;
  }