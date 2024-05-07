//uso do goto em C
// adicionar o return em um label para retornar a parte principal do código e não dar sequência ao próximo bloco
/*
#include <stdio.h>
#include <math.h>

int main() {
  int v1=0,v2=0,resultado=0,op=0;

  printf("Escolha qual operação deseja realizar: \n 1-soma\n 2-multiplicação\n 3-potência\n ");
  scanf("%i", &op);
  printf("\nDigite dois números consecutivos:\n"); 
  scanf("%i %i", &v1, &v2);

  if (op==1)
    goto soma;

  if (op==2)
    goto multiplica;

  if (op==3)
    goto potencia;

  soma:
    resultado=v1+v2;
    printf("\nO resultado da soma dos valores %i + %i é %i.", v1, v2, resultado);
    return 0;
  
  multiplica:
    resultado=v1*v2;
    printf("\nO resultado da multiplicação dos valores %i * %i é %i.", v1, v2, resultado);
    return 0;
  
  potencia:
    resultado=pow(v1,v2);
    printf("\nO resultado da potência dos valores %i * %i é %i.", v1, v2, resultado);

  return 0;
}*/