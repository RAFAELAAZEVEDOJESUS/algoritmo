#include <stdio.h> 
#include <locale.h>

int main(){ 
    char*locale;
    locale = setlocale (LC_ALL, "Portuguese");

    int n1=0;
    int n2=0;

    printf("Digite um numero1:");
    scanf("%i", &n1);

    printf("Digite um numero2");
    scanf("%i", &n2);


    if(n1>n2){
        printf ("o maior numero é: %i ", n1);


    }else{
       // printf(" o maior numero é: %i ", n2);
        if(n1 == n2){
            printf("Numeros iguais.");
        
        }else{
            printf(" o maior numero é: %i", n2);

        }

    }






    return 0;
}