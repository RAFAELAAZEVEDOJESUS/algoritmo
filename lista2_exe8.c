#include <stdio.h>
#include <math.h>

/* 8. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro

Estado:   MG   SP   RJ    MS
IMPOSTO:   7%   12%  15%   8%*/


int main()
{

float valor, valorFinal;
char estado[4];

printf("Qual o valor do produto? ");

 scanf("%f", &valor);

printf("Qual o estado de destino (MG, SP, RJ, MS) ");

 scanf("%s", &estado);

 //função strcmp(string1, string2) da biblioteca string.h compara duas strings

 //strcmp(s1, s2) == 0, se as strings forem iguais

 //strcmp(s1, s2) == 1, se as strings forem diferentes

 //Neste caso estamos comparando a variavel destino com a resposta do usuario

 //Duas comparações por estado pois letras minusculas e maiusculas diferem

if(strcmp( estado, "mg" ) == 0 || strcmp( estado, "MG") == 0  )
{
    valorFinal = valor + (valor * 7 / 100);
    printf("O valor final de MG sera: %f", valorFinal);

        }else if(strcmp(estado, "sp") == 0 || strcmp(estado, "SP")== 0)
        {
         valorFinal = valor + (valor * 12 / 100);
         printf("O valor final de SP sera: %f", valorFinal);

            }else if(strcmp(estado, "rj") == 0 || strcmp(estado, "RJ")== 0)
            {
                valorFinal = valor + (valor * 15 / 100);
                printf("O valor final de RJ sera: %f", valorFinal);
           
                    }else if(strcmp(estado, "ms") == 0 || strcmp(estado, "MS")== 0)
                    {
                        valorFinal = valor + (valor * 8 / 100);
                        printf("O valor final de MS sera: %f", valorFinal);
                    }else
                        printf("Valores invalidos");


}