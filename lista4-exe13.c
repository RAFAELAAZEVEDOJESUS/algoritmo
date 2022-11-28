#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um numero inteiro, maior ou igual a zero, do usuario.
Imprima o enésimo termo da sequencia de Fibonacci. Essa sequencia começa no termo de ordem zero, e 
a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. 
alguns termos dessa sequencia são: 0,1,1,2,3,5,8,13,21 e 34.*/

int main() {
	int n1;
	int a = 1, b = 0, c; 
	
	printf("Quantos termos quer ver: ");
	scanf("%d", &n1);
	
	printf("\n0 ");
	n1--;
	
	while (n1) {
		printf("%d ", a);
		c = a;
		a += b;
		b = c;
		n1--;
	}	  
}