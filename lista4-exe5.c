#include <stdio.h>

/*Faça um programa que calcule e mostre a soma dos 50 primeiros numeros pares. */

int main (){

    int calc, i =1;

while (i <= 50 )
{
 if ( i %2 ==0){
   calc = i *( i+1);

 printf("%d\n", calc);}
 i++;
}

}