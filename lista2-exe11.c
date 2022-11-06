#include <stdio.h>
#include <math.h>

/*11. leia 2 valores com uma casa decimal (x e y), que devem representar as
coordenadas de um ponto em um plano. A seguir, determine qual o quadrante
ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na
origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem
“Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”,
conforme for a situação.*/

main()
{

float num1, num2;
printf("digite 2 numeros para saber seu quadrante  (x, y)");
scanf("%f%f", &num1, &num2);

if(num1 > 0 && num2 > 0)
printf("Primeiro quadrante");

else if(num1 < 0 && num2 > 0)
printf("Segundo quadrante");

else if(num1 < 0 && num2 < 0)
printf("Terceiro quadrante");

else if(num1 > 0 && num2 < 0)
printf("Quarto quadrante");

else if(num1 == 0 && num2 != 0)
printf("c");

else if(num1 != 0 && num2 == 0)
printf("No eixo Y");

else if(num1 == 0 && num2 == 0)
printf("Na origem");
}