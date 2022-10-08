#include<stdio.h>
#include<math.h>
int main (){
    char operacao;
    float n1, n2, resultado;
    printf ("quais operacoes voce quer fazer?");
    scanf ("%c", &operacao);
    printf ("Digite a operacao que deseja realizar");
    scanf ("%f%f",&n1,&n2);

    switch (operacao)

    {
    case '+':
     resultado = n1+n2; 
     printf("soma: %.1f", resultado);
     break;

    case '-': 
    resultado = n1-n2; 
    printf ("subtracao: %.1f", resultado);
    break;

    case '*': 
    resultado = n1*n2; 
    printf ("multiplicacao: %.1f", resultado);
    break;

    case '/': 
    resultado = n1/n2; 
    printf ("divisao: %.1f, resultado");
    break;

    case '^':
    resultado = pow(n1,n2);
    printf ("potencia: %.1f", pow(n1,n2));
    break;

    case'r':
    resultado = sqrt (n1);
    printf ("raiz quadrada: %.1f, resultado");
    break;


    
    default: printf("invalido");
        break;
    }




} 