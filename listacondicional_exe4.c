#include <stdio.h>

int main() {
  float salario, prestacao, percentual;

  printf("Informe o salario: R$ ");
  scanf("%f", &salario);

  printf("Informe o valor da prestacao: R$ ");
  scanf("%f", &prestacao);

  percentual = (prestacao / salario) * 100;

  printf("\nA prestacao corresponde a %.2f%% do salario.", percentual);

  if (percentual > 20.0)
     printf("\nEmprestimo nao pode ser concedido.");
  else
     printf("\nEmprestimo pode ser concedido.");
}
