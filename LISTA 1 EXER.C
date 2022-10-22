//contrua um algoritmo que leia um numero inteiro de horas 
//ao usuario o correspondente em minutos e segundos 

#include<stdio.h> //biblioteca para comandos printf e scanf
int main (){ 
    // inicio do algoritmo 
int horas, minutos, segundos;

printf("Digite a quantidade de horas"); 
scanf("%d", &horas);
minutos = horas * 60;
segundos = minutos * 60;
printf("minutos: %d\n", horas * 60);
printf("segundos: %d", horas * 3600);

 
}
//fim











