
/*|escreva um programa que, dada a idade de um nadador, classifique-o em uma das categorias 
INFANTIL A - 5 a 7
INAFNTIL B - 8 a 10
JUVENIL A - 11 a 13
JUVENIL B - 14 a 17
SENIOR - ACIMA DE 18
*/

#include <stdio.h>

 int main(){

  int idade;
  printf("Digite um numero:");
  scanf("%i", &idade);

    

  if (idade >=5 && idade <=7)
    printf("infantil A");
  else if (idade >=8 && idade <=10)
    printf ("infantil B");
  else if (idade >=11 && idade <=13)
    printf ("juvenil A");
  else if (idade >=14 && idade <=17)
    printf ("juvenil B");
  else
   printf ("senior");

  return 0;            

}