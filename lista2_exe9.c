#include <stdio.h>

 int main(){

  float altura;
  float peso;

  printf("Digite uma altura:");
  scanf("%f", &altura);

  printf("Digite um peso");
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