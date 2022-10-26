#include <stdio.h> 

int main(){ 

    int n1=0;
    int n2=0;
    int i;

    for (i=0; i<5; i++){

    
    printf("Digite um numero1:");
    scanf("%i", &n1);

    printf("Digite um numero2:");
    scanf("%i", &n2);


    if(n1>n2){
        printf ("o maior numero é: %i ", n1);


    }else{
        printf(" o maior numero é: %i ", n2);

    }

    }




    return 0;
    }