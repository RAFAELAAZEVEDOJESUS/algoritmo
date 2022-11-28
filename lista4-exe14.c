#include<stdio.h>
int main(){
    /*Elabore um programa que faça a leituira de vários numeros inteiros até que se digite um número negativo.
    O programa tem de retomar o maior e menor numero lido.*/
	
	int n, soma=0 ,media, maior = 0, menor = 1000, i=0;
	
	scanf("%d", &n);
	
	while (n > 0){
		
		if (n > maior)
			maior = n;
		if (n < menor)
			menor = n;
            i++; //vai contar a quantidade de n digitados
			soma = soma + n; //pega o 0 soma mais o n, entao a soma se torna o numero anteior e soma mais
				
		scanf("%d", &n);

		}

      media=soma/i;

	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Media: %d\n", media);// da pra fazer "soma/contador"

}