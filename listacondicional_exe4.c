#include <stdio.h>

int main() {

float salario;
float prestacao;

printf(" Digite o valor do salario:");
scanf("%f", &salario);

printf("Digite o valor do emprestimo:");
scanf("%f", &prestacao);

if(prestacao > (0.2 * salario)){
printf("Emprestimo nao concedido"); 

}else{
    printf("Emprestimo concedido");
}





}
