#include <stdio.h>

/*9. Faça um programa que leia a altura e o peso de uma pessoa.De acordo com a tabela abaixo,
verifique e mostre qual a classificação dessa pessoa.
    ALTURA              PESO
                        ATÉ 60      ENTRE 60 - 90       ACIMA 90.
    Menor que 1.20        A             D                   G
    1.20 - 1.70           B             E                   H
    Maior que 1.70        C             F                   I   */

 int main(){

  float altura;
  float peso;

  printf("Digite uma altura:");
  scanf("%f", &altura);

  printf("Digite um peso:");
  scanf("%f",&peso);

    

  if(altura <1.20)
    if(peso <=60)
        printf("A");
   else if((peso >=60) && (peso<=90))
        printf("D");
    else
        printf("G");

 else if((altura >=1.20) && (altura<1.70))
    if(peso <=60)
        printf("B");
    else if((peso >=60) && (peso<=90))
        printf("E");
    else
        printf("H");
else
  
    if(peso <=60)
        printf("C");
    else if((peso >=60) && (peso<=90))
        printf("F");
    else
        printf("I");
        














   
   

    









  return 0;            

}