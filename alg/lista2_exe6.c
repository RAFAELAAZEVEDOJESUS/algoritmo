#include <stdio.h>

/*6. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
◦ Homens: (72,7 * h) – 58
◦ Mulheres: (62,1 * h) – 44,7 */
 
int main()
{

float h, homem, mulher = 0;
char  sexo;  

printf("Digite seu sexo (M ou F) e sua altura: ");
scanf("%c%f", &sexo, &h);
sexo = toupper(sexo);
 
if(sexo == 'M')
     printf("Seu peso ideal e %f", homem = (72.7 * h) - 58);

if(sexo == 'F')
    printf("Seu peso ideal e %f", mulher = (62.1 * h) - 58);
    
}