#include <stdio.h>

/*9. Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
15% de comissão sobre suas vendas efetuadas, informar o total a receber no final
do mês, com duas casas decimais.*/

int main()
{
 char nome[100];
 float salario, salarioFinal;
 int vendas;
 
printf("Nome do vendedor: ");
scanf("%s", &nome);
printf("Salario fixo: ");
scanf("%f", &salario);
printf("Total de vendas: ");
scanf("%i", &vendas);
getchar();
salarioFinal = salario + (vendas * 15) / 100;

printf("\nO nome do vendedero e %s\n", nome);
printf("O seu salario fixo e %f\n", salario);
printf("O numero de vendas foi %i\n", vendas);

printf("\nO salario final eh %f\n", salarioFinal);
}