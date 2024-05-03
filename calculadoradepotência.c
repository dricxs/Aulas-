#include <stdio.h>
#include <math.h> /*boblioteca para a função pow*/

int main(void) {

  int x=0, n=0, resultado=0;
  
  printf("Para realizar o cálculo de potência é necessário que você insira dois valores para X e N. Onde X é a base e N o expoente.");
  printf("\n\nValor de X:");
  scanf("%d", &x);
  printf("\nValor de N:");
  scanf("%d", &n);

  resultado=pow(x,n);
    
  printf("\n\nO resultado de %d elevado a %d é: %d", x, n, resultado);
  return 0;
}
