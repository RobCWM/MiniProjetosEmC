  #include <stdio.h>
  #include <stdlib.h>
  
  
  int main () {
      
      //Calculadora simples
      
      int a,b,c;
      
      printf("Digite um numero desejado:\n");
      scanf("%d",&a);
      
      printf("Escolha qual operação deseja para realizar o cálculo:\n");
      printf("Digite 1 para SOMA\n");
      printf("Digite 2 para SUBTRAÇÃO\n");
      printf("Digite 3 para MULTIPLICAÇÃO\n");
      printf("Digite 4 para DIVISÃO\n");
      scanf("%d",&b);
      
      printf("Digite o segundo valor:\n");
      scanf("%d",&c);
      
      switch (b) {
          case 1:
              printf("A soma é: %d\n",a+c);
              break;
          
            case 2: 
              printf("A subtração é: %d\n",a-c);
              break;
          
            case 3: 
              printf("A multiplicação é: %d\n",a*c);
              break;
          
            case 4: 
              printf("A soma é: %d\n",a/c);
              break;
          
      }
      printf("FIM DO PROGRAMA!");
      
      system ("pause");
      return 0;
  }