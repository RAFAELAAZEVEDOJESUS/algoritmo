#include<stdio.h>
#include<math.h>

/*Faça um programa que exiba a soma de todos os numeros naturais abaixo de 1.000 que sdão multiplos de 3 ou 5.*/
int main (){
    int soma= 0, i=0;
    while (i <1000){
    if (i %3==0 || i %5 ==0){
    soma+=i;
    }
    i++;
}printf("%d", soma);
}