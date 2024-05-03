#include <stdio.h>

int main(){
  int v1=0;
  int var1=0;
  int var2=0;
  int opt=0;

  printf("encontre o primeiro valor:");
  scanf("%i", &var1);

  printf("encontre o segundo valor:");
  scanf("%i", &var2);
  
  printf("\n 1- adição \n 2- subtração \n 3- multiplicação \n 4-divisão \n");
  scanf("%i" , &opt);

  if (opt==1)
    v1=var1+var2;  
  if (opt==2)
    v1=var1-var2;
  if (opt==3)
    v1=var1*var2;
  if (opt==4)
    v1=var1/var2;

  printf("valores: %i %d %d %d %X \n", v1, v1, v1, v1, v1);

  return 0;
}
