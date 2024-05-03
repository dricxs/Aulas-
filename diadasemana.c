#include <stdio.h>
#include <stdlib.h>

//executar no shell
//recriar a parte III com switch

int main(int argc, char *argv[]) {

  int diaSemana=0;

  for (int i=0; i<argc; i++)
    printf("%d -> %s\n", i, argv[i]);
  
  if (argc==2){
    diaSemana=atol(argv[1]);
  }
  else if (argc >2 ){
    printf("Muitos argumentos.\n");
    return 1;
  }
  else{
    printf("Entre com o dia da semana (numero).\n");
    return 1;
  }

  switch (diaSemana){
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda\n");
      break;
    case 3:
      printf("Terça\n");
      break;
    case 4:
      printf("Quarta\n");
      break;
    case 5:
      printf("Quinta\n");
      break;
    case 6:
      printf("Sexta\n");
      break;
    case 7:
      printf("Sabado\n");
      break;
    default:
      printf("dia inválido");
  }
  return 0;
}
