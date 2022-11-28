#include<stdio.h>

/*Faça um programa que calcule e escreva o valor de S:

           S = + 1 + 3 + 5 + 7 +... + 99 
                 1   2   3   4        55             */

int main(){
	int n = -1;
	float soma = 0, i;
	for (i = 1.0; i <= 55.0; i++){
    	n += 2;
    	soma += (n / i);
	}
	printf("%f", soma);	
}