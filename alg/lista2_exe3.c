#include <stdio.h>

/*3. Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar.*/

int main(){

int n1;

printf("Digite um numero:");
scanf ("%i", &n1);
if (n1%2 == 0){

    printf("e par.");

}
else { 
    printf (" e impar");


}
 return 0;



}
