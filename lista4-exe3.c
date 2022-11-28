#include <stdio.h>
/*Faça um programa que leia um numero inteiro N e depois imprima os N primeiros numeros 
naturais impares (sem usar comando condicional).*/
int main(){
    int n1, i = 1;

    printf("Digite um numero:");
    scanf("%d", &n1);

    while(i <= n1){
    printf("%d\n", i);
    i= i+2;
   
}}