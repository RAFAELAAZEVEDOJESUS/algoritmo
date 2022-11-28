#include <stdio.h>

/*3. Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
booleano. Na sequência, imprima todos com a formatação abaixo.
Numero inteiro: “valor”
Numeros reais:
“valor”
“valor”
Letra: “valor”
String: “valor”
Logico: “valor”c*/

int main()
{

int inteiro;   float real1;    double real2;   
char c, s[100]; 


printf("Digite 1 valor inteiro 2 reais\n");
scanf("%i%f%lf", &inteiro, &real1, &real2);
printf("uma letra uma palavra e um bool\n");
getchar();
scanf("%c%s", &c, &s);

printf("numero inteiro: %i\n", inteiro);
printf("\nnumeros reais: %f e %f", real1, real2);
printf("\nletra: %c", c);
printf("\nstring: %s", s);

}