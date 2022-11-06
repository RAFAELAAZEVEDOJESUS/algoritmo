#include <stdio.h>
#include <math.h>

/*17. Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou
5, mas não simultaneamente pelos dois.*/

int main()
{

int num1, c;

printf("Digite um numero para saber se e divisivel por 3 ou 5: ");
scanf("%i", &num1);

printf("\n(1) Divisivel por 3?\n(2) Divisivel por 5?\n\n");

printf("Escolha uma das opcoes acima: ");
scanf("%i", &c);

switch(c)
{

case 1: 
        if( num1 % 3 == 0 )
        printf("\nE divisivel por 3\n");
        else
        printf("\nNao e divisivel por 3\n");
        
break;
case 2:
        if( num1 % 5 == 0 )        
        printf("\nE divisivel por 5\n");
        else
        printf("\nNao e divisivel por 5\n");
break;        

default: 
    printf("\nOpcao invalida");
}
}