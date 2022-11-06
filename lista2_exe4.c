#include <stdio.h>

/* 4. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.” */

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
