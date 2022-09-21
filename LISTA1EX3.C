//CONSTRUA UM ALGORITMO QUE A PARTIR DA LEITURA DE DOIS NUMEROS INTEIROS 
//FORNEÇA O RESTO E O QUOCIENTE DA DIVISAO DO PRIMEIRO
//PELO SEGUNDO

#include<stdio.h> 
int main (){
    int n1, n2, quociente, resto;
    printf("Digite o valor do resto")
    scanf("%d",&n1)
    printf("Digite o valor do numero 2:")
    scanf("%d",&n2)
    quociente = n1 / n2
    resto = n1 % n2;
    printf("quociente: %d\resto: %d", quociente, resto);

