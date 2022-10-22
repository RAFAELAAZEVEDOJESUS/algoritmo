#include <stdio.h>

int main(){
    int ano =0;
     char nome[30];

    printf("Qual seu nome?");
    scanf("%29s",nome);
    fflush(stdin);
    printf("Qual o ano que nasceu?");
    scanf("%i",&ano);


    while (!(ano >= 1900 && ano <= 2022) ){
        printf("Digite o ano do nascimento:");
        scanf("%i", &ano);
    }
    

    printf("Valor do ano %d\n", ano);

    if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))
    {
        printf("O ano e bissexto.");
    }else{
        printf("O ano nao e bissexto. \n");
    }
}

