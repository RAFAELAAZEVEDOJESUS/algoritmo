#include <stdio.h>

/*3. Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
fornecidos pelo usuário.*/

int main()
{
float num1, num2 ,num3;
    printf("digite 3 numeros para saber sua media: ");
        scanf("%f", &num1);
        scanf("%f", &num2);
        scanf("%f", &num3);
float media = (num1 + num2 + num3) / 3;
    printf("A media dos 3 numeros e: %f", media);
   
return 0;
}