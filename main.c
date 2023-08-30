#include <stdio.h>
#include <stdlib.h>

int main() {
    
    double numb1, numb2, result;
    char operador, result1, s, n;

do{
      printf("Coloque o primeiro numero: ");
      scanf ("%lf", &numb1);
    
      printf("Digite o sinal (+, -, *, /): ");
      scanf (" %c", &operador);
    
      printf("Coloque o segundo numero: ");
       scanf("%lf", &numb2);
    
     switch (operador){
         case '+':
             result = numb1 + numb2;
              break;
            
           case '-':
               result = numb1 - numb2;
             break;
            
            case '*':
                result = numb1 * numb2;
                break;
                
            case '/':
                if (numb2 !=0) {
                result = numb1 / numb2;
            }
                  else {
                   printf ("Erro: Divisao por zero!! \n");
                 result = 0;
         }
            break;
      defult: 
          printf("Operador invalido!! \n");
            result = 0;
      }
    
         printf ("Resultado: %.2lf\n", result); 
    
    
    printf ("Gostaria de refazer uma conta: S ou N ");
    scanf (" %c", &s, &n); 
    
}
    
    while ( result1 != n );
    
    
    
    
    return 0;
}