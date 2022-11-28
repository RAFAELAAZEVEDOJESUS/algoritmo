#include <stdio.h>

/*4. Construa um algoritmo que a partir da leitura de dois números forneça o resto e o
quociente da divisão do primeiro pelo segundo número.
– Lembre-se das expressões aritméticas:
1. mod → m mod i: resto da divisão de m por i
2. (\) → m \ i: quociente da divisão de m por i
Exemplo: 5 mod 2 é 1
5 \ 2 é 2*/

int main()
{
int num1, num2, quociente, resto;
printf("Digite 2 numeros para saber o quociente e resto: ");
    scanf("%f,",&num1);
    scanf("%f,",&num2);
quociente = num1 / num2;
resto = num1 % num2;
        printf("o quociente e %f e o resto e %f",quociente, resto);

return 0;
}