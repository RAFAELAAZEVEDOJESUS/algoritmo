#include <stdio.h>

/*7. Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora
e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de saída.*/


int main()
{
char nome[10];
char sexo;
int matricula;
float horas, salarioHora, salarioMes, salario;


printf("qual seu nome? ");
	scanf("%s", &nome);
		//printf("%s", nome);
getchar();
printf("Digite seu sexo ");
scanf("%c", &sexo);
	sexo = toupper(sexo);
	getchar();
///	printf("%c", sexo);

  printf("Digite sua matricula: ");
  scanf("%d", &matricula);
  //	printf("%d", matricula);

printf("quantas horas vc trabalha por dia? ");
scanf("%f", &horas);
printf("quantas vc ganha por hora em R$? ");
scanf("%f", &salarioHora);	
salarioMes = salarioHora * horas * 30;

//printf("%f", salarioMes); 

printf("\n[NOME]-----> %s\n[SEXO]-----> %c\n[MATRICULA]-----> %i\n[HORAS-DIARIAS]----->%f\n[SALARIO-HORA]----->%f\n[SALARIO-MES]----->%f"
, nome, sexo, matricula, horas, salarioHora,salarioMes);
	
	
	return 0;
}