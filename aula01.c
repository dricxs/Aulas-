/* - aula 01
   - #include <stdio.h> inclui a biblioteca stdio.h
   - um arquivo não funciona com duas funções main
   - %i executa uma operação de numero inteiros
     %s executa uma operação de caracteres
   - int var=o incicialização utilizada para limpar a memoria
   -  %i: inteiro
   -  %f: float
   -  %lf: double
   -  %E: científico 
   -  %X: hexadecimal
*/

#include <stdio.h>

int main() {
  int soma=0;
  soma=4+6;
  printf("O resultado da soma é: %i\n\n", soma);

  printf("Soma 2+2= %i\n\n", 2+2);
  printf("Subtração 4-2= %i\n\n", 4-2);
  printf("Subtração 2-4= %i\n\n", 2-4);
  printf("Multiplicação 2*2= %i\n\n", 2*2);
  printf("Divisão 2/2= %i\n\n", 2/2);
  printf("Divisão 4/2= %i\n\n", 4/2);
  printf("Divisão 2/4= %f\n\n", 2.0/4.0);
  printf("2*3+2= %i\n\n", 2*3+2);
  printf("2*(3+2)= %i\n\n", 2*(3+2));
  printf("(2*3)+2= %i\n\n", (2*3)+2);
  printf("4*3/2= %i\n\n", 4*3/2);
  printf("4/3*2= %i\n\n", 4/3*2);
  printf("264/22= %i\n\n", 264/22);
  return 0;
}