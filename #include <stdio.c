#include <stdio.h> 
int main() { 
    float salario1, salario2, salario3;
    float soma, soma_com_acrescimo; 
    
    // Entrada de dados 
    printf("Digite o primeiro salario: ");
     scanf("%f", &salario1);

      printf("Digite o segundo salario: ");
       scanf("%f", &salario2);
       
        printf("Digite o terceiro salario: ");
         scanf("%f", &salario3);
         
          // Soma inicial 
          soma = salario1 + salario2 + salario3;
           // Acrescenta 10% ao segundo e ao terceiro salÃ¡rio
            salario2 = salario2 + (salario2 * 0.10);
             salario3 = salario3 + (salario3 * 0.10); 
             
             // Soma apÃ³s o acrÃ©scimo 
             soma_com_acrescimo = salario1 + salario2 + salario3; 
             
             // SaÃ­da dos resultados
              printf("\nSoma inicial dos salarios: R$ %.2f\n", soma);
               printf("Segundo salario com 10%% de aumento: R$ %.2f\n", salario2);
    printf("Terceiro salario com 10%% de aumento: R$ %.2f\n", salario3);
    printf("Soma apos os aumentos: R$ %.2f\n", soma_com_acrescimo);
     return 0;
  }
