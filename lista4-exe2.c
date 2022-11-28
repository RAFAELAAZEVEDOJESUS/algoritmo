#include <stdio.h>
/*Faça um programa que leia um numero inteiro positivo N e imprima todos os numeros naturais 
de 0 até N em descrescente.*/
    int main(){
        int n1;

     printf("digite um numero:");
     scanf("%d", &n1);
        while(0 <= n1){
        printf("%d\n", n1);
        n1--;
    }}