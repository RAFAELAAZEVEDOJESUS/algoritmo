#include <stdio.h>
#include <math.h>

/*18. Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um
valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual
o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As
moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de
notas necessárias.*/

int main()
{

float valor;
int A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P; 

printf("Digite o valor para ser separado em notas e moeadas: ");
scanf("%f", &valor);


A = valor / 100;
valor -= (A * 100);
B = valor / 50;
valor -= (B * 50);
C = valor / 20;
valor -= (C * 20);
D = valor / 10;
valor -= (D * 10);
P = valor / 5;
valor -= (P * 5);
E = valor / 2;
valor -= (E * 2);
F = valor / 1;
valor -= (F * 1);
G = valor / 0.50;
valor -= (G * 0.50);
H = valor / 0.25;
valor -= (H * 0.25);
I = valor / 0.10;
valor -= (I * 0.10);
J = valor / 0.05;
valor -= (H * 0.05);
K = valor / 0.01;
valor -= (K * 0.01);


printf("EM %f EXISTEM: ", valor);
printf("\nNOTAS");
printf("\nExistem %i nota(s) de 100\n", A);
printf("Existem %i nota(s) de 50\n", B);
printf("Existem %i nota(s) de 20\n", C);
printf("Existem %i nota(s) de 10\n", D);
printf("Existem %i nota(s) de 5\n", P);
printf("Existem %i nota(s) de 2\n", E);

printf("\nMOEDAS\n");
printf("\nExistem %i moeda(s) de 1\n", F);
printf("Existem %i moeda(s) de 0.50\n", G);
printf("Existem %i moeda(s) de 0.25\n", H);
printf("Existem %i moeda(s) de 0.10\n", I);
printf("Existem %i moeda(s) de 0.05\n", J);
printf("Existem %i moeda(s) de 0.01\n", K);

}