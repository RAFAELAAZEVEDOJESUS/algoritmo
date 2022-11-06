#include <stdio.h>

/*8. Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B -
C * D). Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = “valor de DIFERENCA*/

int main()
{
int a, b, c, d, x;
printf("Digite 4 valores");
scanf("%i%i%i%i", &a, &b, &c, &d);

x = a * b - c * d;
printf("%i * %i -  %i * %i ==  %i", a, b, c, d,
 x);
}