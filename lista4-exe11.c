#include<stdio.h>
#include<math.h>
/*Faça um algoritmo que leia um numero positivo e imprima seus divisores. Exemplo: os divisores do numero 66
são: 1,2,3,6,11,22,33 e 66.*/
int main (){
    int n1, i = 1;

printf("Digite um numero:");
scanf("%d", &n1);

while (i<= n1){
if (n1 %i ==0){
    printf("%d ", i);}
    i++;}}