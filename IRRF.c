#include <stdio.h>

int main() {

  float renda=0;
  float imp=0;
  float sal=0;

  printf("\nO Imposto de Renda é um tributo federal aplicado anualmente sobre a renda, ou seja, sobre o que cada brasileiro ganha. Os valores arrecadados com o Imposto de Renda são destinados a áreas como saúde, educação, segurança, programas de transferência de renda e diversos serviços públicos prestados ao cidadão brasileiro.");

  printf("\n\n  -------------------------------------------------------------------------");
  printf("\n  |                           TABELA IRRF                                 |");
  printf("\n  -------------------------------------------------------------------------");
  printf("\n\n  | faixa 1: abaixo de R$2.259,20 - isento                                |");
  printf("\n\n  -------------------------------------------------------------------------");
  printf("\n\n  | faixa 2: de R$2.259,01 a R$2.666,68 - alíquota 7,5%% - dedução R$169,44|");
  printf("\n\n  -------------------------------------------------------------------------");
  printf("\n\n  | faixa 3: de R$2.666,69 a R$3.751,05 - alíquota 15%% - dedução R$381,44 |");
  printf("\n\n  -------------------------------------------------------------------------");
  printf("\n\n  | faixa 4: de R$3.751,06 a R$4.664,68 -alíquota 22,5%% - dedução R$662,77|");
  printf("\n\n  -------------------------------------------------------------------------");
  printf("\n\n  | faixa 5: acima de R$R$4.664,69 - alíquota 27,5%% - dedução R$896,00    |");
  printf("\n\n  -------------------------------------------------------------------------");

  printf("\n\n\nPronto(a) para saber se contribuirá ou não com o imposto de renda?");
  
  printf("\n\nDigite a sua renda mensal: ");
  scanf("%f", &renda);

  if (renda <= 2259.20)
    printf("\n Você está isento do pagamento de imposto.");
  
  if (renda > 2259.21 && renda <= 2826.65){
    imp= (renda * 7.5/100)-169.44;
    printf("\n alíquota 7,5%% e dedução de R$ 169,44, que equivale a: R$ %.2f",imp);
    sal=renda-imp;
    printf("\n\n O valor do salário liquido será de: %.2f", sal);
  }
  
  if (renda > 2826.65 && renda <= 3751.05){
    imp= (renda * 15/100) - 381.44;
    printf("\n alíquota 15%% e dedução de R$ 381,44, que equivale a R$ %.2f",imp);
    sal=renda-imp;
    printf("\n\n O valor do salário liquido será de: %.2f", sal);
  }
  
  if (renda > 3751.00 && renda <= 4664.00) {
    imp= (renda * 22.5/100)- 662.77;
    printf("\n alíquota 22,5%% e dedução de R$ 662,77, que equivale a R$ %.2f",imp);
    sal=renda-imp;
    printf("\n\n O valor do salário liquido será de: %.2f", sal);
  }
  
  if (renda> 4664.00){
    imp=(renda * 27.5/100)-896.00;
    printf("\n alíquota 27,5%% e dedução de R$ 896,00, que equivale a R$ %.2f", imp);
    sal=renda-imp;
    printf("\n\n O valor do salário liquido será de: %.2f", sal);
  }
  
  return 0;
}
